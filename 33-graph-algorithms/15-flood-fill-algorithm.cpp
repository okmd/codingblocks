#include <bits/stdc++.h>
using namespace std;

int R, C;
// w, n, e, s
int dx[] = {-1,0,1,0}; // direction
int dy[] = {0,-1,0,1};

void print(char mat[][50]){
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
}

void floodFill(char mat[][50], int i, int j, char ch, char color){
	// base case matrix bound
	if(i<0 or j<0 or i>=R or j>=C) return;

	// boundary, figure bound
	if(mat[i][j]!=ch) return;

	//recursive call
	mat[i][j] = color;
	for(int k=0; k<4; k++){ // 4 directions
		floodFill(mat, i+dx[k], j+dy[k], ch, color);
	}
}

int main(){
	cin>>R>>C;
	char input[15][50];
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			cin>>input[i][j];
		}
	}
	cout<<"\nInput\n";
	print(input);
	floodFill(input, 8, 13, '.', 'r');// start from 8,13 and replace . with r
	floodFill(input, 0, 0, '.', '!');// start from 0,0 and replace . with !
	cout<<"\nOutput\n";
	print(input);

	return 0;
}


/*
Filling the color.

Application of DFS:
Implicit graph - 2d matrix.
Graph coloring problem - flood fill problem.

From any point we  can go 4 or 8 direcitons. up, down, left, right etc.

input: ./a.exe < apple.txt <- windows
*/