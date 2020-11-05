#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mini[n],maxi[m];
    int k[n][m];
    for(int i = 1;i <= n,i++){
        for(int j = 1;j<=m;j++){
            cin>>k[i][j];
        }
    }
    for(int i = 1;i <= n,i++){
        mini[i] = 1e9;            
    }
    for(int i = 1;i <= n,i++){
        maxi[i] = -1e9;            
    }
    for(int i = 1;i <= n,i++){
        for(int j = 1;j<=m;j++){
            cin>>k[i][j];
        }
    }


}
