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

    //Longest Common Prefix
    vector<string> strs = {"dog","racecar","car"};
    cout << "LONGEST COMMON PREFIX" << endl;
    cout << "Solution: " << Solutions::longestCommonPrefix(strs) << endl;
    cout << endl;

    //Reverse Words in a String
    string s = "a good   example";
    cout << "REVERSE WORDS IN A STRING" << endl;
    cout << "Solution: " << Solutions::reverseWords(s) << endl;
    cout << endl;

    //Zigzag Conversion
    string s1 = "PAYPALISHIRING";
    int rowsNum = 3;
    cout << "ZIGZAG CONVERSION" << endl;
    cout << "Solution: " << Solutions::convert(s1, rowsNum) << endl;
    cout << endl;

    //Find the Index of the First Occurrence in a String
    string haystack = "a", needle = "a";
    cout << "FIND THE INDEX OF THE FIRST OCCURRENCE IN A STRING" << endl;
//    Solutions::strStr(haystack, needle);
    cout << "Solution: " << Solutions::strStr(haystack, needle) << endl;
    cout << endl;

    return 0;
}
