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

Node* merge(Node *a, Node *b){
	if(!a) return b;
	if(!b) return a;
	Node *c;
	if(a->data < b->data){
		c = a;
		if(a->next)
			c->next = merge(a->next, b);
		else
			c->next = b;
	}else{
		c = b;
		c->next = merge(a, b->next);
		
	}
	return c;
}

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

int main(){
	int t;
	cin>>t;
	while(t--){
		Node *a = make_list();
		Node *b = make_list();
		Node *c = merge(a,b);
		print(c);
	}
	return 0;
}