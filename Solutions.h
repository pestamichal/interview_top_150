#ifndef INTERVIEW_TOP_150_SOLUTIONS_H
#define INTERVIEW_TOP_150_SOLUTIONS_H

#include <vector>
#include <iostream>

using namespace std;

class Solutions {
public:
    static int removeDuplicates(vector<int>& nums); // Remove duplicates from Sorted Array
    static void rotate(vector<int>& nums, int k); // Rotate Array
    static int maxProfit(vector<int>& prices); //Best Time to Buy and Sell Stock ||
    static bool canJump(vector<int>& nums); //Jump Game
    static int jump(vector<int>& nums); //Jump Game ||
    static int hIndex(vector<int>& citations); // H-Index
    static vector<int> productExceptSelf(vector<int>& nums); //Product of Array Except Self
    static int canCompleteCircuit(vector<int>& gas, vector<int>& cost); //Gas Station
    static int candy(vector<int>& ratings); //Candy
    static int trap(vector<int>& height); //Trapping Rain Water
    static string longestCommonPrefix(vector<string>& strs); //Longest Common Prefix
    static string reverseWords(string s); //Reverse Words in a String
    static string convert(string s, int numRows); //Zigzag Conversion
    static int strStr(string haystack, string needle); //Find the Index of the First Occurrence in a String
};


#endif //INTERVIEW_TOP_150_SOLUTIONS_H
