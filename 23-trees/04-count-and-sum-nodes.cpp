#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

int countNodes(node *root){
    if(!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int sumOfNodes(node *root){
    if(!root) return 0;
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}
int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    cout<<countNodes(root)<<endl;
    cout<<sumOfNodes(root);
    return 0;
}

/*
Tree:
        3
    4       5
6       1

Output:
5
19

*/

