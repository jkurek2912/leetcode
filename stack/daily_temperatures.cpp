// https://leetcode.com/problems/daily-temperatures/

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
        vector<int> dailyTemperatures(vector<int>& temperatures) {
            stack<pair<int, int>> stack;
            vector<int> result(temperatures.size());
            for (int i = 0; i < temperatures.size(); i++) {
                while (!stack.empty() && temperatures[i] > stack.top().first) {
                    result[stack.top().second] = i - stack.top().second;
                    stack.pop();
                }
                stack.push({temperatures[i], i});
            }
            return result;
        }
    };