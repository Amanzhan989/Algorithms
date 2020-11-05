#include<bits/stdc++.h>
using namespace std;

class MinHeap {
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
        while(i > 0 && a[parent(i)] > a[i]){
            swap(a[parent(i)],a[i]);
            i = parent(i);
        }
    }   
    void heapify(int i){
        if(left(i)>a.size()-1)  
            return;
        
        int j = left(i);
        if(right(i)<a.size() && a[right(i)] < a[left(i)])
            j = right(i);
        
        if(a[i] > a[j]){
            swap(a[i],a[j]);
            heapify(j);
        }
    }
    int extractMin(){
        int root = a[0];
        swap(a[0],a[a.size()-1]);
        a.pop_back();
        if(a.size()>0)
            heapify(0);
        return root;
    }


};
int main(){
    MinHeap *min_heap = new MinHeap();
    int n;
    cin>>n;
    for(int i = 0; i < n;i++){
        int k;
        cin>>k;
        min_heap->insert(k);
    }
    vector<int> sorted;
    for(int i =0; i < n;i++){
        sorted.push_back(min_heap->extractMin());
    }
    for(int i = 0; i < n; i++)
        cout<<sorted[i]<<" ";
    return 0;
}