#include <iostream>
#include <vector>
#include <set>
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
		LL(Node* h):head(h){}
		void insert_at_tail(int);
		void make_list();
		void intersection(LL*);
		int length();
		
};

int LL::length(){
	Node *temp = head;
	int c = 0;
	while(temp){
		c++;
		temp = temp->next;
	}
	return c;
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

void LL::make_list(){
	// insert till -1
	int n,v;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>v;
		this->insert_at_tail(v);
	}
}
void LL::intersection(LL *list){
	Node *big, *small;
	int n = this->length();
	int m =list->length();
	int d = abs(n-m);
	if(n>m){
		big = head;
		small = list->head;
	}
	else{
		big = list->head;
		small = head;
	}
	while(big and d--){
		big = big->next;
	}
	while(big and small and big->data!=small->data){
		big = big->next;
		small = small->next;
	}
	if(big)
		cout<<big->data<<endl;
	else
		cout<<-1<<endl;
	
}

int main(){
	LL a,b;
	a.make_list();
	b.make_list();
	a.intersection(&b);
	return 0;
}

/*
Input: 
5
10 20 30 40 50
4
15 25 40 50
Output: 40

Input:
5
10 20 30 40 50
4
1 3 4 5
Output: -1

*/

