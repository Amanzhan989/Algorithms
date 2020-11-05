#include<iostream>
#include<deque>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque <int> a;
    deque <int> b;
    for(int i = 0 ; i < n ; i++ ){
        string s;
        int n;
        cin>>s;
        if(s[0]=='+'){
            cin>>n;
            a.push_back(n);
        }
        else if(s[0]=='*') {
            cin>>n;
            a.push_front(n);
        }
        if(s[0]=='-'){
            cout<<b.front()<<endl;
            b.pop_front();
        } 
        if(b.size()<a.size()){
            b.push_back(a.front());
            a.pop_front();
        }
    }
}