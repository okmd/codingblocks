#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int val=0):data(val), next(NULL){}
};
class LL{
public:
	Node* head;
	LL():head(NULL){}
	void insert_at_tail(int);
	void reverse();
	void k_reverse(int);
	void print();
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
void LL::k_reverse(int k){
		Node *curr = head;
		Node *next, *prev=NULL;
		// to be continued..

}
void LL::print(){
	Node *temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void LL::reverse(){
	Node *curr = head, *prev = NULL, *nxt = NULL;
	if(!curr) return;
	while(curr){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	this->head = prev;
}
int main(){
	int n,k,v;
	cin>>n>>k;
	LL l;
	for(int i=0; i<n; i++){
		cin>>v;
		l.insert_at_tail(v);
	}
	l.print();
	l.reverse();
	l.print();
}