#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node *top;
    int sz;
    Stack(){
        top = NULL;
        sz = 0;
    }
    void push(int data){
        Node *node = new Node(data);
        node->next = top;
        top = node;
        sz++;
    }
    void pop(){
        if(top!=NULL)
            top = top->next;
            sz--;
    }
    int size(){
        return this->sz;
    }
    bool empty(){
        if(sz==0)
            return 1;
        return 0;
    }
};                                                                      

int main(){
    Stack *st = new Stack();
    st->push(20);
    st->pusht(30);
    st->push(40);
    cout<<st->top->data;
}