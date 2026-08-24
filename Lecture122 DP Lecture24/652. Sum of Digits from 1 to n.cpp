//652. Sum of Digits from 1 to n
class Solution {
public:
    long long sumOfDigits(long long n) { 
        // Your code here
        if(n<10)
        return n*(n+1)/2;

        int power =1;
        int digit = 0;

        while(power*10<=n){
            power*=10;
            digit++;
        }

        long long sumElement = 45*digit*(power/10);
        long long firstElement = n/power;
        long long remainingElement = n%power;

        return firstElement*(sumElement)+ ((firstElement*(firstElement-1))/2)*power+ firstElement*(remainingElement+1)+ sumOfDigits(remainingElement);
         
    }
}; 