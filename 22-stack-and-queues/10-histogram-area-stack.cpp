#include <bits/stdc++.h>
using namespace std;

int maxArea(int arr[], int n){
	int top;
	int area = INT_MIN;
	int i=0;

	stack<int> st;
	while(i<n){
		if (st.empty() or arr[st.top()] <= arr[i]){ 
			st.push(i++); 
		}else{ // next elem small
			top = st.top();
			st.pop();
			area = max(area, arr[top] * (st.empty() ? i : i - st.top() - 1));
		}
	}
	// remaining
	while (!st.empty()){ 
		top = st.top(); 
		st.pop();
		area = max(area, arr[top] * (st.empty() ? i : i - st.top() - 1));
	}

	return area;

}

int main(){
	int bars[] = {6, 2, 5, 4, 5, 1, 6}; //heihts of bars
	int n = sizeof(bars)/sizeof(int);
	cout<<"Maximum area: "<<maxArea(bars,n)<<endl;
	
	return 0;
}

/*
IMPORTANT: Interview Question.

There are three methods to find solution

1. Brute force: width*height between ith and jth bar.	O(n^2).
2. Divide and Conquer. 									O(nlogn).
3. Stack based solution.								O(n). 

*/