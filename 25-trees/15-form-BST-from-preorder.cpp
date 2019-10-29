#include <bits/stdc++.h>
#include "10-BST.cpp"
using namespace std;

//Note: Use 09-build-tree-from-inorder-and-p-order-traversal.cpp
int main(){
    int n;
    node *root = buildTree();
    print(root); // sorted - inoreder
    cout<<endl;
    return 0;
}
/*
Given: 
    Preorder.
    Inorder<-sorted(preoreder).
A unique BST can be formed.

*/