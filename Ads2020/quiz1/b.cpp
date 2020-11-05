#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque <int> a;
    deque <int> dq;
    for(int i = 0;i < n;i++){
        int k;
        cin>>k;
        if(k==1){
            int d;
            cin>>d;
            a.push_front(d);
        }
        else{
            int f = a.size();
            while(f--){
            dq.push_back(a.front());
            a.pop_front();
        }
    }
    }for(int i =0;i <a.size();i++){
        cout<<a[i]<<" ";
    }   
}