bool isValid(string& str) {
    stack<char>st;

    for(int i=0;i<str.size();i++){
        if(st.empty()||str[i]=='['||str[i]=='('||str[i]=='{'){
            if(str[i]=='['){
                st.push(']');
            }
            else if(str[i]=='('){
                st.push(')');
            }
            else if(str[i]=='{'){
                st.push('}');
            }
            else{
                return 0;
            }
        }
        else{
            if(st.top()==str[i]){
                st.pop();
            }
            else{
                return 0;
            }
        }
        
    }
    return st.empty();
}