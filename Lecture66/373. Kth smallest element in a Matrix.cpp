// 373. Kth smallest element in a Matrix
int kthSmallest(vector<vector<int>>& mat, int k) {
    // Your code here
    // pair<int,pair<int,int>>p1 : value, row_index, col_index
    int n = mat.size();
    vector<pair<int,pair<int,int>>>temp;

    // first column ke saare elements iske andar daal dijiye

    for(int i=0;i<n;i++){
        temp.push_back({mat[i][0],{i,0}});
    }
 

    // min heap, n element se initalize karna hai apne min heap ko

    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq(temp.begin(),temp.end());


    int result;
    pair<int,pair<int,int>>element;
    int row_index, col_index;
//    element = {10,{0,0}}
    while(k--){
        element = pq.top();
        pq.pop();
        result = element.first;
        row_index = element.second.first;
        col_index = element.second.second;

        // next coloumn ko min heap ke andar daalo, row_index, col_index+1

        if(col_index<n-1){
            pq.push({mat[row_index][col_index+1],{row_index, col_index+1}});
        }
    }


    return result;

}