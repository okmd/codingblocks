#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

int decendentSum(node *root){
    if(!root) return 0;
    // if leaf
    if(!root->left and !root->right)
        return root->data;
    int temp = root->data;
    root->data = decendentSum(root->left) + decendentSum(root->right);
    return  root->data + temp; 
}

int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    cout<<decendentSum(root)<<endl;
    return 0;
}

/*
Each node <- sum of all its decendent.

Tree:
        3
    4       5
6       1

Output:
        7
    6       1
6       1

*/

