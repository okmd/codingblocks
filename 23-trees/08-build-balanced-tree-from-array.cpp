#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void print(node *root){
    if(!root) return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

node *buildBalancedTree(int arr[], int s, int e){
    // height O(logn)
    // break array into two half and recursively build tree.
    if(s>e) return NULL;
    int mid = (s+e)/2;
    node *root = new node(arr[mid]);
    root->left = buildBalancedTree(arr, s, mid-1);
    root->right = buildBalancedTree(arr, mid+1, e);
    return root;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    node *root = buildBalancedTree(arr, 0, n-1);
    print(root);
    return 0;
}

/*
Inorder: 4 2 1 3 6 5 7 0
*/

