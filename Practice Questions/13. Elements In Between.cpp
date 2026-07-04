//13. Elements In Between
int getCount(vector<int>& arr, int num1, int num2) {
    // Your code here
    int index1 = -1;
    int index2 = -1;

    // leftmost occurence of num1 
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num1){
            index1 = i;
            break;
        }
    }
    // rightmost occurence of num2
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==num2){
            index2 = i;
            break;
        }
    }

    return abs(index2-index1)-1;
}