#include<iostream>
using namespace std;

bool f(long long a,long long b,long long n,long long x){
    if((x/a)*(x/b)>=n)
        return true;
    return false;
}

long long find(long long a,long long b,long long n){
    long long l = 0;
    long long r = 1e9;
    while(l+1<r){
        long long x = (l+r)/2;
        if(f(a,b,n,x))
            r = x;
        else
            l = x;
    }return r;
}
int main(){
    long long a,b,n,x;
    cin>>a>>b>>n;
    cout<<find(a,b,n);
}