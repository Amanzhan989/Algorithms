#include<iostream>
#include<stack>
using namespace std;
int main(){
    int size = 0;
    stack<int> a;
    string s;
    while(s!="exit"){
        cin>>s;
        if(s[0]=='p' && s[1]=='u'){
            int k;
            cin>>k; 
            a.push(k);
            cout<<"ok"<<endl;
        }
        if(s=="pop"){
            if(a.size()==0)
                cout<<"error"<<endl;
            else{
                cout<<a.top()<<endl;
                a.pop();
            }    
        }
        if(s=="back"){ 
            if(a.size()==0)
                cout<<"error"<<endl;
            else{
            cout<<a.top()<<endl;
            }
        }
        if(s=="size"){
            cout<<a.size()<<endl;
        }
        if(s=="clear"){
            cout<<"ok"<<endl;
            while(!a.empty()){
                a.pop();
            }
        }
        if(s=="exit"){
            cout<<"bye"<<endl;
            
        }
    }
}