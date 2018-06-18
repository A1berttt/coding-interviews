class Solution {
private:
    stack<int> istk, minSt;
public:
    void push(int value) {
        istk.push(value);
        minSt.push(minSt.empty() || minSt.top() > value? value: minSt.top());
    }
    void pop() {
        istk.pop();
        minSt.pop();
    }
    int top() {
        return istk.top();
    }
    int min() {
        return minSt.top();
    }
};
