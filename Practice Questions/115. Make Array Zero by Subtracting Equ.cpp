//115. Make Array Zero by Subtracting Equ
// time complexity o(nlogn)
// space complexity o(n)
int minimumOperations(vector<int>& nums) {
    set<int>s;

    for(int num:nums){
        if(num>0){
            s.insert(num);
        }
    }
    return s.size();
}