#include<iostream>
using namespace std;

int main(){

    int *p = new int[10];
    // array create kr sakte h dinamicly 

    for(int i=0;i<10;i++){
        // p[i]=i*5;
        // p[i]=i-2;
        p[i]=i+2;
    }

    // Output 

    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }

    // free up the memory 

    delete[] p;

    return 0;
}