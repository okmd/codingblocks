#include <iostream>
#define M 10
#define N 10
using namespace std;

void print_path(int sol[M][N], int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool ratInMaze(char maze[M][N], int sol[M][N], int x, int y, int row, int col){
	// base case
	if(x==row and y==col){
		sol[x][y] = 1;
		// print the path
		print_path(sol, row+1, col+1);
		cout<<endl;
		return true;
	}
	// recursive case
	// rat should be inside the maze
	// blocked path
	if(x>row or y>col or maze[x][y]=='X'){
		return false;
	}
	//assume solution exist at x,y
	sol[x][y] = 1;
	// check both path
	bool canGoToRight = ratInMaze(maze, sol, x, y+1, row, col);
	bool canGoToDown = ratInMaze(maze, sol, x+1, y, row, col);

	// going back steps
	// if here then could not found path so set 0
	sol[x][y] = 0; //BACKTRACKING, setting 0 for both the cases if path exists or not.

	if(canGoToRight or canGoToDown){
		return true;
	}
	// not found any path
	return false;

}


int main(){
	int m,n;
	cin>>m>>n;
	int solution[M][N] = {0};
	char board[M][N] = {
		"0000",
		"0000",
		"0000",
		"0000"
	};
	// print maze
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	if(!ratInMaze(board, solution, 0,0,m-1, n-1)){
		cout<<"Path doesn't exist!";
	}
	cout<<endl;
	return 0;
}

/*
Problem: Given a MxN matrix with some obstraction.
Need to find all possible path from (0,0) to (M-1, N-1).
Under constraint that rat can move only in right or down direction.

Input:
4 4
0 0 0 0 
0 0 X 0 
0 0 0 X 
0 X 0 0

Output:

1 1 0 0 
0 1 0 0 
0 1 1 0 
0 0 1 1 

1 0 0 0 
1 1 0 0 
0 1 1 0 
0 0 1 1 

1 0 0 0 
1 0 0 0 
1 1 1 0 
0 0 1 1 


*/
