/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */
class MyQueue {
 public:
  stack<int> s;

  /** Initialize your data structure here. */
  MyQueue() {}

  /** Push element x to the back of queue. */
  void push(int x) { s.push(x); }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    stack<int> tmp;
    while (s.size() > 1) {
      tmp.push(s.top());
      s.pop();
    }
    int top = s.top();
    s.pop();
    while (tmp.size()) {
      s.push(tmp.top());
      tmp.pop();
    }
    return top;
  }

  /** Get the front element. */
  int peek() {
    stack<int> tmp;
    while (s.size() > 1) {
      tmp.push(s.top());
      s.pop();
    }
    int top = s.top();
    while (tmp.size()) {
      s.push(tmp.top());
      tmp.pop();
    }
    return top;
  }

  /** Returns whether the queue is empty. */
  bool empty() { return s.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
