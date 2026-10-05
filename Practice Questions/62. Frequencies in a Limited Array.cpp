//62. Frequencies in a Limited Array
//Time complexity o(n)
vector<int> frequencyCount(vector<int>& arr) {
    int n = arr.size();

    vector<int>freq(n+1,0);

    // count frequency 
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
        
    }

    vector<int>ans;

    for(int i=1;i<=n;i++){
        ans.push_back(freq[i]);
    }

    return ans;
}