class SpecialStack {
  public:
  stack<int>st;
  stack<int>minSt;
    void push(int x) {
        // code here
        st.push(x);
        if(minSt.empty()){
            minSt.push(x);
        }
        else{
            minSt.push(min(minSt.top(),x));
        }
    }
    void pop() {
        // code here
        if(st.empty()){
            return;
        }
        else{
            st.pop();
            minSt.pop();
        }
    }
    int peek() {
        // code here
        if(st.empty()){
            return -1;
        }
        return st.top();
    }
    int getMin() {
        // code here
        if(st.empty()){
            return -1;
        }
        return minSt.top();
    }
    bool isEmpty() {
        // code here
        return st.empty();
    }
};