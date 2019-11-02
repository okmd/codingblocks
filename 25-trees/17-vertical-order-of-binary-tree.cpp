#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        int horiz_dis;
        node* left, *right;
        node(int d=0, int hd=0){
            left=right=NULL;
            data = d;
            horiz_dis = hd;
        }
};

node *buildTree(){
    int n;
    cin>>n;
    if(n==-1) return NULL;
    node *root = new node(n);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

map<int, vector<int> > verticalOrder(node* root){
    queue<node*> Q;
    map<int, vector<int> > hd_data;
    root->horiz_dis = 0;
    Q.push(root);
    while(!Q.empty()){
        node* temp = Q.front();
        hd_data[temp->horiz_dis].push_back(temp->data);
        Q.pop();
        if(temp->left){
            temp->left->horiz_dis = temp->horiz_dis - 1;
            Q.push(temp->left);
        }
        if(temp->right){
            temp->right->horiz_dis = temp->horiz_dis + 1;
            Q.push(temp->right);
        }
    }

    return hd_data;
}


int main(){
    // 3 4 6 -1 -1 -1 5 1 -1 -1 -1
    node *root = buildTree();
    map<int, vector<int> >::iterator it;
    map<int, vector<int> > m = verticalOrder(root);
    for(it=m.begin(); it!=m.end();it++){
        cout<<it->first<<":";
        vector<int> x = it->second;
        vector<int>::iterator it2;
        for(it2 = x.begin(); it2!=x.end(); it2++)
            cout<<*it2<<" ";
        cout<<endl;
    }

    return 0;
}

/*
Horizontal distance(hd) is used to seperate the node.
For root: hd=0
For left: parent-1
for right: parent+1

Vertical order algorithm
Use - level order + map
    enqueue root
    update hd and nodes value in map.
    enqueue the left and right node of root
    repeate untill queue empty

*/

