#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node (int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

class BST{
    public:
    Node *root;
    
    BST(){
        root = NULL;
    }
    Node *insert(Node *node,int data){
        if(node == NULL){
            node = new Node(data); 
            return node;
        }
        else if(data==node->data)
            return node;
        else if(data < node->data)
            node->left = insert(node->left,data);
        else 
            node->right = insert(node->right,data);
        return node;
    }
    void inOrder(Node *node){
        if(node == NULL)
            return;
        inOrder(node->left);
        if(((node->left!=NULL) && (node->right==NULL)) || ((node->left==NULL) && (node->right!=NULL)))
            cout<<node->data<<endl;
        inOrder(node->right);
    }
};

int main(){
    BST *bst = new BST();
    int n;
    while (5>3)
    {
        cin>>n;
        if(n!=0)
            bst->root = bst->insert(bst->root,n);
        else 
            break;
    }
    

    bst->inOrder(bst->root);


}