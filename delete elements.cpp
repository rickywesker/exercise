#include<iostream>
using namespace std;
int main() {
	int n, a[100000],del,count;
	count = 0;


	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> del;



	for (int i = 0; i < n; i++)
	{
		if (a[i] == del) {//count how many "del" are there
			count++;
		}
	}
	for (int k = 0; k <= count; k++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] == del) {
				for (int j = i; j < n - 1; j++)
				{
					a[j] = a[j + 1];
				}
			}
		}
		n--;
	}
	cout << a[0];
	for (int i = 1; i <= n; i++)//n has been deducted.
	{
		cout <<' ' <<a[i];
	}
	return 0;
}