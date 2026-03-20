// stack problem solving with stack 
void reverseArray(vector<int>& arr) {

    stack<int>s;

    for(int i=0;i<arr.size();i++){
        s.push(arr[i]);
    }

    // pop the element of stack and push them into the array

    for(int i=0;i<arr.size();i++){
        arr[i] = s.top();
        s.pop();
    }
}