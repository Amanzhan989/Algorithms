#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a == b){
            cout<<0<<endl;
            
        }
        else if(a < b){
            if((b-a)%10==0)
                cout<<(b-a)/10<<endl;
            else
                cout<<(b-a)/10+1<<endl;
        }
        else{
            if((a-b)%10==0)
                cout<<(a-b)/10<<endl;
            else
                cout<<(a-b)/10+1<<endl;
        }
    }
}