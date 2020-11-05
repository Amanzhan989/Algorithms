#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    long long hash_t  = 0,hash_s = 0;
    int p_pow = 1,p = 31,cnt = 0;
    for(int i = 0; i < t.size();i++){
        hash_t += (t[i]-'a'+1)*p_pow;
        p_pow*=p;
    }
    int m = t.size();
    //int l = 0,r = i+m-1;
    for(int i = 0; i < s.size()-2;i++){
        hash_s += (s[i]-'a'+1)*p_pow;
        p_pow*=p;
        hash_s += (s[i+1]-'a'+1)*p_pow;
        p_pow*=p;
        hash_s += (s[i+2]-'a'+1)*p_pow;
        p_pow*=p;
        if(hash_t==hash_s)
            cnt++;
        long long hash_s = 0;
        int p_pow = 1;
    }cout<<cnt;
}