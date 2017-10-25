#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, t, a[1000], i, j,k;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	for (i = 0; i < n - 1; i++) { //using bubble sort
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < k; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}