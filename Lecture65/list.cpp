#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l1;
    l1.push_back(10);
    l1.push_back(30);
    l1.push_back(70);
    l1.push_front(13);
    l1.push_front(8);

    // for(auto x: l1){
    //     cout<<x<<" ";
    // }

    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
}