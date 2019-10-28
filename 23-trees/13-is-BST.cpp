#include <bits/stdc++.h>
#include "10-BST.cpp"
using namespace std;

bool isBST(node* root, int minV=INT_MIN, int maxV=INT_MAX){
    // max(left) < root < min(right)
    // bottom up approach <max, min, bool> | left, right, isBst.
    // top down <min, max> as -inf , inf. 
    if(!root) return true;
    if(root->data >= minV 
    and root->data <= maxV 
    and isBST(root->left, minV, root->data)
    and isBST(root->right, root->data, maxV))
        return true;
    return false;
}

int main(){
    int n;
    node *root = buildTree();
    print(root); // sorted - inoreder
    cout<<endl;
    if(isBST(root))
        cout<<"Yes!\n";
    else
        cout<<"No!\n";

    return 0;
}
/*
Binary search tree, left<root<right at every node.
Efficient for searching O(logn) <- balanced tree.
Worst case skewed- O(height or depth)

5 3 7 1 6 8 -1 <- bst using build()
3 4 6 -1 -1 -1 5 1 7 -1 -1 -1 -1 <- not bst using buildTree();
*/