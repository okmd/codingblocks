#include <iostream>
#include <string>

using namespace std;

class Car{
	int price;
	string name;
public:
	// copy constructor creates a copy of given object of same type
	Car(){}
	Car(Car &X){
		name = X.name;
		price = X.price;
	}
	// by default copy constructor exists, but have some limit
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
	void operator = (Car &X){
		//string *name = new string; // heap
		name = X.name;
		price = X.price;
	}
};
int main(){
	Car c; // default
	c.setName("Audi");
	c.setPrice(120);
	//Car d(c); // or d=c // copy consructor is called
	Car d;
	d  =  c; // copy assignment is called, as a defferent steps
	cout<<c.getName()<<endl;
	cout<<c.getPrice()<<endl;
	cout<<d.getName()<<endl;
	cout<<d.getPrice()<<endl;
	return 0;
}

/*

getters and setters are used for setting private variables.
Shallow Copy: both object points to the same memory location if stored a pointer to the heap.
				Changing one copy changes other.
Deep Copy: both object have different spaces in heap.


Copy assignmet operator(=): it will make both object same. and it uses shallow copy.
to make it deep copy, make own copy assignment operator function. 
*/