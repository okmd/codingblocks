#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
	srand(time(NULL)); // random no each time, as timestamp changes
	cout<<"Time: "<<rand()%100<<" "; // random 0 to 99
	srand(1); // same value each time
	cout<<"NULL: "<<rand()%100<<" \n";
	return 0;
}

/*

Time: 25 NULL: 83
Time: 14 NULL: 83
Time: 45 NULL: 83
Time: 50 NULL: 83

As time stamp changes it generate the random number. but if we loop in a very short span of time
it will generate atleast some same result untill time changes.
*/