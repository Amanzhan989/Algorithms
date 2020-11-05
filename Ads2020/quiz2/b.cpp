#include<bits/stdc++.h>
using namespace std; 
vector<long long> v;
void quicksort(int l,int r){
    int i = l;
    int j = r;
    int p = v[(l+r)/2];
    while(i < j){
        while (v[i] < p) i++;
        while(v[j] > p) j--;
        if(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    if(l < j)
        quicksort(l,j);
    if(i < r)
        quicksort(i,r);
}

int main(){
    int n;
    cin>>n;
    int d,m,y;
    for(int i = 0; i < n;i++){
        cin>>m>>d>>y;
        long long s;
        s = d+m*31+y*365;
        v.push_back(s);
        s = 0;
    }
    quicksort(0,n-1);
    for(int i = 0; i < n;i++){
        m = v[i]%365>31? (v[i]%365)/31: ((v[i]-365)%365)/31;
        d = v[i]%365>31? (v[i]%365)%31: ((v[i]-365)%365)%31;
        y = v[i]%365>31? v[i]/365: (v[i]-365)/365;
        cout<<m<<" "<<(v[i]%365)%31<<" "<<v[i]/365<<endl;
    }

}