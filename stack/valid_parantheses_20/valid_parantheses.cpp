// https://leetcode.com/problems/valid-parentheses/

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
        bool isValid(string s) {
            if (s.size() == 1)
                return false;
            stack<char> stack;
            for (char c : s) {
                if (c == '(' || c == '{' || c == '[')
                    stack.push(c);
                if (stack.empty())
                    return false;
                if (c == ')') {
                    if (stack.top() == '(') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
                if (c == '}') {
                    if (stack.top() == '{') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
                if (c == ']') {
                    if (stack.top() == '[') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
            }
            return stack.empty();
        }
    };