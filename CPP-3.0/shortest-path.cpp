#include <iostream>
using namespace std;

int main(){
	int x=0, y=0;
	char ch;
	ch = cin.get();
	while(ch!='$'){
		switch(ch){
			case 'E': x++; break;
			case 'W': x--; break;
			case 'N': y++; break;
			case 'S': y--; break;
		}
		ch = cin.get();
	}
	cout<<"Displacement is (0,0) to ("<<x<<","<<y<<").\n";
	cout<<"Shortest Move is: ";
	if(x>0 && y>0){
		while(x--)
			cout<<"E";
		while(y--)
			cout<<"N";
	}else if(x<0 && y>0){
		while(y--)
			cout<<"N";
		while(x++)
			cout<<"W";
	}else if(x<0 && y<0){
		while(y++)
			cout<<"S";
		while(x++)
			cout<<"W";
	}else{
		while(x--)
			cout<<"E";
		while(y++)
			cout<<"S";
	}
	cout<<endl;
	return 0;
}

/*
Input:
	SSSNEEEW$
Output:
	Displacement is (0,0) to (2,-2).
	Shortest Move is: EESS



*/