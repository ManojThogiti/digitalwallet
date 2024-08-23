#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool customSort(const pair<int,int>&a, const pair<int, int>&b) {
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int main() {
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(mp[x]>=z){
            mp[x]-=z;
            mp[y]+=z;
            cout<<"Success"<<"\n";
        }else{
            cout<<"Failure"<<"\n";
        }
    }
    cout<<"\n";
    vector<pair<int,int>>vec;
    for(auto it:mp){
        vec.push_back({it.first,it.second});
    }
    sort(vec.begin(), vec.end(),customSort);
    for (auto p:vec) {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    
    return 0;
}
