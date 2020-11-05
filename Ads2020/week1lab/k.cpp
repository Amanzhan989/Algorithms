#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ok = true;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            ok = false;
            cout<<"composite";
            break;
        }
    }
    if(ok==true)
        cout<<"prime";
}