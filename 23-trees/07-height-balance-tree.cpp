#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

pair<int, bool> balanced(node *root){
    pair<int,bool>p, left, right;
    if(!root){
        p.first = 0; // height
        p.second = true; // balanced
        return p;
    }
    left = balanced(root->left);
    right = balanced(root->right);
    p.first = max(left.first, right.first) + 1;//height
    if(abs(left.first - right.first) <=1 and left.second and right.second){
        p.second = true;//balanced node
    }else{
        p.second = false;//un-balanced node
    }
    return p;
}


int main(){
    node *root = buildTree();
    if(balanced(root).second)
        cout<<"Balanced"<<endl;
    else
        cout<<"Unbalanced"<<endl;
    return 0;
}

/*
Height balance tree have (left, right) height
|h1-h2| <= 1 at each node.

Tree:
        3
    4       5
6       1
------------------
        3
    4       5
6       1
    7(1's child)

Output:
3 4 6 -1 -1 -1 5 1 7 -1 -1 -1 -1 -> Unbalanced
3 4 6 -1 -1 -1 5 1 -1 -1 -1 -> Balanced
*/

