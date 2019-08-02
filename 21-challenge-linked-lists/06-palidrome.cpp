#include <iostream>
#include <stack>
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
		void is_palindromic();
		
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

void LL::make_list(){
	// insert till -1
	int n,v;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>v;
		this->insert_at_tail(v);
	}
}
void LL::is_palindromic(){
	Node* temp = head;
	stack<int> st;
	while(temp){
		st.push(temp->data);
		temp = temp->next;
	}
	temp = head;
	while(temp){
		if(temp->data != st.top()){
			cout<<"False\n";
			return;
		}
		st.pop();
		temp = temp->next;
	}
	cout<<"True\n";
}

int main(){
	LL a;
	a.make_list();
	a.is_palindromic();
	return 0;
}

/*
Input: 
5
1 2 3 6 8
Output: False

Note: Not any output for True
*/

