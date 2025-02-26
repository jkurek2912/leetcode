// https://leetcode.com/problems/contains-duplicate/

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

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> set;
    for (int i = 0; i < nums.size(); i++) {
        if (set.find(nums[i]) != set.end()) {
            return true;
        }
        set.insert(nums[i]);
    }
    return false;
}