class Solution {
public:

    int largestHistogram(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;

        vector<int> NSR(n), NSL(n, -1);

        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[i] <= heights[st.top()]) {
                NSR[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()) {
            NSR[st.top()] = n;
            st.pop();
        }

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[i] < heights[st.top()]) {
                NSL[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int width = NSR[i] - NSL[i] - 1;
            maxArea = max(maxArea, width * heights[i]);
        }

        return maxArea;
    }

    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> height(m, 0);
        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1)
                    height[j]++;
                else
                    height[j] = 0;
            }

            ans = max(ans, largestHistogram(height));
        }

        return ans;
    }
};

// ______________________Strike SOlution___________