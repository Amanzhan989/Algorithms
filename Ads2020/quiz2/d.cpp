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
        long long summa = 1; 
        for(int i = 0 ; i  < 3;i++){
            summa*=a[i];
        }
        cout<<summa<<endl;
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
        if(i<2)
            cout<<-1<<endl;
        else
        {
            
            max_heap->print();
        }
        
    }



    return 0;
}