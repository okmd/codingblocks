#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void preorder(node * root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node * root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node * root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}

/*
Tree:
        3
    4       5
6       1

Output:
3 4 6 5 1
6 4 3 1 5
6 4 1 5 3
 
*/

