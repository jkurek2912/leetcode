// https://leetcode.com/problems/valid-sudoku/

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
    #define ROWS 9
    #define COLS 9
        bool isValidSudoku(vector<vector<char>>& board) {
            unordered_set<char> row_set;
            unordered_set<char> col_set;
            for (int i = 0; i < ROWS; i++) {
                row_set.clear();
                col_set.clear();
                for (int j = 0; j < COLS; j++) {
                    char c = board[i][j];
                    if (c != '.' && row_set.find(c) != row_set.end())
                        return false;
                    row_set.insert(c);
    
                    c = board[j][i];
                    if (c != '.' && col_set.find(c) != col_set.end())
                        return false;
                    col_set.insert(c);
                }
            }
            unordered_set<char> square_set;
            vector<vector<int>> neighbors = {{0, 1},   {1, 0}, {0, -1}, {-1, 0},
                                             {-1, -1}, {1, 1}, {1, -1}, {-1, 1}, {0, 0}};
            for (int i = 1; i < ROWS; i += 3) {
                for (int j = 1; j < COLS; j += 3) {
                    square_set.clear();
                    for (int z = 0; z < neighbors.size(); z++) {
                        int x = i + neighbors[z][0];
                        int y = j + neighbors[z][1];
                        char c = board[x][y];
                        if (c != '.' && square_set.find(c) != square_set.end())
                            return false;
                        square_set.insert(c);
                    }
                }
            }
            return true;
        }
    };