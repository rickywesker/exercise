//============================================================================
// Name        : Placing apples.cpp
// Author      : Ricky
// Version     : 1.0
// Description : M apples and N plates are given
//============================================================================

#include <iostream>
using namespace std;

int Placing(int x, int y) {
	if (y == 1 || x == 0) return 1;
	if (y > x) return Placing(x, x);
	return Placing(x, y - 1) + Placing(x - y, y);

}

int main(int argc, char const *argv[])
{
	int m, n,t,a[20];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m >> n;
		a[i] = Placing(m, n);
	}
	for (int i = 0; i < t; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}