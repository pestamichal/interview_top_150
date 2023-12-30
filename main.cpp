#include <iostream>
#include <vector>
#include "Solutions.h"

int main() {

    //Gas station - MEDIUM
    vector<int> gas = {2, 3, 4};
    vector<int> cost = {3, 4, 3};
    cout << "GAS STATION" << endl;
    cout << "Solution: " << Solutions::canCompleteCircuit(gas, cost) << endl;
    cout << endl;

    //Candy - HARD
    vector<int> ratings = {1,6,10,8,7,3,2};
    cout << "CANDY" << endl;
    cout << "Solution: " << Solutions::candy(ratings) << endl;
    cout << endl;

    //Trapping Rain Water - HARD
    vector<int> height = {2, 0, 2};
    cout << "TRAPPING RAIN WATER" << endl;
    cout << "Solution: " << Solutions::trap(height) << endl;
    cout << endl;

    return 0;
}
