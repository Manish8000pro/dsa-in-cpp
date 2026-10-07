//63. Majority Element
//Boyer-Moore ⭐ approach
// Time complexity o(n)
// space complexity o(1)
int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0 ;

    for(int num:nums){
        if(count==0){
            candidate = num;
        }

        if(num==candidate){
            count++;
        }
        else{
            count--;
        }
    }

    return candidate;
}