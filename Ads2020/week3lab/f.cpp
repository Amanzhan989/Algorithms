#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    int maxi = -1e9,mini = 1e9;
    for(int i = 0 ; i < n;i++){
        cin>>v[i];
        if(v[i]>maxi)
            maxi = v[i];
        
        if(v[i]<mini)
            mini = v[i];
    }

    for(int i = 0;i < n;i++){
        if(v[i]==maxi)
            cout<<mini<<" ";
        else
        {  
            cout<<v[i]<<" ";
        }
        
    }    

}
