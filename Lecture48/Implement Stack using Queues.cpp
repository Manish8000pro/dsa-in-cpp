class MyStack {
public:
    
    queue<int>q1;
    queue<int>q2;

    MyStack() {
        
    }
    
    void push(int x) {
        // if q1 is not empty, push in q1 else q2 push
        if(!q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        if(q1.empty()&&q2.empty()){
            return -1;
        }
        else if(!q1.empty()){
            
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }

            int number = q1.front();
            q1.pop();
            return number;

        }
        else{

            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }

            int number = q2.front();
            q2.pop();
            return number;
        }
    }
    
    int top() {
        if(q1.empty()&&q2.empty()){
            return -1;
        }
        else if(!q1.empty()){
            return q1.back();
        }
        else{
            return q2.back();
        }
    }
    
    bool empty() {
        return q1.empty()&&q2.empty();
    }
};