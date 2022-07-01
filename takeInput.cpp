#include<bits/stdc++.h>
#include "binaryTreeHeader.h"
using namespace std;

void printBinaryTree(BinaryTreeNode* root){
    if(not root)return;
    cout<<root->data<<" ";
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}
BinaryTreeNode* takeInput(){
    int rootNode;
    cout<<"Enter Root Node: ";
    cin>>rootNode;
    BinaryTreeNode* root = new BinaryTreeNode(rootNode);
    queue<BinaryTreeNode*> q;
    q.emplace(root);
    while(not q.empty()){
        int leftNode,rightNode;
        BinaryTreeNode* rootNodeFront = q.front();
        cout<<"Enter Left Node for "<<q.front()->data;
        cin>>leftNode;
        cout<<"Enter Right Node for "<<q.front()->data;
        cin>>rightNode;
        if(leftNode != -1){
            BinaryTreeNode* le = new BinaryTreeNode(leftNode);
            rootNodeFront->left = le;
            q.emplace(le);
        }
        if(rightNode != -1){
            BinaryTreeNode* ri = new BinaryTreeNode(rightNode);
            rootNodeFront->right = ri;
            q.emplace(ri);
        }
        q.pop();        

    }
    return root;
}

int main(){
    // BinaryTreeNode* root = new BinaryTreeNode(1);
    // BinaryTreeNode* node1 = new BinaryTreeNode(2);
    // BinaryTreeNode* node2 = new BinaryTreeNode(3);
    // root->left = node1;
    // root->right = node2;
    BinaryTreeNode* root = takeInput();
    printBinaryTree(root);
    cout<<endl;

    return 0;
}