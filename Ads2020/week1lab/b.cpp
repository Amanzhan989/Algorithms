#include<iostream>
#include<queue>
using namespace std;
int main(){
    string s;
    queue <int> q;
    while (s!="exit"){
        cin>>s;
        if(s[0]=='p' && s[1]=='u'){
            int k;
            cin>>k;
            q.push(k);
            cout<<"ok"<<endl;
        }
        if(s=="pop"){
            if(q.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        if(s=="front"){
            if(q.size()==0){
                cout<<"error"<<endl;
            }
            else{
                cout<<q.front()<<endl;
            }  
        }
        if(s=="size"){
            cout<<q.size()<<endl;
        }
        if(s=="clear"){
            while(!q.empty()){
                q.pop();
            }
            cout<<"ok"<<endl;
        }
        if(s=="exit"){
            cout<<"bye"<<endl;
        }
    }
    
}