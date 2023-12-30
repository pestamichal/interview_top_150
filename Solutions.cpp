#include "Solutions.h"
#include <iostream>


int Solutions::removeDuplicates(vector<int> &nums) {
    int currElem = nums[0];
    int count = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == currElem && count < 2){
            count++;
        }else if(nums[i] == currElem && count == 2){
            nums.erase(nums.begin() + i);
            i--;
        }else{
            count = 1;
            currElem = nums[i];
        }
    }
    return nums.size();
}

void Solutions::rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;

    int count = 0;
    int start = 0;
    while (count < n) {
        int current = start;
        int prev = nums[start];
        do {
            int next_index = (current + k) % n;
            std::swap(nums[next_index], prev);
            current = next_index;
            count++;
        }
        while (current != start);
        start++;
    }

}

int Solutions::maxProfit(vector<int> &prices) {
    int n = prices.size(), buy = prices[0], sell = 0, total = 0;
    if(n == 1) return 0;
    for(int i = 1;i < n; i++){
        if(prices[i] < sell){
            total += sell - buy;
            buy = prices[i];
            sell = prices[i];
        }
        if(prices[i] < buy){
            buy = prices[i];
            sell = prices[i];
        }
        if(prices[i] > sell) sell = prices[i];
    }
    total += sell - buy;
    return total;
}

bool Solutions::canJump(vector<int> &nums) {
    int n = nums.size(), range = nums[0];
    for(int i = 1; i < n; i++){
        range--;
        if(range < 0) return false;
        if(nums[i] > range) range = nums[i];
    }
    return true;
}

int Solutions::jump(vector<int> &nums) {
    int n = nums.size(), range = nums[0], count = 0, best = nums[0];
    if(n == 1) return 0;
    if(n == 2) return 1;
    for(int i = 1; i < n - 1; i++){
        range--;
        if(best < nums[i] + i){
            best = nums[i] + i;
        }
        if(range == 0){
            count++;
            range = best - i;
            best = range;
        }
    }
    return count + 1;
}

int Solutions::hIndex(vector<int> &citations) {
    int n = citations.size(), h_index = 0;
    vector<int> count(n + 1, 0);
    for(int i = 0; i < n; i++){
        if(citations[i] >= n) count[n]++;
        else count[citations[i]]++;
    }
    for(int i = count.size() - 2; i >= 0; i--){
        count[i] += count[i + 1];
    }
    for(int i = 1; i < count.size(); i++){
        if(count[i] >= i) h_index = i;
    }

    return h_index;
}

vector<int> Solutions::productExceptSelf(vector<int> &nums) {
    vector<int> answer(nums.size(), 1);
    int size = nums.size();

    int left = 1;
    for(int i = 0; i < size; i++){
        answer[i] *= left;
        left *= nums[i];
    }

    int right = 1;
    for(int i = size - 1;i >= 0; i--){
        answer[i] *= right;
        right *= nums[i];
    }

    return answer;
}

int Solutions::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int startIndex = -1, index = 0, tank;
    int size = gas.size();

    for(int i = 0; i < size; i++){
        if(startIndex == -1 && gas[i] >= cost[i]){
            startIndex = i;
            tank = gas[i] - cost[i];
        }else if(startIndex != -1){
            tank += gas[i] - cost[i];
            if(tank < 0){
                startIndex = -1;
                tank = 0;
            }
        }
        index = i;
    }
    if(startIndex == -1) return startIndex;
    index = (index + 1) % size;
    while(index != startIndex){

        tank += gas[index] - cost[index];
        if(tank < 0){
            startIndex = -1;
            break;
        }

        index = (index + 1) % size;
    }

    return startIndex;
}

int Solutions::candy(vector<int> &ratings) {

    int size = ratings.size();
    vector<int> candy(size, 1);

    for(int i = 1; i < size; ++i){
        if(ratings[i] > ratings[i - 1]){
            candy[i] = candy[i - 1] + 1;
        }
    }
    for(int i = size - 2; i >= 0; --i){
        if(ratings[i] > ratings[i + 1]){
            candy[i] = std::max(candy[i], candy[i + 1] + 1);
        }
    }

    int candyCount = 0;
    for(int c : candy){
        candyCount += c;
    }
    return candyCount;
}

int Solutions::trap(vector<int> &height) {

    int size = height.size();
    int rain = 0, tempRain = 0, wall = 0;

    for(int i = 0; i < size; i++){
        if(height[i] >= wall){
            rain += tempRain;
            tempRain = 0;
            wall = height[i];
        }
        else if(wall > 0){
            tempRain += wall - height[i];
        }
    }
    wall = 0;
    tempRain = 0;
    for(int i = size - 1; i >= 0; i--){
        if(height[i] > wall){
            rain += tempRain;
            tempRain = 0;
            wall = height[i];
        }
        else if(wall > 0){
            tempRain += wall - height[i];
        }
    }
    return rain;
}


