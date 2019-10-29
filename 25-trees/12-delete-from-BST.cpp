#include <bits/stdc++.h>
#include "10-BST.cpp"
using namespace std;

node *deleteNodeMin(node* root, int d){
    if(!root) return NULL;
    if(d<root->data)
        root->left = deleteNodeMin(root->left, d);
    else if(d==root->data){
        // three cases
        if(!root->left and !root->right){ //1. leaf
            delete root;
            return NULL;
        }else if(root->left and root->right){ //2. both child
            // inorder sucessor or min(right)
            node *replace = root->right;
            while(replace->left){
                replace= replace->left;
            }
            root->data = replace->data;
            // delete replace from right
            root->right = deleteNodeMin(root->right, replace->data);
            return root;
        }else{ //2. only one child
            node *temp;
            if(!root->left)
                temp = root->right;// no left
            else
                temp = root->left;// no right
            delete root;
            return temp;
        }   
    }else
        root->right = deleteNodeMin(root->right, d);
    return root;
}
node* deleteNode(node *root, int d){
    // there are three types of node.
    // leaf node
    // only one child
    // two child->immediate predecessor or successor->max(left) or min(right)
    if(!root) return NULL;
    if(d<root->data){
        root->left = deleteNode(root->left, d);
        return root;
    }else if(d==root->data){
        // three cases
        if(!root->left and !root->right){//1. leaf
            delete root;
            return NULL;
        }
        //2. only one child
        // no left
        if(!root->left and root->right){ 
            node * temp = root->right;
            delete root;
            return temp;
        }
        // no right
        if(root->left and !root->right){ 
            node * temp = root->left;
            delete root;
            return temp;
        }
        //3. both child
        if(root->left and root->right){ 
            // inorder sucessor or min(right)
            node *replace = root->right;
            while(replace->left){
                replace= replace->left;
            }
            root->data = replace->data;
            // delete replace from right
            root->right = deleteNode(root->right, replace->data);
            return root;
        }
        
    }else{
        root->right = deleteNode(root->right, d);
        return root;
    }
}

int main(){
    int n;
    node *root = build();
    print(root); // sorted - inoreder
    cout<<endl;
    cout<<"Enter to be deleted: ";
    cin>>n;
    root = deleteNode(root, n);
    print(root);

    return 0;
}
/*
Binary search tree, left<root<right at every node.
Efficient for searching O(logn) <- balanced tree.
Worst case skewed- O(height or depth)

5 3 7 1 6 8 -1 
delete 7
output
1 3 5 6 8

*/