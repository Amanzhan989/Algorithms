#include<bits/stdc++.h>

using namespace std;
int main(){
    int a;
    cin>>a;
    string s = "";
    string f = "";
    string s1;
    cin>>s1;
    for(int i = 0; i < s1.size();i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
            s+=s1[i];
        else
            f+=s1[i];
    }
    for(int i = 0; i < s.size();i++){
        for(int j = i+1;j < s.size();j++){
            if(int(s[i])>int(s[j]))
                swap(s[i],s[j]);
        }
    }
    for(int i = 0; i < f.size();i++){
        for(int j = i+1;j < f.size();j++){
            if(int(f[i])>int(f[j]))
                swap(f[i],f[j]);
        }
    }

    cout<<s+f;
}