#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void print(node *root){
    if(!root) return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);   
}

node *insert(node *root, int data){
    if(!root) return new node(data);
    if(data<=root->data){
        root->left = insert(root->left, data);
    }else{
        root->right = insert(root->right, data);
    }
    return root;
}

node *build(){
    int n;
    cin>>n;
    node *root = NULL;
    while(n!=-1){
        root = insert(root, n);
        cin>>n;
    }
    return root;
}


/*
Binary search tree, left<root<right at every node.
Efficient for searching O(logn) <- balanced tree.
Worst case skewed- O(height or depth)
*/

