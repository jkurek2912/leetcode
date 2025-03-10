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
            vector<vector<string>> result;
            unordered_map<string, vector<string>> map;
            
            // create frequency array of letters
            for (string& word : strs) {
                vector<int> freq(26, 0);
                for (char letter : word) {
                    freq[letter - 'a']++;
                }
                
                // use frequency array to create key to hashmap
                string key;
                for (int i : freq) {
                    key += "#" + to_string(i);
                }
    
                // add word to hashmap using key
                map[key].push_back(word);
            }
            

            // populate and return result vector
            for (const auto& it : map) {
                result.push_back(it.second);
            }
            return result;
        }
    };