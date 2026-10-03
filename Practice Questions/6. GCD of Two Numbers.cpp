//76. GCD of Two Numbers
// Time Complexity o(min(a,b))
// space complexity o(1)
int gcd(int a, int b) {
    // Your code here
    int ans = 1;

    for(int i = min(a,b);i>=1;i--){
        if(a % i == 0 && b%i == 0){
            ans = i;
            break;
        }
    }

    return ans;  
}