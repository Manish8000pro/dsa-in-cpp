#include<iostream>
#include<vector>
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

    // pair<string,pair<int,int>>p;
    // p.first = "Manish";
    // p.second.first = 30;
    // p.second.second = 40;

    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";

    vector<int>a = {10,20,30,40,50};

    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

    // for(int x : a){
    //     cout<<x<<" ";
    // }

    for(int &x : a){
        x = x+10;
    }

    for(int x : a){
        cout<<x<<" ";
    }

    return 0;
}