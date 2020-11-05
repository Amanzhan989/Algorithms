#include<iostream>
#include<stack>
using namespace std; 
int main() {
    int n;
    cin>>n;
    stack <int> st;
    while(n--){
        int k;
        cin>>k;
        while(k--){
            int j;
            cin>>j;
            st.push(j);
        }
    }st.top();
}