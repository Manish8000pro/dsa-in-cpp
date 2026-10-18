// 103. Special Stacka
// Time complexity: o(1) for all operations
// Space complexity: o(n) for the stack
class SpecialStack {
private:
    stack<int> mainStack;
    stack<int> minStack;

public:
    SpecialStack() {}

    void push(int x) {
        mainStack.push(x);
        if(minStack.empty() || x<=minStack.top()){
            minStack.push(x);
        }
    }
    void pop() {
    if(minStack.empty()) 
    return;
    int popped = mainStack.top();
    mainStack.pop();
    if(popped == minStack.top()){
        minStack.pop();
    }
}
    int peek() {
    if(mainStack.empty()) 
    return -1;

    return mainStack.top();
}
    int getMin() {
    if(minStack.empty()) return -1;
    return minStack.top();
}
};