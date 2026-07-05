//14. First Repeating Element
int firstRepeatingElement(vector<int>& arr) {
    // Your code here
    unordered_map<int,int>freq;
    // find frequency
    for(int x : arr){
        freq[x]++;
    }
    // find the first repeating element 
    for(int i=0;i<arr.size();i++){
        if(freq[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}