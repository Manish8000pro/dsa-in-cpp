// 495. Height of Heap 
class Solution {
public:
    int heapHeight(int N, int arr[]) {
        // Your code here
        if(N==1){
            return 1;
        }

        int height = 0;

        while(N>1){
            N/=2;
            height++;
        }
        return height;
    }
};