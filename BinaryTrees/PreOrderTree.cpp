

//Build Tree from Preorder


#include<iostream>
#include<vector>
using namespace std;


class Node{
public:
     int data;
     Node* left;
     Node* right;
     Node(int data){
        this->data=data;
        left=right=NULL;
     }

};

//Build tree function

static int idx=-1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes); //left subtree
    currNode->right=buildTree(nodes); //right subtree

    return currNode;


}

//Tree Traversals

//preorder traversal

void preorder(Node* root){ //O(n)
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//inorder traversal

void inorder(Node* root){  //O(n)
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

//postorder traversal
//left subtree
//right subtree
//root

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

Node* root=buildTree(nodes); //1
cout<<"root ="<<root->data<<endl;

cout<<"preorder traversal: "<<endl;
preorder(root);
cout<<endl;

cout<<"inorder traversal: "<<endl;
inorder(root);
cout<<endl;

cout<<"postorder traversal: "<<endl;
postorder(root);

    return 0;
}