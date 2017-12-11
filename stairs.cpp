#include<iostream>
using namespace std;
int take[99];
int num = 0;
void goDown(int i, int s) {
	int j, k;
	for (j = 3; j > 0; j--) {
		if (i < j) continue;
		else {
			take[s] = j;
			if (i == j) {
				num++;
				cout << "第" << num << "种方案:";
				for (k = 1; k <= s; k++) {
					cout << take[k];
				}
				cout << endl;
			}
			else {
				goDown(i - j, s + 1);
			}
		}
		}
		
	}


int main() {
	int h;
	cin >> h;
	goDown(h, 1);
	cout << "共有" << num << "种方案";
}