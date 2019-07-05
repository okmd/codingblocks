#include <iostream>
#define board_size 10
using namespace std;

void print_borad(int board[][board_size], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(board[i][j]) // queen is present
				cout<<"Q ";
			else // not present
				cout<<"- "; 
		}
		cout<<endl;
	}
}
bool isSafe(int board[][board_size], int i, int j, int n){
	// check column, fixed col and row change
	for(int row = 0; row<i; row++){
		if(board[row][j]){ // if already a queen
			return false;
		}
	}
	// check for right diagonal
	int x=i;
	int y=j;
	while(x>=0 and y<n){
		if(board[x][y]){
			return false;
		}
		x--, y++;
	}
	// check for left diagonal
	x=i;
	y=j;
	while(x>=0 and y>=0){
		if(board[x][y]){
			return false;
		}
		x--, y--;
	}
	// now col and both diagonals are safe to place queen
	return true;
}
bool NQueen(int board[][board_size], int i, int n){
	// base case
	if(i==n){
		// all queens are placed to their positions
		print_borad(board,n);
		cout<<endl;
		return false; // HACK to print all solution.
		// if ture then board is solved so it will not try to place to next position
		// if false then it will try to place to the next position, while this configuration 
		// is one of the valid configuration.
	}
	// recursive case
	// try to place the queen in current row, and  call on remaing part
	for(int j=0; j<n; j++){ // for all rows
		// if safe then only place
		if(isSafe(board, i, j, n)){ // at i,j position
			board[i][j] = 1;// Assuming if i, j is safe position
			bool nextQueenPlaceble = NQueen(board, i+1, n); // try for next row
			if(nextQueenPlaceble)
				return true;
			// we had returned, if here then i, j was not a right position.
			// then backtrack
			board[i][j] = 0;
		}
	}
	// if we are unable to place any queen in a row
	return false;
}

int main(){
	int n;
	cin>>n;
	int board[board_size][board_size] = {0};
	NQueen(board,0,n); // staring row, number of rows
	cout<<endl;
	return 0;
}

/*
Problem: N-Queen Problem using recursion and backtracking.
Given NxN chess board and we need to place N-Queens in the board
such that no queen cross each other, horizontally, vertically and diagonally.
There may be number of solutions/configurations.

Input:
4
Output:
- Q - - 
- - - Q 
Q - - - 
- - Q - 

- - Q - 
Q - - - 
- - - Q 
- Q - - 

Note: for 2 and 3 no configuration possible.
*/
