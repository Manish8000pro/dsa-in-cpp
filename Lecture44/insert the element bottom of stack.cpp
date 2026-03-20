void insertAtBottom(stack<int>& st, int x) {
    stack<int>extra;
    while(!st.empty()){
        extra.push(st.top());
        st.pop();
    }

    st.push(x);

    while(!extra.empty()){
        st.push(extra.top());
        extra.pop();
    }
}