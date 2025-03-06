// https://leetcode.com/problems/longest-consecutive-sequence/

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
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty())
                return 0;
            unordered_set<int> set;
            unordered_set<int> starts;
            int result = 1;
            for (int num : nums) {
                set.insert(num);
            }
            for (int num : nums) {
                int sequence = 1;
                if (set.find(num - 1) != set.end() || starts.find(num) != starts.end()) {
                    continue;
                }
                starts.insert(num);
                while (set.find(++num) != set.end()) {
                    sequence++;
                }
                result = max(sequence, result);
            }
            return result;
        }
    };