/*Name:digits with conditions
  Date:2017-10-13
  By Ricky Chan*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
	int m,l,h,i,a[100],p;
	cin >> m;
	cin >> l >> h;
	for (i = 0; i < m; i++) {
		cin >> a[i];
	}
	for (i = 0, p = 0; i < m; i++) {
		if (a[i] >= l && a[i] <= h) {
			p++;
		}
	}
	cout << p << endl;
	return 0;
}