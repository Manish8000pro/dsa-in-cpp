#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m;
    // multimap<string,int>m;

    // how to insert value inside it 
    m["Manish"] = 10;
    m["Dinesh"] = 20;
    m["Vikash"] = 30;

    // cout<<m["Manish"]<<" ";

    // second method
    m.insert(make_pair("Ram",50));
    // cout<<m["Ram"]<<" ";

    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}