#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> mymap;
    // insertion in 3 ways
    mymap["Mango"] = 100;
    mymap.insert(make_pair("Apple", 300));
    pair<string, int> p("Guava", 230);
    mymap.insert(p);

    // print
    for(auto node: mymap){
        cout<<node.first<<" "<<node.second<<endl;
    }
    // printing like bucket
    for(auto i=0; i<mymap.bucket_count(); i++){
        // iterate over LL
        cout<<"Bicket "<<i<<"->";
        for(auto it=mymap.begin(i); it!=mymap.end(i); it++){
            cout<<it->first<<" "<<it->second<<" ";
        }
        cout<<endl;
    }

    return 0;
}