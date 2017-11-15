//============================================================================
// Name        : apple problem.cpp
// Author      : Ricky
// Version     : 1.0
// Description : apple problem
//============================================================================
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[1000], n, k, i;
	cin >> n >> k;
	a[n] = n + k;
	while (true) {//brutal force method;
		for (i = n-1; i >0; i--)
		{	
			if (a[n] < (n + k))break;//Ensure that the last monkey gets at least an apple.
			a[i] = a[i + 1] * n / (n - 1) + k;
			if (a[i] % n != k)break;
			
		}
		if (i == 0)break;
		else a[n] += n;
	}
	cout << a[1];
	return 0;
}