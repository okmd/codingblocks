#include <bits/stdc++.h>
#include "10-BST.cpp"
using namespace std;

bool search(node *root, int d){
    if(!root) return false;
    if(d==root->data) return true;
    else if(d<root->data) return search(root->left, d);
    else search(root->right, d);
}

int main(){
    int n;
    node *root = build();
    print(root); // sorted - inoreder
    cout<<endl;
    cout<<"Enter to be searched: ";
    cin>>n;
    if(search(root, n))
        cout<<"Present!\n";
    else
        cout<<"Not Present!\n";

    return 0;
}
/*
Binary search tree, left<root<right at every node.
Efficient for searching O(logn) <- balanced tree.
Worst case skewed- O(height or depth)

5 3 7 1 6 8 -1 
6 is presnet
9 is not present

*/