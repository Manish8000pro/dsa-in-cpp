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