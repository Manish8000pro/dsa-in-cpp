// 438. Euler circuit and Path
class Solution {
public:

    void DFS(vector<int>adj[],int node,vector<bool>&Visited){
        Visited[node]=1;

        for(auto neib: adj[node]){
            if(!Visited[neib]){
                DFS(adj,neib,Visited);
            }
        }
    };

    int isEulerCircuit(int V, vector<int> adj[]) {
        // code here
        vector<int>Degree(V,0);
        for(int i=0;i<V;i++){
            Degree[i] = adj[i].size();
        }

        // count the number of node hose degree is odd
        int CountOdd = 0;

        for(int i=0;i<V;i++){
            if(Degree[i]%2)
            CountOdd++;
        }
        // Euler path and no. of odd degree node 0 or 2 

        if(CountOdd!=0&& CountOdd!=2)
        return 0;

        vector<bool>Visited(V,0);
        // Apply DFS ; pick any node whose degree exist 

        for(int i = 0;i<V;i++){
            if(Degree[i]){
                DFS(adj,i,Visited);
                break;
            }
        }

        // if any node degree exist and who is not Visited , then graph is  in multiple componants 
            // if is not Euler circut or path 

        for(int i=0;i<V;i++){
            if(!Visited[i]&& Degree[i])
            return 0;
        }

        // here return the path and Euler circut 
        return CountOdd ? 1:2;
    }
};