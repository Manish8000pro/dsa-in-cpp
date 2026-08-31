//strike 
662. Maximum XOR With an Element From Array  
class TrieNode{ 
    public:

    TrieNode *children[2];

    TrieNode(){
        children[0]=NULL;
        children[1]=NULL;
    }

    ~TrieNode(){
        delete children[0];
        delete children[1];
    }
};
class Solution {
public:
    void insert(TrieNode *curr,int num){
        // total 31 bit insert

        for(int i=30;i>=0;i--){
            int bit = (num>>i)&1;

            if(curr->children[bit]==NULL){
                curr->children[bit] = new TrieNode();
            }
            curr = curr->children[bit];
        }
    }

    int getMaxXOr(TrieNode *curr,int num){
        int answer = 0;

        for(int i=30;i>=0;i--){
            int bit = (num>>i) & 1;
            int opposite = 1-bit;

            if(curr->children[opposite]){
                answer = answer | (1<<i);
                curr = curr->children[opposite];
            }
            else{
                curr = curr->children[bit];
            }
        }
        return answer;
    }   

    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        // Your code here
        TrieNode *root = new TrieNode();

        sort(nums.begin(),nums.end());

        vector<vector<int>> q;

        for(int i=0;i<queries.size();i++){
            q.push_back({queries[i][0],queries[i][1],i});
        }

        sort(q.begin(),q.end(),
            [](vector<int>& a, vector<int>& b){
                return a[1] < b[1];
            });

        vector<int> answer(queries.size());

        int j = 0;

        for(auto &query : q){

            int x = query[0];
            int m = query[1];
            int index = query[2];

            while(j < nums.size() && nums[j] <= m){
                insert(root,nums[j]);
                j++;
            }

            if(j == 0)
                answer[index] = -1;
            else
                answer[index] = getMaxXOr(root,x);
        }

        return answer;
    }
};    