#include <iostream>
#include <cstring>
using namespace std;
char map[26];

void mapping(){
	for(int i=0; i<26; i++){
		map[i] = 65 + i;
		//cout<<map[i]<<" ";
	}
}

void before(char a[], int n){
	if(n<0) return;
	before(a, n-1);
	cout<<map[a[n]-1-'0'];
}

void middle(char a[], int n){
	int i = a[n-1] - '0';
	int j = a[n] - '0';
	cout<<map[i*10 +j -1];
}

void after(char a[], int n){
	if(n>=strlen(a)) return;
	after(a, n+1);
	cout<<map[a[n]-1-'0'];
}

void towDigit(char a[], int n){
	if(n>0){
		// before
		before(a,n-2);
		//middle
		middle(a,n);
		//after
		after(a,n+1);
	}
}
void singleDigit(char a[], int n){
	if(n==strlen(a)) return;
	cout<<map[a[n]-1-'0'];
	singleDigit(a, n+1);
	cout<<endl;
	towDigit(a,n);
}

int main(){
	char a[1000009];
	cin>>a;
	int n = strlen(a);
	mapping();
	singleDigit(a,0);
	return 0;
}

/*
Not Complete
*/