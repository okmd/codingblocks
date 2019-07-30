#include <iostream>
#include <vector>
using namespace std;
void maping(int a[], int num, int req_sum){
	// if num 6 110
	int i=0;
	int current_sum = 0;
	vector<int> v;
	while(num){
		if(num&1){
			current_sum += a[i];
			v.push_back(a[i]);
		}
		i++;
		num = num>>1;
	}
	if(current_sum==req_sum){
		for(int i=0; i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
}

void sumItUp(int a[], int n, int req_sum){
	for(int i=1; i<(1<<n); i++){
		maping(a, i, req_sum);
	}
}

int main(){
	int n, req_sum;
	cin>>n;
	int elements[n];
	for(int i=0; i<n; i++)
		cin>>elements[i];
	cin>>req_sum;
	sumItUp(elements,n, req_sum);
	//cout<<endl;
	return 0;
}