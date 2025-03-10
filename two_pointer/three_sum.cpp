// https://leetcode.com/problems/3sum/

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
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size() - 2; i++) {
                if (i == 0 || nums[i] != nums[i - 1]) {
                    int l = i + 1;
                    int r = nums.size() - 1;
                    while (l < r) {
                        if (nums[i] + nums[l] + nums[r] == 0) {
                            result.push_back({nums[i], nums[l], nums[r]});
                            while (l < r && nums[l] == nums[l + 1])
                                l++;
                            while (l < r && nums[r] == nums[r - 1])
                                r--;
                            l++;
                            r--;
                        } else if (nums[i] + nums[l] + nums[r] > 0) {
                            r--;
                        } else {
                            l++;
                        }
                    }
                }
            }
            return result;
        }
    };