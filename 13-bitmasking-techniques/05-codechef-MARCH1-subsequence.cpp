#include<iostream>
#include<cstring>
using namespace std;

int filterInt(int *a, int num){
	// a="abc", num=6, --output should be "bc" as 6 is 110
	int i=0;
	int output=0;
	while(num){
		output += (num&1) ? a[i] : 0; // last digit for 1st of char
		i++;
		num = num>>1;
	}
	return output;
	// if(output == required) cout<<"YES";
	// else cout<<"NO";
	// cout<<endl;

}

bool generateSubsequence(int *a, int n, int required){
	// generate a range from 0 to 2^n -1
	int range = (1<<n) - 1;
	int res;
	for(int i=1; i<=range; i++){ // i=0 for nothing is selected
		res = filterInt(a,i);
		if(res == required){
			return true;
		}
	}
	return false;
}
int main(){
	int t,notes, money;
	cin>>t;
	while(t--){
		cin>>notes>>money;
		int wallet[notes];
		for(int i=0;i<notes;i++)
			cin>>wallet[i];
		if(generateSubsequence(wallet, notes, money)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

/*
Problem: Geneare all subsequence of a notes.
Time complexity: O(n*2^n)

Notes <= 20 banknotes. i.e array size = 20
Testcases = 100 = 10^2
Total subsequence = 2^20 - 1
Note values <= 10^3

5
3 3
1
1
1
5 11
1
2
4
8
16
5 23
1
2
4
8
16
5 13
1
5
5
10
10
20 132
17
6
4
998
254
137
259
153
154
3
28
19
123
542
857
23
687
35
99
999

*/