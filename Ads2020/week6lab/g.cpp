#include<bits/stdc++.h>
using namespace std;
vector <int> v;
class MaxHeap {
    public:

    int parent(int i){
        return (i-1)/2;
    }
    int left(int i) {
        return 2 * i + 1;
    }
    int right(int i) {
        return 2 * i + 2;
    }

    void heapify(int i) {
        if (left(i) > v.size() - 1){
            return;
        }   
        int j = left(i);
        if (right(i) < v.size() && v[right(i)] > v[left(i)]){
            j = right(i);
        }
        
        if (v[i] < v[j]) {
            swap(v[i], v[j]);
            heapify(j);            
        }
    }


};
int main(){
    MaxHeap *max_heap = new MaxHeap();
    int n;
    cin>>n;
    for(int i = 0; i < n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i = v.size()-1; i >= 0;i--){
        max_heap->heapify(i);
    }
    for(int i = 0; i < n;i++){
        cout<<v[i]<<" ";
    }   

    return 0;
}