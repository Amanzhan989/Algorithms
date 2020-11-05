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
    void heapify(int i){
        while(i > 0 && a[parent(i)] < a[i]){
            swap(a[parent(i)],a[i]);
            i = parent(i);
        }
        v.push_back(i+1);
    }
    void increaseKey(int i , int new_value){
        a[i] += new_value;
        heapify(i);
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
    int t;
    cin>>t;
    for(int i = 0; i < t;i++){
        int q,w;
        cin>>q>>w;
        max_heap->increaseKey(q-1,w);
    }
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<endl;
    }
    max_heap->print();
    

    return 0;
}