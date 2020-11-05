#include<bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> z;
class MaxHeap {
    public:
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
        }cout<<i+1<<endl;
    }   
    void print(){
        for(int i = 0 ; i  < a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void heapify(int i) {
        if (left(i) > a.size() - 1){
            cout<<i+1<<" ";
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
            cout<<i+1<<" ";
        }
    }
    int extractMax(){
        int root = a[0];
        swap(a[0],a[a.size()-1]);
        a.pop_back(); 
        if(a.size()>0){
            heapify(0);
        }

        return root;
        
    }

};
int main(){
    MaxHeap *max_heap = new MaxHeap();
    int n,t;
    cin>>n>>t;
    while(t--){
        int m;
        cin>>m;
        if(m==1){
            if(a.size()==0 || a.size()>n)
                cout<<-1<<endl;
        
            else if(m==1 && a.size()==1){
                cout<<0<<" "<<max_heap->extractMax()<<endl;
            }
            else
            {
                cout<<max_heap->extractMax()<<endl;
            }
            
        }
        else if(m==2){
            int k;
            cin>>k;
            if(a.size() < n)
                max_heap->insert(k);
            
            else
                cout<<-1<<endl;
        }
    }

    max_heap->print();

    return 0;
}