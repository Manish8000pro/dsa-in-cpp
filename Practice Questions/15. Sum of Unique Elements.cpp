// 15. Sum of Unique Elements
int sumOfUnique(vector<int>& nums) {
    // Your code here
    unordered_map<int,int>freq;
    // finnd freq 
    for(int x:nums){
        freq[x]++;
    }

    int sum = 0;
    for(int x:nums){
        if(freq[x]==1){
            sum+=x;
        }
    }
    return sum;
}