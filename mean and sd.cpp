/*Name:BUGS and APPLES
  Date:2017-10-13
  By Ricky Chan*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
	double s[1000],sd,mean,n,sum,sum2;
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (i = 0,sum = 0; i < n; i++) {
		sum += s[i];
	}
	mean = sum / n;
	for (i = 0, sum2 = 0; i < n; i++) {
		sum2 += pow((s[i] - mean), 2);
	}
	sd = sqrt(sum2 / n);
	cout << fixed <<setprecision(4)<<mean << " " << sd;
	return 0;
}