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

// ---------------------SECOND SOLUTION-----------------------------------------------------

class SpecialStack {
  public:
  stack<long long>st;
    void push(int x) {
        // code here
        if(st.empty()){
            long long a = x;
            st.push(a*1000000001+a);
        }
        else{
            
            long long minimumElement = st.top()%1000000001;
            long long a=x;
            minimumElement = min(minimumElement,a);
            st.push(a*1000000001+minimumElement);

        }
    }
    void pop() {
        // code here
        if(st.empty()){
            return;
        }
        else{
            st.pop();
        }
    }
    int peek() {
        // code here
        if(st.empty()){
            return -1;
        }
        long long element = st.top()/1000000001;
        int el = element;
        return el;
    }
    int getMin() {
        // code here
        if(st.empty()){
            return -1;
        }
        long long element = st.top()%1000000001;
        int el = element;
        return el;
    }
    bool isEmpty() {
        // code here
        return st.empty();
    }
};