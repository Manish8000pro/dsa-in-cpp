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