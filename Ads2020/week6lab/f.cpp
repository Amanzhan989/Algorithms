#include<bits/stdc++.h>
using namespace std;
vector <int> v;
class MaxHeap {
    public:
    vector<int> a;

    int parent(int i){
        return (i-1)/2;
    }

    void insert(int k){
        a.push_back(k);
        int i = a.size()-1;
        while(i > 0 && a[parent(i)] < a[i]){
            swap(a[parent(i)],a[i]);
            i = parent(i);
        }
    }   
    void print(){
        for(int i = 0 ; i  < a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


};
int main(){
    MaxHeap *max_heap = new MaxHeap();
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        int k;
        cin>>k;
        max_heap->insert(k);
    }
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<endl;
    }
    max_heap->print();

    return 0;
}