// https://leetcode.com/problems/group-anagrams/

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
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            if (strs.size() == 0) return vector<vector<string>>();
            unordered_map<string, vector<string>> ans;
            vector<int> count(26);
            for (string s : strs) {
                fill(begin(count), end(count), 0);
                for (char c : s) count[c - 'a']++;
                string key = "";
                for (int i = 0; i < 26; i++) {
                    key += "#";
                    key += to_string(count[i]);
                }
                if (ans.find(key) == ans.end()) ans[key] = vector<string>();
                ans[key].push_back(s);
            }
            vector<vector<string>> result;
            for (auto itr = ans.begin(); itr != ans.end(); ++itr)
                result.push_back(itr->second);
            return result;
        }
    };