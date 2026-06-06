// 416. Alien Dictionary
class Solution {
  public:
    string findOrder(vector<string>& words) {
        // code here
        unordered_map<char, vector<char>>adj;
        unordered_map<char,int>InDegree;

        // total number of unique character mere pass kitne h ,make there InDegree 0

        for(auto word: words){
            for(char c: word){
                InDegree[c]=0;
            }
        }

        int totalUniquechar = InDegree.size();

        for(int i=0;i<words.size()-1;i++){
            string first = words[i];
            string second = words[i+1];

            int len = min(first.size(),second.size());
            int j=0;

            while(j<len && first[j] == second[j])
            j++;

            if(j==len && first.size()>second.size())
            return "";

            if(j<len){
                char u = first[j];
                char v = second[j];
                adj[u].push_back(v);
                InDegree[v]++;
            }
        }

        queue<int>q;
        // khn's algoritm , push all the character in queue whose InDegree zero;
        for(auto &it: InDegree){
            if(it.second==0){
                q.push(it.first);
            }
        }

        string result;

        while(!q.empty()){
            char node = q.front();
            q.pop();
            result.push_back(node);

            // look at the all the nighbour of the node 

            for(char neib: adj[node]){
                InDegree[neib]--;
                if(InDegree[neib]==0)
                q.push(neib);
            }
        }

        return result.size()==totalUniquechar ? result: "";
    }
};