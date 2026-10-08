//65. Smallest Window Containing 0, 1, and 2
// Time complexity o(n^2)

int smallestSubstring(string &S) {
    int n = S.size();

    int left = 0;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    int ans = INT_MAX;

    for(int right=0;right<n;right++){
        // add current character
        if(S[right]=='0')
        count0++;
        else if(S[right]=='1')
        count1++;
        else{
            count2++;
        }

        // Window is valid
        while(count0>0 && count1>0 && count2>0){

            ans = min(ans,right-left+1);

            // Remove left character
            if(S[left]=='0')
            count0--;
            else if(S[left]=='1')
            count1--;
            else{
                count2--;
            }
            left++;
        }
    }
    if(ans==INT_MAX)
    return -1;

    return ans;

}