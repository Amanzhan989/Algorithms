#include<iostream>
#include<stack>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    stack <int> a;
    for(int i = 0 ; i < input.size();i++){

        if(input[i]=='+' || input[i]=='-' || input[i]=='*'){
            int k = a.top();
            a.pop();
            int g = a.top();
            a.pop();
            if(input[i]=='+')
                a.push(k+g);
            else if(input[i]=='-')
                a.push(g-k);
            else if(input[i]=='*')
                a.push(g*k);
        }
        else if(int(input[i])>47 && int(input[i])<58){
            a.push(input[i]-'0');
        }
    }
    cout<<a.top();
}