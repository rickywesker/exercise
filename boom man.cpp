#include<iostream>
using namespace std;
int main() {
	int m, n;
	int matrix[100][100];
	bool marked[100][100] = {};
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] == 0) {
				for (int k = 0; k < n; k++)
				{
					marked[i][k] = 1;
				}
				for (int k = 0; k < m; k++)
				{
					marked[k][j] = 1;//set the bomb.
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (marked[i][j] == 1) {
				matrix[i][j] = 0;//BOOM!
			}
		}
	}
	

	for (int i = 0; i < m; i++)//print the matrix
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1) {
				printf("%d\n", matrix[i][j]);
			}
			else {
				printf("%d ", matrix[i][j]);
			}
		}
	}

	
	return 0;
}