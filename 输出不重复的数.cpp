/*Name:?出不重复的?
Date:2019-10-25
By Ricky Chan*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, a[20000], i, j;
	bool p = 1;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << a[0];
	for (i = 1; i < n; i++,p = 1)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				p = false;
			}
		}
		if (p)
		{
			printf(" %d", a[i]);
		}
	}
	return 0;
}