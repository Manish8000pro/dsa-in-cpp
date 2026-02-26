class Solution {
public:
    
   void findTotal(vector<int>& arr, int n, int sum, 
                   int target, long long &count){

        if(sum == target){
            count++;
            return;
        }

        if(sum > target){ 
			return;

		}

        for(int i = 0; i < n; i++){
            findTotal(arr, n, sum + arr[i], target, count);
        }
    }
    
    long long countWays(vector<int>& arr, int target) {
        
        long long count = 0;

        findTotal(arr, arr.size(), 0, target, count);
        return count;
    }
};