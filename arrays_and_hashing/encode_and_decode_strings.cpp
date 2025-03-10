// https://leetcode.com/problems/encode-and-decode-strings/

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

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string result;
        for (string word : strs)
        {
            result += to_string(word.size()) + "#" + word;
        }
        return result;
    }

    vector<string> decode(string s)
    {
        vector<string> result;
        for (int i = 0; i < s.size(); i++)
        {
            int num = 0;
            while (s[i] != '#')
            {
                num *= 10;
                num += (s[i] - '0');
                i++;
            }
            i++;
            string word;
            for (int j = 0; j < num; j++)
            {
                word += s[i + j];
            }
            result.push_back(word);
            i += num - 1;
        }
        return result;
    }
};