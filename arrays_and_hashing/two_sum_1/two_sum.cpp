// https://leetcode.com/problems/two-sum/

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

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::unordered_map<int, int> map;
            for (int i = 0; i < nums.size(); i++) {
                if (map.find(target - nums[i]) != map.end()) {
                    return {i, map[target - nums[i]]};
                }
                map[nums[i]] = i;
            }
            return {};
        }
    };