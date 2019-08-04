#include <iostream>
using namespace std;
template<typename T>
class Queue{
public:
	int current_size;
	int total_size;
	int front;
	int rear;
	T *arr;
	Queue(int ts=10){
		current_size=0;
		total_size = ts;
		front = 0;
		rear = total_size-1;
		arr = new T[total_size];
	}
	bool isEmpty(){
		return current_size==0;
	}
	bool isFull(){
		return total_size==current_size;
	}
	void push(T val){
		if(isFull()){
			cout<<"Overflow!\n";
			return;
		}
		rear = (rear+1)%total_size;
		arr[rear] = val;
		current_size++;
	}
	void pop(){
		if(isEmpty()){
			cout<<" Underflow!\n";
			return;
		}
		front = (front+1)%total_size;
		current_size--;
	}
	void print(){
		while(!this->isEmpty()){
			cout<<arr[front]<<" ";
			this->pop();
		}
		cout<<endl;
	}
	~Queue(){
		delete [] arr;
	}
};
int main(){
	Queue<int> q;
	q.push(8);
	q.push(2);
	q.push(4);
	q.push(7);
	q.push(1);
	q.pop();
	q.pop();
	q.push(9);
	q.push(19);
	q.print();
	return 0;
}