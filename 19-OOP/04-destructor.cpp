#include <iostream>
#include <string>

using namespace std;

class Car{
	int price;
	string name;
public:
	void setPrice(int p){
		// set min price 100$
		if(p<100)
			price = 100;
		else
			price = p;
	}
	void setName(string s){
		name = s;
	}
	int getPrice(){
		return price;
	}
	string getName(){
		return name;
	}
	~Car(){ // destructor
		cout<<"Destroying\n";
	} 
};
int main(){
	Car c; // default
	c.setName("Audi");
	c.setPrice(120);
	cout<<c.getName()<<endl;
	cout<<c.getPrice()<<endl;
	return 0;
}

/*
out of scope/ delete
Destructor will not be called for dynamic allocation untill you delete it with delete command.
Destructor will destroy all static members.
For dyanmic you have to write your own code.
*/