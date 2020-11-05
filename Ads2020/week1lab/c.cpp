#include<iostream>
#include<queue>
using namespace std;
int main(){
    string s;
    deque <int> dq;
    while (s!="exit"){
        cin>>s;
        if(s[0]=='p' && s[5]=='f'){
            int k;
            cin>>k;
            dq.push_front(k);
            cout<<"ok"<<endl;
        }
        if(s[0]=='p' && s[5]=='b'){
            int l;
            cin>>l;
            dq.push_back(l);
            cout<<"ok"<<endl;
        }
        if(s[0]=='p' && s[4]=='f'){
            if(dq.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<dq.front()<<endl;
                dq.pop_front();
            }
        }
        if(s[0]=='p' && s[4]=='b'){
            if(dq.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<dq.back()<<endl;
                dq.pop_back();
            }
        }
        if(s=="front"){
            if(dq.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<dq.front()<<endl;
            }  
        }
        if(s=="back"){
            if(dq.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<dq.back()<<endl;
            }  
        }
        if(s=="size"){
            cout<<dq.size()<<endl;
        }
        if(s=="clear"){
            while(!dq.empty()){
                dq.pop_back();
            }
            cout<<"ok"<<endl;
        }
        if(s=="exit"){
            cout<<"bye"<<endl;
        }
    }
    
}