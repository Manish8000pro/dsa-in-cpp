#include<iostream>
using namespace std;

int main(){
    // pair<int,int>p;

    // p = make_pair(20,40);

    // cout<<p.first<<" "<<p.second<<" ";

    // pair<string,int>p;

    // p.first = "Manish";
    // p.second = 30;

    // cout<<p.first<<" "<<p.second<<" ";

    // 2 value 
    // 3 value ke pair bnane ho to 

    pair<string,pair<int,int>>p;
    p.first = "Manish";
    p.second.first = 30;
    p.second.second = 40;

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";

    return 0;
}