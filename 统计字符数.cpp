

#include<iostream>
using namespace std;


int main() {
	int n,max,sum[26];

	char str[1001];
	cin >> n;
	while (n) {
		for (int i = 0; i < 26; i++)
		{
			sum[i] = 0;
		}
		cin >> str;
		max = 0;
		for (int i = 0;str[i] != '\0'; i++)
		{
			sum[str[i] - 'a']++;//project the alphabet to the sum array.
		}
		
		for (int i = 0; i < 26; i++)
		{
			if (sum[i] > max) {
				max = i;
			}
		}
		printf("%c %d\n", 'a' + max, sum[max]);
		n--;
	}
	
}