#include <iostream>
#include <vector>
#include "Solutions.h"

int main() {

    //Gas station
    vector<int> gas = {2, 3, 4};
    vector<int> cost = {3, 4, 3};
    cout << "GAS STATION" << endl;
    cout << "Solution: " << Solutions::canCompleteCircuit(gas, cost) << endl;
    cout << endl;


    return 0;
}
