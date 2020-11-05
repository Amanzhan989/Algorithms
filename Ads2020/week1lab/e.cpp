#include<iostream>
#include<deque>
using namespace std;
int main(){
    int cnt = 0;
    deque <int> a;
    deque <int> b;
    for(int i = 0 ; i < 5;i++){
        int k;
        cin>>k;
        a.push_front(k);
    }
    for(int i = 0 ; i < 5;i++){
        int l;
        cin>>l;
        b.push_front(l);
    }
    while (a.size()>0 && b.size()>0){
        if(cnt>1000000){
            cout<<"botva";
            break;
        }
        if((a.back()==0 && b.back()==9) || (b.back()==0 && a.back()==9)){
            if(a.back()==0 && b.back()==9){
                a.push_front(a.back());
                a.pop_back();
                a.push_front(b.back());
                b.pop_back();
                cnt++;
            }
            else{
                b.push_front(a.back());
                a.pop_back();
                b.push_front(b.back());
                b.pop_back();
                cnt++;
            }
        }
        else{
            if(a.back()>b.back()){
                a.push_front(a.back());
                a.pop_back();
                a.push_front(b.back());
                b.pop_back();
                cnt++;
            }
            else{
                b.push_front(a.back());
                a.pop_back();
                b.push_front(b.back());
                b.pop_back();
                cnt++;
            }
        }

    }
    if(a.size()==0 && cnt<=1000000)
        cout<<"second"<<" "<<cnt;
    if(b.size()==0 && cnt<=1000000)
        cout<<"first"<<" "<<cnt;
}   
    

