#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for(int i =1; i <=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i  < k;i++){
        int l1 = 0,r1 = 0,l2=0,r2=0;
        cin>>l1>>r1>>l2>>r2;
        int cnt = 0;
        for(int i = a.size()-1; i >=0;i++){
            if((a[i]>=l1 && a[i]<=r1) || (a[i]>=l2 && a[i]<=r2)){
                cnt++;
                
            }
        }cout<<cnt<<endl;
    }
}