from __future__ import print_function

import sys
print (sys.path)
sys.path.remove('/home2/wsdm/gyy/sjh_project/rllab')
sys.path.append('/home2/wsdm/gyy/sjh_project/env/rllab')
print (sys.path)

from rllab.envs.box2d.cartpole_env import CartpoleEnv
from rllab.policies.gaussian_mlp_policy import GaussianMLPPolicy
from rllab.envs.normalized_env import normalize
import numpy as np
import theano
import theano.tensor as TT
from lasagne.updates import adam

# Environment Imports
from sandbox.rocky.tf.envs.base import TfEnv
from rllab.envs.normalized_env import normalize
import dnc.envs as dnc_envs

import pdb

pdb.set_trace()
env = TfEnv(normalize(dnc_envs.create_deterministic('ant'))) # No stochasticity in initial state: should be solved easily by TRPO

# Initialize a neural network policy with a single hidden layer of 8 hidden units
policy = GaussianMLPPolicy(env.spec, hidden_sizes=(8,))

# We will collect 100 trajectories per iteration
N = 100
# Each trajectory will have at most 100 time steps
T = 100
# Number of iterations
n_itr = 100
# Set the discount factor for the problem
discount = 0.99
# Learning rate for the gradient update
learning_rate = 0.01

paths = []

for _ in range(N):
    observations = []
    actions = []
    rewards = []

    pdb.set_trace()
    observation = env.reset()

    for _ in range(T):
        # policy.get_action() returns a pair of values. The second one returns a dictionary, whose values contains
        # sufficient statistics for the action distribution. It should at least contain entries that would be
        # returned by calling policy.dist_info(), which is the non-symbolic analog of policy.dist_info_sym().
        # Storing these statistics is useful, e.g., when forming importance sampling ratios. In our case it is
        # not needed.
        action, _ = policy.get_action(observation)
        # Recall that the last entry of the tuple stores diagnostic information about the environment. In our
        # case it is not needed.
        pdb.set_trace()
        next_observation, reward, terminal, _ = env.step(action)
        observations.append(observation)
        actions.append(action)
        rewards.append(reward)
        observation = next_observation
        if terminal:
            # Finish rollout if terminal state reached
            break

    # We need to compute the empirical return for each time step along the
    # trajectory
    returns = []
    return_so_far = 0
    for t in range(len(rewards) - 1, -1, -1):
        return_so_far = rewards[t] + discount * return_so_far
        returns.append(return_so_far)
    # The returns are stored backwards in time, so we need to revert it
    returns = returns[::-1]

    paths.append(dict(
        observations=np.array(observations),
        actions=np.array(actions),
        rewards=np.array(rewards),
        returns=np.array(returns)
    ))


observations = np.concatenate([p["observations"] for p in paths])
actions = np.concatenate([p["actions"] for p in paths])
returns = np.concatenate([p["returns"] for p in paths])


f = open("./c.txt", 'w+')
print(paths, file=f)
