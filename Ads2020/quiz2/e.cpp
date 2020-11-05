#include<iostream>
using namespace std;
int cnt = 0;
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
        if((node->left!=NULL) && (node->right!=NULL))
            cnt++;
        inOrder(node->right);
    }
};

int main(){
    BST *bst = new BST();
    int n;
    cin>>n;
    for(int i = 0; i < n;i++){
        int k;
        cin>>k;
        bst->root = bst->insert(bst->root,k);
    }
    
    
    bst->inOrder(bst->root);
    cout<<cnt;

}