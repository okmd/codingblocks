#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
        node(int v){
            data = v;
            left = NULL;
            right = NULL;
        }
};

node *buildTree(node* root){
    string s;
    cin>>s;
    if(s.compare("flase")==0) return NULL;
    if(s.compare("true")==0){
        root->left = buildTree();
    }else
        root->right = buildTree();
    return root;
}
bool indentical(node* t1, node* t2){
    return true;
}
int main(){
    node *tree1 = buildTree();
    node *tree2 = buildTree();
    if(indentical(tree1, tree2))
        cout<<"true\n";
    else
        cout<<"flase\n";
    
    return 0;
}

/*
Preorder is given: true->present, false->null
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
*/