#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void BFS(node* root){ // O(logn)
    if(!root) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *f = q.front();
        q.pop();
        if(!f){ // NULL, prev level has popped out
            cout<<endl;
            if(!q.empty()) // if not empty then only insert
                q.push(NULL);
        }else{
            cout<<f->data<<" ";
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
    }
    return;
}

int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    BFS(root);
    return 0;
}

/*
BFS in O(logn). Queue implementation.
1. push into q.
2. pop and print and push its children to q.
3. don't push if no child.
## Printing newline char.
A.  1. for each queue val store a level number.
    2. when number change print newline char.
B.  1. Insert NULL in queue to print newline
Tree:
        3
    4       5
6       1

Output:
3
4 5
6 1

*/

