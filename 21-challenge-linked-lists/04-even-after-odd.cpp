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

Node* even_after_odd(Node* root){
	Node *temp = root, *eh=NULL, *oh=NULL, *et=NULL, *ot=NULL;
    if(!root) return NULL;
	while(temp){
		if(temp->data &1){
			if(!oh)
				oh = ot = temp;
			else{
				ot->next = temp;
				ot = temp;
			}
		}else{
			if(!eh)
				eh = et = temp;
			else{
				et->next = temp;
				et = temp;
			}
		}
		temp = temp->next;
	}
	if(!oh){
		et->next = NULL;
		return eh;
	}
	ot->next = eh;
	if(et)
		et->next = NULL;
	return oh;

}

int main(){
	Node *a = make_list();
	a = even_after_odd(a);
	print(a);
	
}

/*
5
1 2 2 2 1 

Output:
1 1 2 2 2

*/