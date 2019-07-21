#include <iostream>
#include <string>

using namespace std;

class Car{
	int price;
	string name;
public:
	Car(){ // default constructor
		price = 100;
		name = "Car";
	}
	Car(int p, string s){ // parametarise constructor
		price = p;
		name = s;

	}
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
};
int main(){
	Car c; // default
	Car d(140, "Maruti"); // parametarized
	cout<<c.getName()<<endl;
	cout<<c.getPrice()<<endl;
	cout<<d.getName()<<endl;
	cout<<d.getPrice()<<endl;
	return 0;
}

/*

getters and setters are used for setting private variables.

*/