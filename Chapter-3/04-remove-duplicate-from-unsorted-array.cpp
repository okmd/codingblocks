#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;

list<int> removeDuplicate1(const list<int> & in){
	list<int> out;
	for(auto i : in){
		bool found = false;
		for(auto o : out){
			if(i == o){
				found = true;
				break;
			}
		}
		if(!found)
			out.push_back(i);
	}

	return out;
}

list<int> removeDuplicate2(const list<int> & in){
	unordered_set<int> s(in.begin(), in.end()); // copy to set
	list<int> out(s.begin(), s.end()); // copy back to list
	return out;
}

int main(){
	list<int> li, out;
	// method 1
	li = {1,3,4,6,1,3,4,5,8,9,0};
	cout<<"Before: ";
	for(auto i :li)
		cout<<i<<" ";
	cout<<endl;
	
	cout<<"Method 1 (using loop): ";
	out = removeDuplicate1(li);
	for(auto i :out)
		cout<<i<<" ";
	cout<<endl;

	// method 2
	cout<<"Method 2 (using set): ";
	li = {1,3,4,6,1,3,4,5,8,9,0}; // as passed by refrence
	out = removeDuplicate2(li);
	for(auto i :out)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}

/*


*/