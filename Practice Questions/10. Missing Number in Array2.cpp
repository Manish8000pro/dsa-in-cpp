//10. Missing Number in Array Second approach 
int findMissingPositive(vector<int>& arr) {
    // Your code here
    sort(arr.begin(),arr.end());

    int missing = 1;

    for(int num: arr){
        if(num==missing){
            missing++;
        }
    }
    return missing;
}