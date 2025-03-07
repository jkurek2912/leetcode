// https://leetcode.com/problems/valid-palindrome/

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
        bool isPalindrome(string s) {
            if (s.empty() || s.size() == 1)
                return true;
            int l = 0;
            int r = s.size() - 1;
            while (l < r) {
                while (l < r && !isalnum(s[l]))
                    l++;
                while (l < r && !isalnum(s[r]))
                    r--;
                if (tolower(s[l]) != tolower(s[r]))
                    return false;
                l++;
                r--;
            }
            return true;
        }
    };