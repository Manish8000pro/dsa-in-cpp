class Solution {
public:
    vector<string> generate(int n) {
        // Your code here  
        vector<string>ans;
        queue<string>q;

        q.push("1");

        while(ans.size()<n){
            string temp = q.front();
            q.pop();
            ans.push_back(temp);

            q.push(temp+'0');
            q.push(temp+'1');
        }
        return ans;
    }
};