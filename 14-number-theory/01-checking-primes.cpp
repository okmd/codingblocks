#include <iostream>
using namespace std;
int N_method(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not Prime\n";
			return 0;
		}
	}
	cout<<"It is Prime\n";
	return 0;
}
// optimization 1
int Nby2_method(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			cout<<"Not Prime\n";
			return 0;
		}
	}
	cout<<"It is Prime\n";
	return 0;
}

// optimization 2 upto root(n)
int rootN_method(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			cout<<"Not Prime\n";
			return 0;
		}
	}
	cout<<"It is Prime\n";
	return 0;
}

int main(){
	int n;
	cin>>n;
	N_method(n);
	Nby2_method(n);
	rootN_method(n);
	return 0;
}