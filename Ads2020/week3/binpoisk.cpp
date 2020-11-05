#include<iostream>
#include<vector>
using namespace std;

int bin_search(vector<int> &a, int k){
    int l = 0;
    int r = a.size()-1;
    while(l < r){
        int m = (l+r)/2;
        if(a[m]==k)
            return m;
        if(a[m] < k){
            l = m-1;
        }
        else
        {
            r = m+1; 
        }
        
    }if(a[l]==k)
        return l;
    if(a[r]==k)
        return r;
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for(int i = 0; i < n ;i++){
        cin>>a[i];
    }
    int ind = bin_search(a,k);
    cout<<ind;
}