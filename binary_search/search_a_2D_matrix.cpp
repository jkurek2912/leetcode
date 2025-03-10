// https://leetcode.com/problems/search-a-2d-matrix/

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
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int l = 0;
            int r = matrix.size() - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                int a = matrix[mid][0];
                int b = matrix[mid][matrix[0].size() - 1];
                if (a <= target && b >= target) {
                    int left = 0;
                    int right = matrix[0].size() - 1;
                    while (left <= right) {
                        int col = left + (right - left) / 2;
                        if (matrix[mid][col] == target) {
                            return true;
                        }
                        if (matrix[mid][col] > target) {
                            right = col - 1;
                        } else {
                            left = col + 1;
                        }
                    }
                    return false;
                } else if (a < target && b < target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            return false;
        }
    };