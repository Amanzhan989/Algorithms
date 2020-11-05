#include<bits/stdc++.h>
using namespace std; 

bool check_ok(vector <int> &a,int g){
    int l = 0;
    int r = a.size()-1;
    while(l < r){
        int m = (l+r)/2;
        if(a[m]== g)
            return 1;
        if(a[m]>g){
            r = m-1;
        }
        else
            l = m+1;
    }if(a[l]==g)
        return 1;
    else 
        return 0;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    int b[k];
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    for(int i = 0; i < k;i++){
        cin>>b[i];
        if(check_ok(a,b[i])){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

}