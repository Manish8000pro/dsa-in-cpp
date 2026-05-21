#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    // tell me number of vertex(node) and edges in your graph
    int vertex, edges;
    cout<<"Enter vertex and edges-> ";
    cin>>vertex>>edges;

    // Create Adjacency List
    vector<vector<pair<int,int>>>adjList(vertex);

    // Enter the edges 
    int u,v, weight;

    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjList[u].push_back({v,weight});
        adjList[v].push_back({u,weight});
    };


    //  print the element of graph

    for(int i=0;i<vertex;i++){
        cout<<i<<" edges-> ";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j].first<<" "<<adjList[i][j].second<<" ";
        }
        cout<<endl; 
    }
    

    return 0;

}