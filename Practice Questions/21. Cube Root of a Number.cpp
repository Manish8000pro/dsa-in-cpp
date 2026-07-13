//21. Cube Root of a Number
int cubicRoot(int n) {
    // Your code here
    int left = 1;
    int right = n;
    int ans = 0;

    while(left<=right){
        long long mid = left+(right-left)/2;

        long long cube = mid*mid*mid;

        if(cube==n){
            return mid;
        }
        else if(cube<n){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return ans;
}