// LIFO Last in First out

#include <iostream>
using namespace std;
template<typename T>
class Stack{
	int size;
	int top;
	T *arr;
public:
	Stack(int s){
		size = s;
		top = -1;
		arr = new T[size];
	}
	bool isEmpty(){
		return top==-1;
	}
	bool isFull(){
		return size==top+1;
	}
	void insert(T v){
		if(isFull()){
			cout<<"Overflow!\n";
			return;
		}
		top++;
		arr[top] = v;
	}
	void remove(){
		if(isEmpty()){
			cout<<"Underflow!\n";
			return;
		}
		top--;
	}
	void print(){
		for(int i=0; i<=top; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	~Stack(){
		delete [] arr;
	}
};


int main(){
	Stack<char> a(26);
	for(int i=65; i<65+26; i++)
		a.insert((char)i);
	a.print();

	Stack<float> b(4);
	b.insert(4.7);
	b.insert(24.37);
	b.insert(54.75);
	b.insert(46.17);
	b.print();

	Stack<int> c(5);
	c.insert(4);
	c.insert(1);
	c.insert(4);
	c.insert(3);
	c.insert(2);
	c.print();

	return 0;
}