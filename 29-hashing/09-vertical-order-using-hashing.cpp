void verticalOrder(node *root, map<int, vector<int> > &m, int d=0){
    // root, map, root distance
    if(!root) return;
    m[d].push_back(root->data);
    verticalOrder(root->left, m, d-1);
    verticalOrder(root->right, m, d+1);
}

void vo(node *root){
    map<int, vector<int> > m;
    verticalOrder(root, m); // root of tree
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<"->";
        // print vector for distance
        for(auto j=0; j<it->second.size(); j++){
            cout<<it->second[j]<<" ";
        }
        cout<<endl;
    }
}

/*
Vertical order using hashing. map->ordered map(sorted)
 -> key=vertical line number or distance i.e (-2, -1, 0, 1, 2) etc.
 -> separate chaining.

Write this code in tree class and run.

*/