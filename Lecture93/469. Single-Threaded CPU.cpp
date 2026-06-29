// 469. Single-Threaded CPU
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // code here
        vector<pair<int,pair<int,int>>>TaskAvailable;
        int n = tasks.size();

        for(int i=0;i<n;i++){
            TaskAvailable.push_back({tasks[i][0],{tasks[i][1],i}});
        }
        sort(TaskAvailable.begin(),TaskAvailable.end());

        int currentTime = TaskAvailable[0].first,i=0;

        // min heap: processing time adn index

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        vector<int>order;

        while(i<n || !pq.empty()){
            // pq is empty current time ko direct update krna  

            if(pq.empty() && currentTime<TaskAvailable[i].first){
                currentTime = TaskAvailable[i].first;
            }

            // first insert all the task which are available at cuttentTime and push them int pq;
            while(i<n&&currentTime>=TaskAvailable[i].first){
                pq.push(TaskAvailable[i].second);
                i++;
            }

            currentTime+=pq.top().first;
            order.push_back(pq.top().second);
            pq.pop();
        }

        return order;
    }
};
