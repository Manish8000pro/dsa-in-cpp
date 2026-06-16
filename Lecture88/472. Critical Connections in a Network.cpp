// 472. Critical Connections in a Network
class Solution {
public:

    void findBridge(vector<int>adj[],int node,int parent,vector<int>&Disc,vector<int>&Low,vector<bool>&visited,int &timer,vector<vector<int>>&bridge){
        Disc[node] = Low[node] = timer;
        visited[node] = 1;
        timer++;

        for(auto edge: adj[node]){
            if(neib==parent)
            continue;

            else if(visited[neib])
            Low[node] = min(Low[node],Low[neib]);

            else{
                findBridge(adj,neib,node,Disc,Low,visited,timer,bridge);
                if(Disc[node]<Low[neib]){
                    bridge.push_back({node,neib});
                }
                Low[node] = min(Low[node],Low[neib]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        // code here
        vector<int>Disc(n);
        vector<int>Low(n);
        vector<int>visited(n,0);
        vector<vector<int>>bridge;

        vector<int>adj[n];

        for(auto edge: connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int timer = 0;

        findBridge(adj,0,-1,Disc,Low,visited,timer,bridge);

        return bridge;
    }
};