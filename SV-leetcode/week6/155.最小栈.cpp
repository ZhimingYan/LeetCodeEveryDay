/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */
#include<stack>
using namespace std;
class MinStack {
    stack<int>stk1;
    stack<int>stk2;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        stk1.push(x);
        if(stk2.empty() || x <= stk2.top()){//这里一定要小于等于
            stk2.push(x);
        }
        
    }
    
    void pop() {
        if(stk1.empty()) return ;
        if(stk1.top() == stk2.top()){
            stk2.pop();
        }
        stk1.pop();
    }
    
    int top() {
       // if(stk1.empty()) return 0;
        return stk1.top();
        
    }
    
    int getMin() {
        return stk2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

