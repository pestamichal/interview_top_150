//
// Created by pesta on 26.12.2023.
//

#include "Solutions.h"

int Solutions::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int startIndex = -1;
    int tank = 0;
    int size = gas.size();

    for(int i = 0; i < size; i++){
        if(startIndex == -1 && gas[i] >= cost[i]){
            startIndex = i;
            tank = gas[i] - cost[i];
        }else if(tank < cost[i]){
            startIndex = -1;
            tank = 0;
        }
    }
    if(startIndex == -1) return startIndex;

    for(int i = startIndex; i < (startIndex - 1) % size; i++){

    }

    return startIndex;
}
