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

		int better_day = s.empty() ? 0 : s.top(); // if empty then 0 otherwise top element
		int span = day - better_day; // subtract index to get span
		ans[day] = span; // store the span
		s.push(day); // push only index not element
	}

	// print
	for (int i = 0; i < n; ++i){
		cout<<ans[i]<<" ";
	}

	cout<<endl; // new line


}

int main(){

	int n=7;
	int arr[] = {100, 80, 60, 70, 60, 75, 85};
	print_span(arr, n);
	// ans
	// 0 1 1 2 1 4 6
	
	return 0;
}