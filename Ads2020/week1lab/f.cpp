#include<iostream>
#include<stack>
using namespace std;

bool isok(string s){
    stack<char> a;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            a.push(s[i]);
        else{
            if(a.empty())
                return false;
            if(s[i]==']' && a.top()!='[')
                return false;
            if(s[i]=='}' && a.top()!='{')
                return false;
            if(s[i]==')' && a.top()!='(')
                return false;
            a.pop();
        }
    }
    return (a.empty());
}
int main(){
    string s;
    cin>>s;
    if(isok(s))
        cout<<"yes";
    else
        cout<<"no";
}