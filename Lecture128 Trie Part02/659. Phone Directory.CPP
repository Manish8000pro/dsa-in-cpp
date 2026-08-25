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