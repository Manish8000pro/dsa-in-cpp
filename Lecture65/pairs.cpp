#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool cmp(pair<int,int>p1, pair<int,int>p2){
    // first ascending, second descending
    if(p1.first!=p2.first){
        return p1.first < p2.first;
    }

    return p1.second > p2.second;
}

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

    // vector<int>a = {10,20,30,40,50};

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
    v.push_back(make_pair(30,50));
    v.push_back(make_pair(60,70));
    v.push_back(make_pair(80,90));

    // for(pair<int,int>x : v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // for(auto x : v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // sort the vector accending 
        // sort(v.begin(),v.end());

        // for(auto x: v){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }

         // first value check, then second value
    

        // sort them in descending order
        // sort them in descending order, first value, second

        sort(v.begin(),v.end(),greater<pair<int,int>>());
            
        for(auto x: v){
            cout<<x.first<<" "<<x.second<<endl;

        // vector<pair<int,int>>v;
        // v.push_back(make_pair(10,20));
        // v.push_back(make_pair(30,20));
        // v.push_back(make_pair(30,50));
        // v.push_back(make_pair(60,70));
        // v.push_back(make_pair(80,90));

        //  for(pair<int,int>::iterator it=v.begin();it!=v.end();it++);
    }


    return 0;
}