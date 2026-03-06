#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 

    // constructer/
    Node(int value){
        data = value;
        next = NULL;
    }
};