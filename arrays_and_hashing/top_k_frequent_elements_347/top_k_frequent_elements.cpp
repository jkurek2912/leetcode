// https://leetcode.com/problems/top-k-frequent-elements/

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

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i : nums)
        {
            map[i]++;
        }
        vector<vector<int>> frequencies(nums.size() + 1);
        for (const auto &it : map)
        {
            frequencies[it.second].push_back(it.first);
        }
        for (int i = frequencies.size() - 1; i >= 0; i--)
        {
            for (int num : frequencies[i])
            {
                if (result.size() >= k)
                    break;
                result.push_back(num);
            }
        }
        return result;
    }
};
