#include<iostream>
#include <stdio.h>
using namespace std;
int dir1[8] = { 1,1,2,2,-1,-1,-2,-2 };
int dir2[8] = { 2,-2,1,-1,2,-2,1,-1 };
int board[30][30];
long long int ans[30][30];

int main() {
	int n, m, cx, cy;
	cin >> n >> m >> cx >> cy;
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			board[i][j] = 0;
		}
	}
	board[cx][cy] = 1;
	for (int i = 0; i < 8; ++i) {
		int tx = cx + dir1[i];
		int ty = cy + dir2[i];
		if (tx >= 0 && tx <= n && ty >= 0 && ty <= n) {
			board[tx][ty] = 1;
		}
	}
	ans[0][0] = 1;
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= m; ++j) {
			if (i) {
				if (board[i][j]) ans[i][j] = 0;
				else ans[i][j] += ans[i - 1][j];
			}
			if (j) {
				if (board[i][j]) ans[i][j] = 0;
				else ans[i][j] += ans[i][j - 1];
			}
		}
	}
	cout << ans[n][m];
}