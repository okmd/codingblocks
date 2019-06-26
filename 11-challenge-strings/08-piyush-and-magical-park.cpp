#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n,m,k,s;
	int i,j,score;
	cin>>n>>m>>k>>s;
	score = s;
	char a[n][m];//={{'.','.','*','.'},{'.','#','.','.'},{'*','*','.','.'},{'.','#','*','*'}};;
	// read
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	//calulate  score
	for(i=0;i<n;i++){
		for(j=0;j<m, k<=score;j++){
			if(a[i][j]=='#')
				break;
			else if(a[i][j]=='*')
				score += 4;
			else if(a[i][j]=='.')
				score -= 3;
			else if(j==m-1)
				score=1;
		}
		// +
	}
	if(score>=k)
		cout<<"Yes\n"<<score<<endl;
	else
		cout<<"No\n";
	
	return 0;
}

/*

not complete

*/
