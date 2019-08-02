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

Node* inert_at_tail(Node* root, int val){
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
		root = inert_at_tail(root,v);
	}
	return root;
}

Node* sort(Node* root){
	Node *temp = root, *head = root;
	if(!root return) NULL;
	if(!root->next) return root;
	root = root->next;
	// rest is remaining

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