#include<iostream>
using namespace std;

// how our Trie node will look like 
class TrieNode{
    public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode(){
        isEnd = false;

        for(int i = 0;i<26;i++){
            children[i] = NULL;
        }
    }
};

class Trie{
    public:

    TrieNode*root;

    Trie(){
        root = new TrieNode();
    }

    // 
}

int main(){

}