#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int

ll arr[1000005], prefixSum[1000005];
// here prefixSum is storing the frequency of number, 0 to n-1
// we are appending 0 in every prefix sum i.e sum before any element
// therefore initially zero count is atleast is 1.
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll sum = 0;
		memset(prefixSum, 0, sizeof prefixSum); // prefixSum[1000005]={0};
		prefixSum[0] = 1; // atleat one zero will always be there

		for(int i=0;i<n; i++){
			cin>>arr[i];
			sum += arr[i];
			sum %= n;
			sum = (sum + n)%n; // for -ve sum it will make it +ve but +ve won't change
			prefixSum[sum]++; // frequency
		}

		ll ans = 0;
		for(int i=0;i<n; i++){
			//cout<<prefixSum[i]<<" "; //frequenvy array
			ll no = prefixSum[i];
			ans += no*(no-1)/2; // nC2 is n*(n-1)/2; for each frequency we have nC2 subarray.
		}
		cout<<ans<<endl;
	}
	return 0;
}

/*

Pigeonhole Principle:
If there are n holes and n-1 pigoen
then atleast one of the hole must have 2 pigeons.


*/