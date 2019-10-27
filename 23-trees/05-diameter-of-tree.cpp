#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

int diameter(node *root){
    // O(n^2)
    if(!root) return 0;
    int h1 = height(root->left);
    int h2 = height(root->right);
    // there are three options and max of them is dim
    int opt1 = h1+h2; // dim pass through root
    int opt2 = diameter(root->left);// in left
    int opt3 = diameter(root->right); // in right
    return max(opt1, max(opt2, opt3)); // max of all

}
pair<int,int> diameterOptimized(node *root){
    // bottom up(post order) approach. O(n)
    // store the height at each node.
    pair<int, int> p, left, right; // height, diameter
    if(!root){
        p.first = 0;
        p.second = 0;
        return p;
    }
    left = diameterOptimized(root->left);
    right = diameterOptimized(root->right);
    p.first = max(left.first, right.first) + 1; // height
    p.second = max(left.first + right.first, max(left.second, right.second)); // diameter | ans of three options.
    return p;
}

int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    cout<<diameter(root)<<endl;
    cout<<diameterOptimized(root).second<<endl;
    return 0;
}

/*
Diameter of tree: Longest path from one node to another.
Note: it can be in any part of tree.
There are three cases
1. dim pass through root
    left height + right height.
2. dim in left
    left dim
3. dim in right
    right dim


Tree:
        3
    4       5
6       1

Output:
4

*/

