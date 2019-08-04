#include <iostream>
#include <queue>
using namespace std;
class stackWith2Queues{
	queue<int> *q1, *q2;
public:
	stackWith2Queues(){
		q1 = new queue<int>();
		q2 = new queue<int>();
	}
	void push(int x){
		q1->push(x); // O(1), q1 used for push
	}
	void pop(){
		int n = q1->size();
		for(int i=0; i<n-1;i++){// pop n-1 elements from q1 to q2
			q2->push(q1->front());
			q1->pop();
		}
		if(!q1->empty()){
			q1->pop();
			swap(q1, q2);
		}
	}
	int top(){
		int n = q1->size();
		for(int i=0; i<n-1;i++){// pop n-1 elements from q1 to q2
			q2->push(q1->front());
			q1->pop();
		}
		int topElement = q1->front();
		if(!q1->empty()){
			q2->push(q1->front());
			q1->pop();
			swap(q1, q2); // q2 is always empty
		}
		return q1->front();

	}
	~stackWith2Queues(){
		delete q1;
		delete q2;
	}
};


int main(){
	stackWith2Queues s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	// 4 3 2
	return 0;
}

/*
Implement stack using two queues.
Operations: push(), pop() and top().

Not working
*/