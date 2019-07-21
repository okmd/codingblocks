#include <iostream>

using namespace std;

template <typename T>
class Vector{
	private:
		int max_size; 	// 10
		int cur_size; 	// 0
		T * pointer; 	// NULL
	public:
		Vector():max_size(5),cur_size(0){
			pointer = new T[max_size];
		}
		void push_back(T value){
			if(cur_size<max_size){
				pointer[cur_size++]=value;
			}
			else{
				max_size = 2*max_size;
				T * pointer1 = new T [max_size];
				for(int i=0; i<cur_size; i++){
					pointer1[i] = pointer[i];
				}
				pointer = pointer1;
				pointer[cur_size++] = value;// insert value

			}
		}
		T pop_back(){
			if(cur_size<0) return T(0);
			return pointer[cur_size-- - 1];// pop value
		}
		Vector(Vector &v){
			max_size = v.max_size;
			cur_size = v.cur_size;
			pointer = v.pointer;
		}
		void operator + (Vector &v){
			int i;
			if(cur_size + v.cur_size > max_size)
				max_size += v.max_size;

			T *pointer1 = new T[max_size+1];
			for(i=0; i<cur_size;i++){
				pointer1[i] = pointer[i];
			}
			for(int i=0; i<v.cur_size;i++)
				pointer1[cur_size++] = v.pointer[i];
			pointer = pointer1;
			
		}
		void reserve(const int n){
			max_size = n;
		}
		void print(){
			for(int i=0; i<cur_size; i++){
				cout<<pointer[i]<<" ";
			}
			cout<<endl;
		}
		~Vector(){
			delete [] pointer;
			cout<<"free\n";
		}

};

int main(){
	Vector<int> a,b;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.print();
	b.push_back(6);
	b.push_back(7);
	b.push_back(8);
	b.push_back(9);
	b.push_back(9);
	b.push_back(9);
	b.push_back(9);
	b.print();
	a+b;
	a.print();
	b.print();

	return 0;
}

/*


*/