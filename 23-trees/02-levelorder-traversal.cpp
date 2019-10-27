#include <bits/stdc++.h>
#include "00-base.cpp"
using namespace std;

void printKthLevel(node *root, int k){
    if(!root) return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
}
void leveloreder(node* root){
     int h = height(root);
     for(int i=1; i<=h; i++){
         printKthLevel(root,i);
         cout<<endl;
     }
}

int main(){
    // 3, 4, 6, -1, -1, -1, 5, 1, -1, -1, -1
    node *root = buildTree();
    leveloreder(root);
    //printKthLevel(root, 2);
    return 0;
}

/*
Skewed tree O(n) complexity.
Same can be done with BFS in O(logn)
Tree:
        3
    4       5
6       1

Output:
3
4 5
6 1

*/

