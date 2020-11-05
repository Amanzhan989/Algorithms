#include<bits/stdc++.h>
using namespace std;

void ch_1(vector <int> &a, int x){
    int cnt = 0;
    for(int i = 0; i < a.size();i++){
        if(a[i]==x){
            cout<<i+1<<" ";
            return;
        }
        else
            cnt++;
    }if(cnt==a.size()) cout<<0<<endl;
}
void ch_2(vector <int> &a, int x){
    for(int i = a.size()-1; i >= 0;i--){
        if(a[i]==x){
            cout<<i+1<<endl;
            return;
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    int b[k];
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    for(int i = 0;i < k;i++){
        cin>>b[i];
        ch_1(a,b[i]);
        ch_2(a,b[i]);
    }
}