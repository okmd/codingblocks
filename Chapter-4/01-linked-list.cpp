#include <iostream>
using namespace std;
class IntElement{
	IntElement *next;
	int data;
	public:
		IntElement(int value): next(NULL), data(value){} // constuctor, initializing next=NULL, data=value
		//~IntElement();

		IntElement *getNext() const { return next;}
		int value() const {return data; } 			// const member function
		void setNext(IntElement *elem) { next = elem; }
		void setValue( int value) { data = value; }

};

int main(){
	IntElement E(4);
	IntElement *K;
	cout<<E.value()<<endl;

	E.setValue(5);
	cout<<E.value()<<endl;

	E.setNext(K);
	E.next->setValue(9);
	cout<<E.value()<<endl;
	cout<<K->value()<<endl;

	return 0;
}