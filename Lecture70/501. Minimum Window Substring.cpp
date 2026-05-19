 //501. Minimum Window Substring
class Solution {
public:
    string minWindow(string s, string t) {
        // Your code here
        vector<int>targetCounter(128,0);

        // store the count of each character of string t 
        for(char c: t){
            targetCounter[c]++;
        }
        // count of characterin the current window
        vector<int>windowCounter(128,0);
        int minLen = INT_MAX,startIndex = 0,left = 0,right = 0,n = s.size();
        //minLength of my substring answer,startIndex  answer aayega uska starting index konsa hoga
        int target = t.size(),currentTarget = 0;

        while(right<n){
            windowCounter[s[right]]++;

            if(targetCounter[s[right]] && windowCounter[s[right]]<=targetCounter[s[right]]){
               currentTarget++; 
            }

            while(currentTarget==target){
                if(right-left+1<minLen){
                    minLen = right-left+1;
                    startIndex = left;
                }

                if(targetCounter[s[left]]&&windowCounter[s[left]]<=targetCounter[s[left]]){
                    currentTarget--;
                }
                
                windowCounter[s[left]]--;
                left++;
            }
            right++;
        }
        return minLen == INT_MAX ? "": s.substr(startIndex,minLen);

    }
};