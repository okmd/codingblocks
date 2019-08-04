// LIFO Last in First out

#include <iostream>
using namespace std;
class Stack{
	int size;
	int top;
	int *arr;
public:
	Stack(int s){
		size = s;
		top = -1;
		arr = new int[size];
	}
	bool isEmpty(){
		return top==-1;
	}
	bool isFull(){
		return size==top+1;
	}
	void insert(int v){
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
	Stack a(6);
	a.insert(4);
	a.insert(3);
	a.insert(2);
	a.remove();
	a.insert(16);
	a.insert(6);
	a.insert(26);
	a.insert(61);
	a.insert(11);
	a.print();
	return 0;
}