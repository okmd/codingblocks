#include <iostream>
using namespace std;
class Node{
		public:
			int data;
			Node* next;
			Node(int val=0):data(val), next(NULL){}
};
// Circular LL
class CL{
	public:
		Node* head;
		CL():head(NULL){}
		void print();
		void insert_at_head(int);
		Node* get_node(int);
		void remove(int);
};
void CL::print(){
	Node *temp = this->head;
	if(!temp) return;
	while(temp->next!=this->head){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<temp->data<<"->";
	cout<<"HEAD"<<endl;
}
void CL::insert_at_head(int val){
	Node* node = new Node(val);
	if(!this->head)
		node->next = node;	
	else{
		Node* temp = this->head;
		node->next = temp;
		while(temp->next!= this->head){
			temp = temp->next;
		}
		temp->next = node;
	}
	this->head = node;
}
Node* CL::get_node(int val){
	Node* temp = this->head;
	while(temp->next != this->head){
		if(temp->data == val) return temp;
		temp = temp->next;
	}
	if(temp->data == val) return temp;
	return NULL;
}
void CL::remove(int val){
	Node* del = this->get_node(val);
	if(!del){
		cout<<"Not Present\n";
		return;
	}
	if(del == head)
		head = del->next;
	Node* temp = head;
	while(temp->next != del)
		temp = temp->next;
	temp->next = del->next;
	delete del;

}