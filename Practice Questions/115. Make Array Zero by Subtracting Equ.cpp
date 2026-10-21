//115. Make Array Zero by Subtracting Equ
int minimumOperations(vector<int>& nums) {
    set<int>s;

    for(int num:nums){
        if(num>0){
            s.insert(num);
        }
    }
    return s.size();
}