#include<bits/stdc++.h>
using namespace std;

class Fruit{
    public:
        string name;
        int price;
        string city;
        Fruit(){} // overwrite constructor
        Fruit(string n, int p, string c){
            name=n;
            price=p;
            city=c;
        }
};

int main(){
    unordered_map<string, Fruit> mymap;
    // insertion in 3 ways
    Fruit f("Mango", 100, "Delhi");
    mymap[f.name] = f;

    Fruit fs = mymap["Mango"];
    cout<<fs.city<<endl;
    cout<<fs.price<<endl;
    // count
    cout<<mymap.count("Apple")<<endl; // can be used to search.
    // erase
    mymap.erase("Mango");
    
    return 0;
}