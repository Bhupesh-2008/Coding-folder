#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data=d;
            this->left= NULL;
            this->right=NULL;
        }
};

Node* buildTree(Node* root){
    int data;
    cout << "Enter the data: ";
    cin>>data;

    if(data==-1) return NULL;

    root= new Node(data);

    cout<<"Enter the data to insert in left of "<<data<<"\n";
    root->left=buildTree(root->left);

    cout << "Enter the data to insert in right of "<<data<<"\n";
    root->right= buildTree(root->right);
    return root;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);

    return 0;
}