#include<iostream>
using namespace std;
int sum = 0;
int Matrix(int a[100][100], int size) {
	if (size == 1) {//edge
		cout << sum << endl;
		sum = 0;
		return 0;
	}

	for (int i = 0; i < size; i++) {//set at least a zero each row.
		int min = 10000;
		for (int j = 0; j < size; j++) {
			if (a[i][j]<min) min = a[i][j];
		}
		for (int j = 0; j < size; j++) {
			a[i][j] -= min;// each element minus the min.
		}
	}

	for (int j = 0; j < size; j++) {//set at least a zero each column.
		int min = 10000;
		for (int i = 0; i < size; i++) {
			if (a[i][j]<min) min = a[i][j];
		}
		for (int i = 0; i < size; i++) {
			a[i][j] -= min;// each element minus the min.
		}
	}
	sum += a[1][1];
	for (int j = 0; j < size; j++) { //delete row
		for (int i = 2; i < size; i++) {
			a[i - 1][j] = a[i][j];
		}
	}
	for (int i = 0; i < size; i++) { //delete column
		for (int j = 2; j < size; j++) {
			a[i][j - 1] = a[i][j];
		}
	}
	size -= 1;
	return Matrix(a, size);

}

int main() {
	int t, a[100][100];
	cin >> t;
	for (int k = 0; k < t; k++) {
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < t; j++) {
				cin >> a[i][j];
			}
		}
		Matrix(a, t);
	}
	return 0;
}