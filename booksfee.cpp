/*Name:Books fee
Date:2017-10-25
By Ricky Chan*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,a[10],temp;
	double price[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double sum[100] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> a[j];
			sum[i] += a[j]*price[j];
		}

	}
	for (int i = 0; i < n; ++i)
	{
		printf("%.2f\n",sum[i]);
	}
	return 0;
}