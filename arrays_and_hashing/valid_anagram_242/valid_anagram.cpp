// https://leetcode.com/problems/valid-anagram/

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

class Solution {
    public:
        bool isAnagram(std::string s, std::string t) {
            if (s.size() != t.size()) return false;
            std::unordered_map<char, int> sMap;
            std::unordered_map<char, int> tMap;
            for (int i = 0; i < s.size(); i++) {
                sMap[s[i]]++;
            }
            for (int i = 0; i < t.size(); i++) {
                tMap[t[i]]++;
            }
            for (int i = 0; i < s.size(); i++) {
                if (sMap[s[i]] != tMap[s[i]]) {
                    return false;
                }
            }
            return true;
        }
    };