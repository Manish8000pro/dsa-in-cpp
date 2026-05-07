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

    // for(int &x : a){
    //     x = x+10;
    // }

    // for(int x : a){
    //     cout<<x<<" ";
    // }

    // can i put the pair inside a vector
    vector<pair<int,int>>v;
    v.push_back(make_pair(10,20));
    v.push_back(make_pair(30,20));
    v.push_back(make_pair(40,50));
    v.push_back(make_pair(60,70));
    v.push_back(make_pair(80,90));

    // for(pair<int,int>x : v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    return 0;
}