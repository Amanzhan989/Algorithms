#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){ 
    freopen("input.txt","r",stdin);
    vector<pair <int,string> > a;
    string s;
    int k ;
    while (cin>>k>>s){

        a.push_back(make_pair(k,s));
    }
    stable_sort(a.begin(),a.end(),[](const auto& a,const auto& b){return a.first<b.first;});
    for(int i = 0; i < a.size();i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}