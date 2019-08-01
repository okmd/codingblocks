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
	void append_at_front(int);
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
void LL::append_at_front(int k){
	if(k>=this->len()) return ;

	Node* temp = head, *t = head;
	while(temp and k--)
		temp = temp->next;
	while(temp->next){
		temp = temp->next;
		t = t->next;
	}
	temp->next = head;
	head = t->next;
	t->next = (Node*)NULL;

}
int main(){
	int k, n, v;
	LL a;
	cin>>n;
	for(int i =0; i<n; i++){
		cin>>v;
		a.insert_at_tail(v);
	}
	cin>>k;
	a.append_at_front(k);
	a.print();
	
}

/*
9
1 2 3 4 5 6 7 8 9
3

Output:
7 8 9 1 2 3 4 5 6
*/
