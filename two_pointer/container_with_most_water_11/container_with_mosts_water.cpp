// https://leetcode.com/problems/container-with-most-water/

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
        int maxArea(vector<int>& height) {
            int result = 0;
            int l = 0;
            int r = height.size() - 1;
            while (l < r) {
                int area = min(height[l], height[r]) * (r - l);
                result = max(result, area);
                if (height[l] <= height[r]) {
                    l++;
                } else {
                    r--;
                }
            }
            return result;
        }
    };