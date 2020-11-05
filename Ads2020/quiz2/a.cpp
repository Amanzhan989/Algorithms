#include<bits/stdc++.h>
using namespace std;
vector <int> v;
vector <int> l;
long long summ = 0;
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
    void heapify(int i) {
        if (left(i) > a.size() - 1){
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
        summ+=a[0];
    }
    void decreaseKey(int i , int new_value){
        a[i] -= new_value;
        heapify(i);
    }
};
int main(){
    MaxHeap *max_heap = new MaxHeap();
    int n,k;
    cin>>n>>k;

    for(int i = 0;i < n;i++){
        int l;
        cin>>l;
        max_heap->insert(k);
        max_heap->decreaseKey(i,1);
    }
    cout<<summ;
    return 0;
}