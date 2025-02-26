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

using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size()) return false;
            unordered_map<char, int> sMap;
            unordered_map<char, int> tMap;
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