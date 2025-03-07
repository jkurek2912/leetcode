// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <limits>
#include <cmath>
#include <iomanip>
#include <set>
#include <bits/stdc++.h>
#include <chrono>
#include <iomanip>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            vector<int> result;
            int l = 0;
            int r = numbers.size() - 1;
            while (l < r) {
                int sum = numbers[l] + numbers[r];
                if (sum > target)
                    r--;
                else if (sum < target)
                    l++;
                else
                    return {l + 1, r + 1};
            }
            return {-1, -1};
        }
    };