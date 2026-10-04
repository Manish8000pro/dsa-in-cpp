//76. GCD of Two Numbers
int gcd(int a, int b) {
    // Your code here
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}