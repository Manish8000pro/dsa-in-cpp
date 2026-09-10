//447. Count number of hops
class Solution {
public:
    long long countWays(int n) {
        // code here
        if (n == 0) 
        return 1;

        if (n == 1) 
        return 1;

        if (n == 2) 
        return 2;
        
        return countWays(n-1) + countWays(n-2) + countWays(n-3);

    }
};

