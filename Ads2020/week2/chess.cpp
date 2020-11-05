#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int a[10][10];
int dx[8] = {2,-2,2,-2,1,-1,1,-1};
int dy[8] = {1,1,-1,-1,2,2,-2,-2};

queue <pair<int,int> > q;
pair <int,int> c[10][10];

bool check(int x,int y){
    return (x>=1 && x<=8 && y>=1 && y<=8 && a[x][y]==0);
}
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    a[x1][y1] = 1;
    c[x1][y1] = make_pair(x1,y1);
    q.push(make_pair(x1,y1));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        for(int i = 0;i < 8;i++){
            int new_x = x+dx[i];
            int new_y = y+dy[i];
            if(check(new_x,new_y)){
                q.push(make_pair(new_x,new_y));
                a[new_x][new_y] = a[x][y]+1;
                c[new_x][new_y] = make_pair(x,y);
            }
        }
        q.pop();
    }
    cout<<a[x2][y2]-1;
    
    vector<pair<int,int> > result;
    result.push_back(make_pair(x2,y2));
    int x = x2;
    int y = y2;
    
    while(c[x][y]!=make_pair(x,y)){
        int new_x = c[x][y].first;
        int new_y = c[x][y].second;
        result.push_back(make_pair(new_x,new_y));
        x = new_x;
        y = new_y;
    }
    for(int i = result.size()-1;i > 0;i--){
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }
    return 0;   
}