#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
        node(int v){
            data = v;
            left = NULL;
            right = NULL;
        }
};

node *buildTree(){
    int n;
    cin>>n;
    if(n==-1) return NULL;
    node *root = new node(n);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int height(node *root){
    if(!root) return 0;
    int lh, rh;
    lh = height(root->left); // height of left subtree
    rh = height(root->right);
    return 1+ max(lh, rh);
}