#include <iostream>
#include <iomanip>
	using namespace std;
	void swap(int &a, int &b) {
		int t;
		t = a;
		a = b;
		b = t;
	}
	int main() {
		int n, a[200], temp;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (a[j] > a[j + 1]) {
					swap(a[j], a[j + 1]);
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			if ((a[i] % 2 != 0) && (i != 0)) {
				printf(",%d", a[i]);
				}
			else if((a[i] % 2 != 0)) {
				printf("%d", a[i]);
			}
			}

		return 0;
		}

		
	