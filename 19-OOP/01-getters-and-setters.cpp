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
};
int main(){
	Car c;
	c.setName("Audi");
	c.setPrice(30);
	cout<<c.getName()<<endl;
	cout<<c.getPrice()<<endl;
	return 0;
}

/*

getters and setters are used for setting private variables.

*/