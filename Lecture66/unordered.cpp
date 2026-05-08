#include<iostream>
#include<map>
#include<unordered_map>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    // unordered_map<string,int>m;
    unordered_multimap<string,int>m;

    // how to insert value inside it 
    // m["Manish"] = 10;
    // m["Dinesh"] = 20;
    // m["Vikash"] = 30;

    // cout<<m["Manish"]<<" ";

    // second method
    m.insert(make_pair("Ram",50));
    // cout<<m["Ram"]<<" ";

    // for(auto x: m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    auto it = m.find("Manish");
    if(it!=m.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}