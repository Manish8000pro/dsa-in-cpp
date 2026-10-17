// 117. Minimum Amount of Time to Fill Cups
// Time complexity: O(1)
// Space complexity: O(1);
int fillCups(vector<int>& amount) {
   int sum = amount[0]+amount[1]+amount[2];

   int largest = max({amount[0],amount[1],amount[2]});

   return max(largest,(sum+1)/2);
}