class MyQueue {
public:

    stack<int>s1;
    stack<int>s2;


    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()&&s2.empty()){
            return -1;
        }
        else if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            s2.pop();
            return element;
        }
        else{
            int element = s2.top();
            s2.pop();
            return element;
        }
    }
    
    int peek() {
        if(s1.empty()&&s2.empty()){
            return -1;
        }
        else if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            return element;
        }
        else{
            int element = s2.top();
            return element;
        }
    }
    
    bool empty() {
        return s1.empty()&&s2.empty();
    }
};