#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void print(node *root){
    if(!root) return;
    print(root->left);
    print(root->right);
    cout<<root->data<<" ";
}

node *buildTree(int inorder[], int preorder[], int s, int e){
    // use global or static variable for i
    static int i=0;
    if(s>e) return NULL;
    node *root = new node(preorder[i]);
    int index = -1; // search node in preorder
    for(int j=s; s<=e;j++){
        if(inorder[j]==preorder[i]){
            index=j;
            break;
        }
    }
    i++;
    root->left = buildTree(inorder, preorder, s, index-1);
    root->right = buildTree(inorder, preorder, index+1, e);
    return root;
}

int main(){
    int in[] = {3,2,8,4,1,6,7,5};
    int pre[] = {1,2,3,4,8,5,6,7};
    int n = sizeof(in)/sizeof(in[0]);
    node *root = buildTree(in, pre, 0, n-1);
    print(root);
    return 0;
}

/*
A unique tree can be created using inorder and pre/post order. 

E.g.
Given:(or postorder)
    Inorder: 
    Preorder:
Output:(or preorder)
    Postorder:3 8 4 2 7 6 5 1

## When preorder is given move from left to right in inorder.
## When postorder is geven move from right to left in inorder.
*/

