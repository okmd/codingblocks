#include <iostream>

using namespace std;


class Complex{
	private:
		int real;
		int img;
	public:
		Complex():real(0), img(0){}
		Complex(int r, int i){
			real = r;
			img = i;
		}
		Complex(const Complex &c){
			real = c.real;
			img = c.img;
		}
		void setReal(const int r){
			real = r;
		}
		void setImg(const int i){
			img = i;
		}
		int getReal()const{
			return real;
		}
		int getImg() const{
			return img;
		}
		void print() const{
			if(img >= 0)
				cout<<real<<"+"<<img<<"i";
			else
				cout<<real<<img<<"i";
			cout<<endl;
		}
		void add(const Complex &c){
			real += c.real;
			img += c.img;
		}
		// operator overloading
		void operator+(const Complex &c){
			real += c.real;
			img += c.img;
		}
		int operator[](const int n){ // 0 for real, anything for img
			if(n==0)
				return real;
			return img;
		}
		void operator!(){
			img *= -1; // conjugate
		}

};
istream& operator>>(istream &is, Complex &c){
	int r,i;
	is>>r>>i;
	c.setReal(r);
	c.setImg(i);
	return is; // to real multiple object at a time, won't wor for void
}
ostream& operator<<(ostream &os, Complex &c){
	c.print();
	return os; // to write multiple object at a time, won't wor for void
}

int main(){
	// Complex c(2,4),d(1,-5);
	// c.print();
	// d.print();
	// c+d;
	// c.print();
	//---------------//
	// Complex a, b;
	// cin>>a>>b;
	// cout<<a<<b;
	// a+b;
	// cout<<a<<b;
	//-------------//
	Complex a(3,5);
	a.print();
	!a;
	a.print();
	//--------------//

	return 0;
}

/*
Function overloading: function with different parameter.
Operator overloading: customized operator work. 
unary, binary etc. can be overloaded.
*/