// 115. Make Array Zero by Subtracting Equal Amounts
int minimumOperations(vector<int>& nums) {
    bool seen[101] = {false};
    int count = 0;

    for(int num : nums){
        if(num > 0 && !seen[num]){
            seen[num] = true;
            count++;
        }
    }
    return count;
}