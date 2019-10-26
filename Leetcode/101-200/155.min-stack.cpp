/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> nums;
    stack<int> mins;

    MinStack() {
        
    }
    
    void push(int x) {
        nums.push(x);
        mins.push(mins.size() ? min(mins.top(), x) : x);
    }
    
    void pop() {
        nums.pop();
        mins.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return mins.top();
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

