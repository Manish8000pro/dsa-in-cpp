//43. Maximum Prefix Sum for a Given Range
// solving with Brute force app
vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    // Your code here
    vector<int>answer;

    for(int q=0;q<leftIndex.size();q++){

        int L = leftIndex[q];
        int R = rightIndex[q];

        int sum = 0;
        int ans = INT_MIN;

        for(int i = L; i <= R; i++) {

            sum += arr[i];

            ans = max(ans, sum);
        }
        answer.push_back(ans);
    }
    return answer;
}