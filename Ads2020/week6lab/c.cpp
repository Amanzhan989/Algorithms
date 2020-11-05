#include<bits/stdc++.h>
using namespace std;
vector <int> v;
vector <int> l;
class MaxHeap {
    public:
    vector<int> a;

    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
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
    void heapify(int i) {
        if (left(i) > a.size() - 1){
            cout<<(i+1)<<" "<<l[0]<<endl;
            l.pop_back(); 
            return;
        }   
        int j = left(i);
        if  (right(i) < a.size() && a[right(i)] > a[left(i)]){
            j = right(i);
        }
        if (a[i] < a[j]) {
            swap(a[i], a[j]);
            heapify(j);            
        }
        else{
            cout<<(i+1)<<" "<<l[0]<<endl;
            l.pop_back();
        }
    }
    int extractMax(){
        int root = a[0];
        l.push_back(a[0]);
        swap(a[0],a[a.size()-1]);
        a.pop_back();
        if(a.size()>0)
            heapify(0);
        return root;
        
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
    for(int i = 0; i < n-1;i++)
        max_heap->extractMax();


    return 0;
}