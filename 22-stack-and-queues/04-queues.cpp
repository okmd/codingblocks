#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Queue{
public:
	vector<T> data;
	bool empty(){
		return data.size()==0;
	}
	void print(){
		for(int i=0; i<data.size(); i++)
			cout<<data[i]<<" ";
		cout<<endl;
	}
	void push(T v){
		data.push_back(v);
	}
	void pop(){
		if(empty()){
			cout<<"Underflow!\n";
			return;
		}
		data.erase(data.begin());
	}
};


int main(){
	Queue<int> q;
	q.push(4);
	q.push(2);
	q.push(5);
	q.push(6);
	q.print();
	q.pop();
	q.push(9);
	q.print();

	return 0;
}

// Linked list with head and tail, insertion and deletion O(1).