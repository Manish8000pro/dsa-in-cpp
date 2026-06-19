// 504. Articulation Point - I
class Solution {
public:

    void findArt(vector<vector<int>>&adj,int node , int parent,vector<int>&Disc,vector<int>&Low,vector<bool>&visited,vector<bool>&result,int&timer){

        // starting node wali: node Zero: startin Point children

        Disc[node] = Low[node] = timer;
        visited[node] = 1;
        timer++;
        int child = 0;

        for(auto neib: adj[node]){
            if(neib==parent)
            continue;
            else if(visited[neib])
            Low[node] = min(Low[node],Disc[neib]);
            else{
                findArt(adj,neib,node,Disc,Low,visited,result,timer);
                child++;

                if((Disc[node]<=Low[neib])&&parent!=-1)
                result[node] = 1;

                Low[node]=min(Low[node],Low[neib]);
            }
        }
        if(parent==-1&& child>1){
            result[0] = 1;
        }
    }

    vector<int> articulationPoints(int V, vector<vector<int>>& adj) {
        // Your code here
        vector<int>Disc(V);
        vector<int>Low(V);
        vector<bool>result(V,0);
        vector<bool>visited(V,0);
        int timer = 0;

        findArt(adj,0,-1,Disc,Low,visited,result,timer);

        vector<int>ans;


        for(int i=0;i<V;i++){
            if(result[i])
            ans.push_back(i);
        }
        if(ans.size()==0)
        ans.push_back(-1);

        return ans;
    }
};