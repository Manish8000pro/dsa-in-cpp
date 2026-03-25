class Solution {
public:
    queue<int> modifyQueue(queue<int> q, int k) {
        // Your code here
        if(k>q.size()){
            return q;
        }
        
        stack<int>s;

        // insert first k element of Queue into stack
        for(int i=0;i<k;i++){
            s.push(q.front());
            q.pop();
        }

        // insert all Element of stack into Queue

        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }

        int totalElements = q.size()-k;

        while(totalElements){
            q.push(q.front());
            q.pop();
            totalElements--;
        }
        return q;
    }
};