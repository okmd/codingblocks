#include <bits/stdc++.h>
#include "10-BST.cpp"
using namespace std;
// chane only pointers
pair<node*, node*> flatten(node*root){
    // make LL from left and right
    // combine both as 
    // left->root->right
    // cases 1. leaf, 2.only one side, 3. both side, 4. only single node.
    // post order traversal used 
    pair<node*, node*> ll; // <head, tail>
    if(!root)
        ll.first=ll.second=NULL;// default NULL
    else if(!root->left and !root->right){ // 1. leaf
        ll.first =ll.second = root;
    }else if(root->left and root->right){ //2. both child
        // post order
        pair<node*, node*> left;
        pair<node*, node*> right;
        left = flatten(root->left);
        right = flatten(root->right);
        //join root
        left.second->right = root;
        root->right = right.first;
        //join both left and right
        ll.first = left.first;
        ll.second = right.second;

    }else{ // 3. only one child left or right
        pair<node*, node*> temp;
        if(!root->left){ // no left, only right
            temp = flatten(root->right);
            root->right = temp.first;
            ll.first = root;
            ll.second = temp.second;

        }else{ // no right, only left
            temp = flatten(root->left);
            temp.second->right = root;
            ll.first = temp.first;
            ll.second = root;
        }
    }
    return ll;
}

int main(){
    node *root = build();
    print(root); // sorted - inoreder
    cout<<endl;
    pair<node*, node*> p;
    p = flatten(root); // pointer to linked list, head, tail.
    // print ll
    node *temp = p.first;
    while(temp){
        cout<<temp->data<<"-->";
        temp = temp->right;
    }
    cout<<"NULL\n";
    return 0;
}
/*
Binary search tree, left<root<right at every node.
Efficient for searching O(logn) <- balanced tree.
Worst case skewed- O(height or depth)

Flatten: convert non-linear to linear data structure.
e.g tree to linked list.

Tree: 5 3 7 1 6 8 -1 
LL  : 1->3->5->6->7->8->NULL

*/