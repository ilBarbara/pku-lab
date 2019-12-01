""" This file defines a cost sum of arbitrary other costs. """
import copy

from gps.algorithm.cost.config import COST_SUM
from gps.algorithm.cost.cost import Cost
from gps.proto.gps_pb2 import JOINT_ANGLES, JOINT_VELOCITIES, \
        END_EFFECTOR_POINTS, END_EFFECTOR_POINT_VELOCITIES
import numpy as np

class CostSum(Cost):
    """ A wrapper cost function that adds other cost functions. """
    def __init__(self, hyperparams):
        config = copy.deepcopy(COST_SUM)
        config.update(hyperparams)
        Cost.__init__(self, config)

        self._costs = []
        self._weights = self._hyperparams['weights']

        for cost in self._hyperparams['costs']:
            self._costs.append(cost['type'](cost))

    def eval(self, sample):
        """
        Evaluate cost function and derivatives.
        Args:
            sample:  A single sample
        """
        '''
        jv = sample.get(JOINT_VELOCITIES)
        eepv = sample.get(END_EFFECTOR_POINT_VELOCITIES)

        boxpos = jv[:, 2:5]
        fingerpos = eepv[:, 7:10]
        tgtpos = np.zeros((100,3))
        for i in range(100):
            tgtpos[i] = [0.6, 0.2, 0.1]
            
        fetchdist = np.sum((boxpos - fingerpos) ** 2, axis=1)
        liftdist = np.sum((boxpos - tgtpos) ** 2, axis=1)
        
        l = fetchdist + liftdist
        '''
        #l = fetchdist

        eepv = sample.get(END_EFFECTOR_POINT_VELOCITIES)

        vec = eepv[:, 64:66]            
        dist = np.sum(vec ** 2, axis=1)
        l = dist
        
        lx, lu, lxx, luu, lux = 0, 0, 0, 0, 0

        '''
        # Compute weighted sum of each cost value and derivatives.
        weight = self._weights[0]
        l = l * weight
        lx = lx * weight
        lu = lu * weight
        lxx = lxx * weight
        luu = luu * weight
        lux = lux * weight
        for i in range(1, len(self._costs)):
            pl, plx, plu, plxx, pluu, plux = self._costs[i].eval(sample)
            weight = self._weights[i]
            l = l + pl * weight
            lx = lx + plx * weight
            lu = lu + plu * weight
            lxx = lxx + plxx * weight
            luu = luu + pluu * weight
            lux = lux + plux * weight
        '''
        
        return l, lx, lu, lxx, luu, lux