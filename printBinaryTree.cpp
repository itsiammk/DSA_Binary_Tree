#include<bits/stdc++.h>
#include "binaryTreeHeader.h"
using namespace std;

void printBinaryTree(BinaryTreeNode* root){
    if(not root)return;
    cout<<root->data<<" ";
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}

int main(){
    BinaryTreeNode* root = new BinaryTreeNode(1);
    BinaryTreeNode* node1 = new BinaryTreeNode(2);
    BinaryTreeNode* node2 = new BinaryTreeNode(3);
    root->left = node1;
    root->right = node2;
    printBinaryTree(root);
    cout<<endl;

    return 0;
}