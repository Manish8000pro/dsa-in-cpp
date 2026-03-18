// introducing the stack
#include<iostream>
using namespace std;


class Stack{
    public:
    int arr[100];
    int index;

    Stack(){
        index = -1;
    }

    void push(int val){
        if(index==99){
            cout<<"Stack Overflow\n";
        }
        else{
            index++;
            arr[index] = val;
            cout<<val<<" Pushed into stack\n";
        }
    }

    // delete kr do ya pop 

    void pop(){
        if(index==-1){
            cout<<" Stack Underflow\n";
        }
        else{
            cout<<arr[index]<<" popped from the stack\n";
            index--;
        }
    }

    int top(){
        return arr[index];
    }

    bool empty(){
        return index == -1;
    }

    int size(){
        return index+1;
    }
};

int main(){

    Stack s;
    s.push(10);
    s.push(30);
    s.pop();
    s.pop();
    s.pop();

    cout<<s.empty();

}