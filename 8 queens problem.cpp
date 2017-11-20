//============================================================================
// Name        : Eight Queens Problem.cpp
// Author      : Ricky
// Version     : 1.0
// Description : To find the solution.
//============================================================================

#include <iostream>
using namespace std;
char board[9][9];
bool row[9] = {}, lefttop[16] = {}, righttop[16] = {};
int solutionNumber = 0;
void Queen(int column) {
	if (column == 9) {//If the condition is satisfied,print.
		cout << ++solutionNumber << endl;
		for (int i = 1; i < 9; i++)
		{
			for (int j = 1; j < 9; j++)
			{
				if (j == 8)cout << board[i][j] << endl;
				else cout << board[i][j] << ' ';
			}

		}
	}
	else {
		for (int i = 1; i < 9; i++)
		{
			if (row[i] || lefttop[8 + i - column] || righttop[i + column - 1])continue;//deadzone
			board[i][column] = '*';
			row[i] = true;
			lefttop[8 + i - column] = true;
			righttop[i + column - 1] = true;
			Queen(column + 1);
			board[i][column] = '.';
			row[i] = false; ;
			lefttop[8 + i - column] = false;
			righttop[i + column - 1] = false;

		}
	}
}

int main(void)
{
	memset(board, '.', sizeof(board));
	Queen(1);
	return 0;
}




