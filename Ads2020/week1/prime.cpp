#include<iostream>
using namespace std;

/*void primes(int n){
    for(int i = 2;i < n;i++){
        bool isprime = true;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                isprime = false;
                break;
            }
        }
        if(isprime)
            cout<<i<<" ";
    }
}*/
int p[10000002];

void primes1(int n){
    for(int i = 2;i*i<=n;i++){
        if (p[i]==0){
            int k = i;
            while(k+i<=n){
                k+=i;
                p[k] = 1;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(p[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    primes1(n);
    return 0;
}