#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i = 0; i < a;i++){
        if(s[i]=='a')
            cout<<"a";
        else if(s[i]=='e')
            cout<<"e";
        else if(s[i]=='i')
            cout<<"i";
        else if(s[i]=='o')
            cout<<"o";
        else if(s[i]=='u')
            cout<<"u";
    }
    for(int i = 0; i < a;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            cout<<s[i];
        }
    }
}