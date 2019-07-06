#include <iostream>
#include <cmath>
#define N 9
using namespace std;

bool canPlace(int board[N][N], int x, int y, int number){
	for(int i=0; i<N; i++){ // checking for number present in row or column
		if(board[i][y]==number or board[x][i]==number)
			return false;
	}
	// checking for number present in sub-cell or not
	int rn = sqrt(N);
	int sx = (x/rn)*rn;
	int sy = (y/rn)*rn;
	for(int i=sx; i<sx+rn; i++){
		for(int j=sy; j<sy+rn; j++){
			if(board[i][j]==number)
				return false;
		}
	}
	// if here so placeble
	return true;
}

bool solveSudoko(int board[N][N], int x, int y){
	// base case
	if(x==N){
		for(int i =0; i<N; i++){
			for(int j =0; j<N; j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	// case if row end, then move to next row where col is 0
	if(y==N)// last col
		return solveSudoko(board, x+1,0);
	// skip already filled values, goto next column
	if(board[x][y]!=0)
		return solveSudoko(board, x ,y+1);
	// recursion case
	for(int number = 1; number<=N; number++){
		if(canPlace(board, x,y,number)){
			// Assuming we can place number at x,y
			board[x][y]=number;
			bool nowSolvable = solveSudoko(board, x, y+1);
			if(nowSolvable)
				return true;
		}
	}
	// we can't place so backtrack by placing 0
	board[x][y] = 0;
	return false;
}

int main(){;
	int board[N][N]={
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	solveSudoko(board,0,0);
	cout<<endl;
	return 0;
}

/*
Problem: Solve sudoko of size NxN;
Constraints:
1) Each row, col, sub-cell have number between 1 to N.
2) Each row, col, sub-cell(root(n)xroot(n)) must contain exaclty one number from 1 to N.
Input:
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

Output:
5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 
8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6 
9 6 1 5 3 7 2 8 4 
2 8 7 4 1 9 6 3 5 
3 4 5 2 8 6 1 7 9
*/
