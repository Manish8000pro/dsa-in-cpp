// 61. Missing And Repeating
// Time complexity o(n)
vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();

    vector<int>freq(n+1,0);

    for(int x:arr){
        freq[x]++;
    }

    int duplicate = -1;
    int missing = -1;

    for(int i=1;i<=n;i++){
        if(freq[i]==2){
            duplicate = i;
        }

        if(freq[i]==0){
            missing = i;
        }
    }

    return {duplicate,missing};
}