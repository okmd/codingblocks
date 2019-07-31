#include <iostream>
#include <string>
using namespace std;

class Node{
public:
	char data;
	bool terminal;
	Node *childs[26]; // array of pointers to node
	Node(char val){
		data = val;
		terminal = false;
		fill(childs, childs+26, (Node*)NULL); //begin, end, value
	}
};

class Tries{
	Node*root;
public:
	Tries(){
		root = new Node('\0');
	}
	void add_word(string word){
		Node *temp = root;
		for(int i=0; i<word.length(); i++){
			int idx = word[i] - 'a';
			if(temp->childs[idx]==NULL){
				Node *child = new Node(word[i]);
				temp->childs[idx] = child;
				temp = child;
			}else{
				temp = temp->childs[idx];
			}
		}
		temp->terminal = true;
	}

	bool search(string word){
		Node *temp = root;
		for(int i=0; i<word.length(); i++){
			int idx = word[i] - 'a';
			if(!temp->childs[idx])
				return false;
			temp = temp->childs[idx];
		}
		return temp->terminal;
	}
};

int main(){
	Tries t;
	int n = 4;
	string arr[] = {"hello", "hi", "new", "danish"};
	for(int i=0; i<n; i++)
		t.add_word(arr[i]);
	string s;
	cout<<"Enter quit to exit anytime.\n";
	do{
		cin>>s;
		if(t.search(s))
			cout<<"Yes! "<<s<<" is present."<<endl;
		else
			cout<<"No! "<<s<<" is not present."<<endl;
	}while(s.compare("quit"));
}