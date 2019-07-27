#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;
		Node(int value=0):data(value), next(NULL){}
};

class LL{
	private:
		Node * head;
		//Node * tail;
	public:
		LL():head(NULL){}//, tail(NULL){}
		Node* get_head() const {
			return this->head;
		}
		void print(){
			Node *temp = head;
			while(temp){
				cout<<temp->data<<"->";
				temp = temp->next;
			}
			cout<<"NULL"<<endl;
		}
		int length(){
			int len = 0;
			Node *temp = head;
			while(temp){
				len++;
				temp = temp->next;
			}
			return len;
		}
		void insert_at_head(int);
		void insert_at_middle(int, int);
		void insert_at_tail(int);
		void delete_from_head();
		void delete_from_middle(int);
		void delete_from_tail();
		bool linear_search(int);
		bool recursive_search(Node*, int);
		void make_list();
		void reverse();
		void recursive_reverse(Node*);
		Node* mid_point();
		Node* kth_node_from_end(int);
		// Operator overloading
		int operator[](Node *n){
			if(n) return n->data;
		}
		
};

void LL::insert_at_head(int value){
	Node *n  = new Node(value);
	n->next = this->head;
	this->head = n;
}
void LL::insert_at_middle(int value, int pos){
	// insert after num number of nodes
	int len = this->length();
	if(pos<=1)
		insert_at_head(value);
	else if(pos>len)
		insert_at_tail(value);
	else{// 1<num<=len
		Node *n  = new Node(value);
		Node *temp = head;
		while(temp and --pos -1>0){
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}	
}
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
void LL::delete_from_head(){
	Node *temp = this->head;
	if(!temp) return;//empty list
	this->head = temp->next;
	delete temp;
}
void LL::delete_from_middle(int pos){
	// delete at pos position
	int n = this->length();
	if(pos<=1)
		delete_from_head();
	else if(pos>=n)
		delete_from_tail();
	else{ // list have element 1<pos<n
		Node *temp = head,*to_del;
		while(temp->next->next and --pos -1>0){
			temp = temp->next;
		}
		to_del = temp->next;
		temp->next = temp->next->next;
		delete to_del;
	}
}
void LL::delete_from_tail(){
	Node *temp = this->head;
	if(!temp) return;// empty list
	if(!temp->next){ // only one node
		this->head = NULL;
		delete temp;
		return;
	}
	while(temp->next->next){
		temp = temp->next;
	}
	delete temp->next;
	temp->next = NULL;
}
bool LL::linear_search(int value){
	Node *temp = this->head;
	if(!temp) return false;
	while(temp){
		if(temp->data == value)
			return true;
		temp = temp->next;
	}
	return false;
}
bool LL::recursive_search(Node *p, int value){
	Node *temp = p;
	if(!temp) return false;
	if(temp->data == value) return true;
	return recursive_search(temp->next, value);
}
void LL::make_list(){
	// insert till -1
	cout<<"Enter Elements till -1 to list: ";
	int n;
	cin>>n;
	while(n!=-1){
		this->insert_at_tail(n);
		cin>>n;
	}
}
// problem Solving
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
void LL::recursive_reverse(Node *curr){
	Node *nxt;
	if(!curr) return;
	if(!curr->next){
		this->head = curr;
		return;
	}
	this->recursive_reverse(curr->next);
	curr->next->next = curr;
	curr->next = NULL;
}

// Runner technique to find mid point
// even length have two mid points, odd have one mid point
Node* LL::mid_point(){
	Node *slow = this->head;
	if(!slow or !slow->next) return this->head; // empty or one element
	Node *fast= this->head->next; // atleast 2 elements
	while(fast and fast->next){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;

}
// In single pass, find kth element from end
Node* LL::kth_node_from_end(int k){
	Node *slow = this->head,*fast = this->head;
	if(!slow or k>this->length()) return this->head; // empty or invalid pos
	while(fast and k--)
		fast = fast->next;
	while(fast){
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}

// Merge tow linked lists without using extra space

/*
	Data structures: Linked list
*/
