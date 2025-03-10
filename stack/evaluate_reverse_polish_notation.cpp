// https://leetcode.com/problems/evaluate-reverse-polish-notation/

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
        int evalRPN(vector<string>& tokens) {
            stack<int> nums;
            unordered_set<string> ops = {"+", "-", "*", "/"};
            for (string s : tokens) {
                if (ops.find(s) != ops.end()) {
                    int a = nums.top();
                    nums.pop();
                    int b = nums.top();
                    nums.pop();
                    if (s == "+") {
                        nums.push(b + a);
                    } else if (s == "-") {
                        nums.push(b - a);
                    } else if (s == "*") {
                        nums.push(b * a);
                    } else {
                        nums.push(b / a);
                    }
                } else {
                    nums.push(stoi(s));
                }
            }
            return nums.top();
        }
    };