// 661. Maximum XOR of Two Numbers in an Array
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