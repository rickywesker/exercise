/*Name:sum of digits without the maximal
  Date:2017-10-13
  By Ricky Chan*/
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
	int n, i,a[100],max,sum,mark;
	max = -10000;
	sum = 0;
	mark = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0) {
			continue;
		}
		if (i == 1 && a[0] > a[1]) {
			max = a[0];
		}
		if (a[i] > a[i - 1] && a[i]>max) {
			max = a[i];
		}
		if (a[i] == a[i - 1]) {
			mark++;//all same case
		}
	}
	for (i = 0; i < n; i++) {
		
		if (a[i] != max) {
			sum += a[i];
		}
	}
	if (mark == n - 1) {
		cout << 0 << endl;
	}
	else { 
		cout << sum << endl; 
	}
	return 0;
}