#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
#define ll long long int
using namespace std;

void print(ll arr[], ll n){
	// print
	for(ll i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void shuffle(ll a[], ll s, ll e){
	srand(time(NULL));
	ll j;
	for(ll i =e; i>0; i--){
		j = rand()%(i+1); // random index, between 0 to i
		swap(a[i], a[j]);
	}

}

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
	cout<<"Original: ";
	print(arr, n);
	shuffle(arr,0,n-1);
	cout<<"Shuffled: ";
	print(arr, n);
	quick_sort(arr, 0, n-1);
	cout<<"Sorted: ";
	print(arr,n);
	return 0;
}

/*
Problem: randomized Quick sort.

*/
