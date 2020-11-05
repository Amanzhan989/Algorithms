#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
    for(int i= 2; i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }return true;
}
int main(){
    int n,cnt = 0;
    cin>>n;
    for(int i = 1;i <=n;i++){
        if(isprime(i))
            cnt++;
    }cout<<n-cnt;
}