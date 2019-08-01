#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int val=0):data(val), next(NULL){}
};
class LL{
	Node* head;
public:
	LL(Node* head=(Node*)NULL):head(head){}
	void insert_at_tail(int);
	void print();
	void even_after_odd();
	int len(){
		int c=0;
		Node *temp = head;
		while(temp){
			temp = temp->next;
			c++;
		}
		return c;
	}
};
void LL::insert_at_tail(int value){
	Node *n  = new Node(value);
	Node *temp = head;
	if(!temp){//empty list
		this->head = n;
		return;
	}
	while( temp and temp->next){
		temp = temp->next;
	}
	temp->next = n;
}

void LL::print(){
	Node *temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void LL::even_after_odd(){
	

}
int main(){
	int n, v;
	LL a;
	cin>>n;
	for(int i =0; i<n; i++){
		cin>>v;
		a.insert_at_tail(v);
	}
	a.even_after_odd();
	a.print();
	
}

/*
5
1 2 2 2 1 

Output:
1 1 2 2 2

*/