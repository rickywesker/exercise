#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int op1[201], op2[201],sum[201];
int len1, len2;
bool moreThanTen = 0;
int largestlen;
bool large = 0;
void bigIntergerSum(char str1[],char str2[],int len1,int len2) {
	int i, j;
	if (len1 > len2) {
		largestlen = len1;
	}
	else {
		largestlen = len2;
	}
	for (i = len1 - 1,j = 0; i >= 0,j < len1; i--,j++) {
		op1[j] = (int)str1[i] - 48;
	}
	for (i = len2 - 1, j = 0; i >= 0, j < len2; i--, j++) {
		op2[j] = (int)str2[i] - 48;
	}
	for (i = 0; i < largestlen; i++) {
		if (moreThanTen && i == largestlen - 1) {
			sum[largestlen] = 1;
			large = 1;
		}
		
		if (moreThanTen) {
			sum[i] = op1[i] + op2[i] + 1;//simulation
			if (sum[i] >= 10) {
				moreThanTen = 1;
				sum[i] = sum[i] % 10;
				continue;
			}
			else moreThanTen = 0;
		}
		else {
			sum[i] = op1[i] + op2[i];
			if (sum[i] >= 10) {
				moreThanTen = 1;
				sum[i] = sum[i] % 10;
				continue;
			}
		}
	}
}

int main() {
	char str1[201], str2[201];
	int t;
	bool isZero = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str1 >> str2;
		int len1 = strlen(str1);
		int len2 = strlen(str2);

		memset(op1, 0, sizeof(op1));
		memset(op2, 0, sizeof(op2));

		bigIntergerSum(str1, str2, len1, len2);
		bool op1 = 1;
		bool op2 = 1;
		if (large) {
			for (int i = largestlen; i >= 0; i--)
			{
				if (largestlen == 1) {
					cout << sum[i];
					continue;
				}
				
				if (sum[i] == 0 && op1) {
					isZero = 1;
					op1 = 0;//entering detecting mode.
					continue;
				}
				if (isZero) {
					if (sum[i] != 0) {
						isZero = 0;
						cout << sum[i];
						continue;
					}
					continue;
				}
				
				cout << sum[i];
				op1 = 0;
			}
			cout << endl;
		}
		else {
			for (int i = largestlen - 1; i >= 0; i--) {
				if (largestlen == 1) {
					cout << sum[i];
					continue;
				}
				if (sum[i] == 0 && op2) {
					isZero = 1;
					op2 = 0;//entering detecting mode.
					continue;
				}
				if (isZero) {
					if (sum[i] != 0) {
						isZero = 0;
						cout << sum[i];
						continue;
					}
					continue;
				}
				

				cout << sum[i];
				op2 = 0;
			}
			cout << endl;
		}
	}
	return 0;
}
