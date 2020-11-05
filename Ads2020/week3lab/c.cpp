#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int index;
    int maxi = -1e9;
    for(int i = 0; i < n;i++){
        cin>>a[i];
        if(a[i]>maxi){
            maxi = a[i];
            index = i;
        }
    }
    cout<<index+1;
}