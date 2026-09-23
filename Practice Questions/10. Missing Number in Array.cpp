//10. Missing Number in Array
int findMissingPositive(vector<int>& arr) {
    // Your code here
    int n  = arr.size();

    for(int num=1;num<=n+1;num++){

        bool found = false;

        for(int val:arr){
            if(val==num){
                found = true;
                break;
            }
        }

        if(!found)
        return num;
    }
    return n+1;
}