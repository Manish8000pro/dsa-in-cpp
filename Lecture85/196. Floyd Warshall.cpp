// 196. Floyd Warshall
void floydWarshall(vector<vector<int>>& dist) {
    int V = dist.size();

    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]==100000000 || dist[k][j]==100000000)
                continue;

                // k== row , k==cols 

                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
}