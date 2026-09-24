//36. Segregate 0s and 1s
void segregate0and1(vector<int>& arr) {
    // Your code here
    int count0 = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]== 0)
        count0++;
    }

    for(int i=0;i<count0;i++){
        arr[i] = 0;
    }
    for(int i=count0;i<n;i++){
        arr[i] = 1;
    }
}