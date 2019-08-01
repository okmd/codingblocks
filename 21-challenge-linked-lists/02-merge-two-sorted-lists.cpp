#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int val=0):data(val), next(NULL){}
	Node* merge(Node *n){
		if(!this) return n;
		if(!n) return this;
		Node* c;
		if(this->data < n->data){
			c = this;
			c->next = this->next->merge(n);
		}else{
			c = n;
			c->next = this->merge(n->next);
		}
		return c;
	}
};
class LL{
	Node* head;
public:
	LL(Node* head=(Node*)NULL):head(head){}
	Node* get_head()const{
		return head;
	}
	void insert_at_tail(int);
	void print();
	LL* merge(LL*);
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
LL* LL::merge(LL *l){
	return new LL(this->head->merge(l->head));

}
int main(){
	int t, n, m, v;
	cin>>t;
	while(t--){
		LL a,b;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>v;
			a.insert_at_tail(v);
		}
		cin>>m;
		for(int i=0; i<m; i++){
			cin>>v;
			b.insert_at_tail(v);
		}
		a.merge(&b)->print();
	}
}

/*
4
2
1 1
2
1 1
3
1 2 3
3
4 5 6
4
1 2 3 4
0
2
1 1
2
-1 2

Output:
1 2 3 4 5 6 7
*/
