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
	LL():head(NULL){}
	Node* get_head()const{
		return head;
	}
	void insert_at_tail(int);
	void reverse();
	Node* k_reverse(Node*, int);
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
Node* LL::k_reverse(Node* root, int k){
	int i = k;
	Node *curr = root, *prev = NULL, *nxt;
	while(curr and i--){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	if(nxt)
		root->next = k_reverse(nxt, k);
	if(head == root){// on coming back
		head = prev;
		return (Node*)NULL;
	}
	return prev;

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
	int n=9,k=3,v=1;
	//cin>>n>>k;
	LL l;
	for(int i=0; i<n; i++){
		//cin>>v;
		l.insert_at_tail(v++);
	}
	l.print();
	l.reverse();
	l.print();
	l.k_reverse(l.get_head(), k);
	l.print();
}