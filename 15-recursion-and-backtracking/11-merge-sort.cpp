#include <iostream>
#define ll long long int
#define limit 1000005
using namespace std;
void merge(ll a[], ll s, ll mid, ll e){
	ll i, j, k;
	i=k=s;
	j=mid+1;
	ll temp[limit];
	while(i<=mid and j<=e){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	// if left part is large copy
	while(i<=mid)
		temp[k++] = a[i++];
	// if right part is large copy
	while(j<=e)
		temp[k++] = a[j++];
	// copy back to original array
	for(ll i=s;i<=e; i++)
		a[i] = temp[i];
}

void merge_sort(ll arr[], ll s, ll e){
	if(s>=e) return;

	ll mid = (s+e)/2;
	// divide and sort
	merge_sort(arr, s,mid);	//	left half
	merge_sort(arr, mid+1 ,e);	// right half

	// merge
	merge(arr, s, mid, e);
}


int main(){
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	merge_sort(arr, 0, n-1);
	// prll
	for(ll i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

/*
Problem: Merge sort.
1) Divide in to parts from mid
2) Sort both sub array
3) Merge both sub array.
*/