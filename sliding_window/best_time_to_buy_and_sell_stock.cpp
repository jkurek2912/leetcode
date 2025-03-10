// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

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
        int maxProfit(vector<int>& prices) {
            if (prices.size() == 1) {
                return 0;
            }
            int maxProf = 0;
            int l = 0;
            int r = 1;
            while (r < prices.size()) {
                if (prices[l] < prices[r]) {
                    int prof = prices[r] - prices[l];
                    maxProf = max(maxProf, prof);
                    r++;
                } else {
                    l = r;
                    r++;
                }
            }
            return maxProf;
        }
    };