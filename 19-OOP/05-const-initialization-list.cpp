#include <iostream>
#include <string>

using namespace std;

class Car{
	int price;
	string name;
	int tyres;
public:
	// only constructor can initialize, def, copy, parm, etc.
	Car(int t):name("Car"), tyres(t){ // initialization
		// c++ provides initialization list to initialize values, not assignemnt.
		// name = NULL;
		// price = 0; // assignemnt
	}
	void setPrice(const int p){// constant p, we can't update p like p++
		// set min price 100$
		if(p<100)
			price = 100;
		else
			price = p;
	}
	void setName(string s){
		name = s;
	}
	int getPrice() const{ // const function, do not update data members
		return price;
	}
	string getName() const{
		return name;
	}
	~Car(){ // destructor
		cout<<"Destroying\n";
	} 
	void print() const{
		cout<<name<<endl; 
		cout<<price<<endl; 
		cout<<tyres<<endl; 
	}
};
int main(){
	Car c(4); // default
	//c.setName("Audi");
	c.setPrice(120);
	c.print();
	return 0;
}

/*
const function, do not update the data members.
constant parameters, which can't be changed
*/