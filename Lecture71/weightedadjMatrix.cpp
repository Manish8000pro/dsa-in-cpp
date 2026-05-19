#include<iostream>
#include<vector>
using namespace std;

int main(){
    // tell me number vertex(node) edges in your graph 
    int vertex,edges;
    cout<<"Enter the vertex and edges-> ";
    cin>>vertex>>edges;
    // create the adjancy matrix for weighted graph

    vector<vector<int>>adjMat(vertex,vector<int>(vertex,0));

    // vertex 5
    // 5*5 : 5 rows and 5 column : initalize sabko 0

    cout<<"Enter the edges\n";

    for(int i=0;i<edges;i++){
        int u,v,weight;
        cin>>u>>v>>weight;
        adjMat[u][v] = weight;
        adjMat[v][u] = weight;
    }

    // Print kr dete h apne adMat ko 
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}