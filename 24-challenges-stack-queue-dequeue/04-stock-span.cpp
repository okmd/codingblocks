#include <iostream>
#include <stack>

using namespace std;

void print_span(int arr[], int n){
	stack<int> s;
	int ans[n];
	for(int day=0; day<n; day++){
		int current_price = arr[day]; // price of current day
		while(!s.empty() and arr[s.top()] < current_price)
			s.pop(); // remove elements which do not contribute to calculate span of current price

		int better_day = s.empty() ? 0 : s.top()+1; // if empty then 0 otherwise top element
		int span = day - better_day; // subtract index to get span
		ans[day] = span+1; // store the span
		s.push(day); // push only index not element
	}

	// print
	for (int i = 0; i < n; ++i){
		cout<<ans[i]<<" ";
	}
	cout<<"END\n"; // new line
}

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	print_span(a, n);
	
	return 0;
}

/*
Span of each day is k days before current day whose price is <= current day.
1 based index of day. 

*/