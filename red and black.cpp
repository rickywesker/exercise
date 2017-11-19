//============================================================================
// Name        : Black and Red.cpp
// Author      : Ricky
// Version     : 1.0
// Description : To find the exit
//============================================================================

#include <iostream>
using namespace std;
char maze[20][20];
int col, rol;
void color(int x, int y) {//input starting point
	if (x<0 || x > rol - 1 || y < 0 || y > col - 1 || maze[x][y] == '#' || maze[x][y] == 'c')return;//define the edge
	maze[x][y] = 'c';
	color(x + 1, y);
	color(x - 1, y);
	color(x, y + 1);
	color(x, y - 1);
	return;
}
int main(int argc, char const *argv[])
{
	int ans[1000], sx, sy, t, count;//save the ans
	
	while (true) {
		sx = 0; // initialize the starting point.
		sy = 0;
		t = 0;//
		count = 0;
		cin >> col >> rol;//input the maze size.
		if (col == 0 && rol == 0)break;// End condition.
		for (int i = 0; i < rol; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> maze[i][j];
				if (maze[i][j] == '@') {//save the starting point.
					sx = i;
					sy = j;
				}
			}
		}
		color(sx, sy);//coloring the reachable path.

		for (int i = 0; i < rol; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (maze[i][j] == 'c') {
					count++;
					ans[t]++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}



