#include<iostream>
#include<vector>
using namespace std;

int main(){
    // tell me number vertex(node) edges in your graph 
    int vertex,edges;
    cout<<"Enter the vertex and edges-> ";
    cin>>vertex>>edges;
    // create the adjancy List
    vector<vector<int>>adjList(vertex);
    
    // Enter the edges
    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    };

    // Print the element of graph
    for(int i = 0;i<vertex;i++){
        cout<<" edges-> ";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}