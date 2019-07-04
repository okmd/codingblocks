#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int

ll partition(ll arr[], ll s, ll e){
	ll i =s-1;
	ll pivot = arr[e];
	for(ll j=s; j<e; j++)
		if(arr[j]<=pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	swap(arr[e], arr[i+1]);
	return i+1; // index of pivot element
}

void quick_sort(ll arr[], ll s, ll e){
	if(s>=e) return;
	ll pivot = partition(arr, s, e);
	quick_sort(arr, s, pivot-1);
	quick_sort(arr, pivot+1, e);
}

int main(){
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	quick_sort(arr, 0, n-1);
	// print
	for(ll i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

/*
Problem: Quick sort.
*/
