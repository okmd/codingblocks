#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int v){
		data = v;
		next = NULL;
	}
};
void print(Node *root){
	if(!root) return;
	while(root){
		cout<<root->data<<" ";
		root = root->next;
	}
	cout<<endl;
}
Node* insert_at_pos(Node *root, int value){
	Node *temp = root;
	Node *n  = new Node(value);
	if(value <= root->data){
		n->next = root;
		return n;
	}
	while(root and root->next){
		if(root->data <= value and root->next->data > value){
			n->next = root->next;
			root->next = n;
			break;
		}
		root = root->next;
	}
	return temp;
}
Node* insert_at_tail(Node* root, int val){
	Node *temp = root;
	Node *new_node = new Node(val);
	if(!root) return new_node;
	while(root->next){
		root = root->next;
	}
	root->next = new_node;
	return temp;

}

Node* make_list(){
	int n, v;
	Node *root = NULL;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>v;
		root = insert_at_tail(root,v);
	}
	return root;
}

Node* sort(Node* root){
	Node *temp = root, *head = root;
	if(!root) return NULL;
	if(!root->next) return root;
	while(root and root->next){
		if(root->data > root->next->data){
			temp = root->next;
			root->next = temp->next;
			//cout<<" ["<<temp->data<<"] ";
			head = insert_at_pos(head, temp->data);
			//print(head);
			delete temp;
		}
		else
			root = root->next;
	}
	return head;

}

int main(){
	Node *a = make_list();
	a = sort(a);
	print(a);
	
}

/*
5
1 2 2 2 1 

Output:
1 1 2 2 2

*/