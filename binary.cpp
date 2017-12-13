/*Binary*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
bool bcode[100];
int i = 32;
int sz = 0;

void Binary(long long num) {
	
	if (num == 0)return;

	if (num % 2 != 0) {
		bcode[i] = 1;
	}
	else {
		bcode[i] = 0;
	}
	sz++;
	i--;
	Binary(num / 2);
}
int main() {
	
	long long num;
	while (cin >> num) {
		memset(bcode, 0, sizeof(bcode));
		i = 32;
		sz = 0;
		if (num > 0) {
			Binary(num);
			for (int j = 1; j < 33; j++) {
				cout << bcode[j];
			}
			cout << endl;
		}
		else if (num == 0) {
			for (int j = 1; j < 33; j++) {
				cout << bcode[j];
			}
			cout << endl;
		}
		
		else {
			long long newnum = abs(num);
			int index_notZero;
			Binary(newnum);
			if (newnum == -2147483648) {//special case:0 and -2147483648
				for (int j = 1; j < 33; j++) {
					cout << bcode[j];
				}
				cout << endl;
				continue;
			}
			for (int i = 32; i > 0; i--) {
				if (bcode[i] != 0) index_notZero = i;
				break;
			}
			for (int i = index_notZero; i > 0; i--) {//make reverse
				if (bcode[i]) {
					bcode[i] = 0;
				}
				else {
					bcode[i] = 1;
				}
			}
			bcode[32] = 1;
			for (int j = 1; j < 33; j++) {
				cout << bcode[j];
			}
			cout << endl;
		}
	}
	return 0;
}