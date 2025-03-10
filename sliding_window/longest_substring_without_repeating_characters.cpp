// https://leetcode.com/problems/longest-substring-without-repeating-characters/

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
        int lengthOfLongestSubstring(string s) {
            if (s.empty())
                return 0;
            if (s.size() == 1)
                return 1;
            unordered_set<char> letters;
            int l = 0;
            int r = 0;
            int maxLength = 0;
            while (r < s.size()) {
                while (letters.find(s[r]) != letters.end()) {
                    letters.erase(s[l]);
                    l++;
                    cout << s[r] << " ";
                }
                letters.insert(s[r]);
                r++;
                maxLength = max(maxLength, r - l);
            }
            return maxLength;
        }
    };
    