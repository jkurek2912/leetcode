// https://leetcode.com/problems/koko-eating-bananas/

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
        bool can(vector<int>& piles, int h, int k) {
            for (int bananas : piles) {
                h -= bananas / k;
                h -= (bananas % k != 0) ? 1 : 0;
                if (h < 0)
                    return false;
            }
            return true;
        }
    
        int minEatingSpeed(vector<int>& piles, int h) {
            int l = 1;
            int r = 10000000000;
            int m = 0;
            for (int i = 0; i < 40; i++) {
                m = l + (r - l) / 2;
                if (can(piles, h, m)) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            return m;
        }
    };