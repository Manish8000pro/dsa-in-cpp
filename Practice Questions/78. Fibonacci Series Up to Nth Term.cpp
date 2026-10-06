//78. Fibonacci Series Up to Nth Term
// Time complexity o(n)
vector<int> fibSeries(int n) {
    // Your code here

    const int MOD = 1e9+7;

    vector<int>ans;

    ans.push_back(0);

    if(n>=1)
    ans.push_back(1);

    long long prev2 = 0;
    long long prev1 = 1;

    for(int i=2;i<=n;i++){

        long long next = (prev1+prev2)%MOD;

        ans.push_back(next);

        prev2 = prev1;
        prev1 = next;


    }
    return ans;
}