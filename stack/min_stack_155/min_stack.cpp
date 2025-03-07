// https://leetcode.com/problems/min-stack/

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

class MinStack {
    private:
        std::stack<int> stack;
        std::stack<int> min_stack;
    
    public:
        MinStack() {}
    
        void push(int val) {
            stack.push(val);
            if (min_stack.empty() || val < min_stack.top()) {
                min_stack.push(val);
            } else {
                min_stack.push(min_stack.top());
            }
        }
    
        void pop() {
            stack.pop();
            min_stack.pop();
        }
    
        int top() { return stack.top(); }
    
        int getMin() { return min_stack.top(); }
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */