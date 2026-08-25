//659. Phone Directory
// solution   

class TrieNode{
    public:

    TrieNode *children[26];
    bool isEnd; 

    TrieNode(){
        isEnd = false;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }

    ~TrieNode(){
        for(int i=0;i<26;i++){
            delete children[i];
        }
    }
};

void getResult(TrieNode* curr, string &word, vector<string>&ans){
        if(curr->isEnd==true){
            ans.push_back(word);
        }

        for(int i=0;i<26;i++){
            if(curr->children[i]){
                char ch = 'a'+i;
                word.push_back(ch);
                getResult(curr->children[i],word,ans);
                word.pop_back();
            }
        }
}