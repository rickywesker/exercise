#include<iostream>
#include<iomanip>
using namespace std;
struct interval {
	int left;
	int right;
};


int main() {
	interval bigInterval;
	bigInterval.left = 0;
	bigInterval.right = 0;
	interval manyIntervals[50000];
	int t,min = 10000,max = 0,tmpL,tmpR;
	bool isGood = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> manyIntervals[i].left >> manyIntervals[i].right;
		if (manyIntervals[i].left < min)
			min = manyIntervals[i].left;
		if (manyIntervals[i].right > max)
			max = manyIntervals[i].right;
	}
	for (int i = 0; i < t - 1; i++) {
		for (int j = 0; j < t - i - 1; j++) {
			if (manyIntervals[j].left > manyIntervals[j + 1].left) {//sorting
				int tmp;
				tmp = manyIntervals[j].left;
				manyIntervals[j].left = manyIntervals[j + 1].left;
				manyIntervals[j + 1].left = tmp;
				tmp = manyIntervals[j].right;
				manyIntervals[j].right = manyIntervals[j + 1].right;
				manyIntervals[j + 1].right = tmp;
			}
		}
	}

	tmpR = manyIntervals[0].right;
	for (int i = 0; i < t; i++) {
		if (i != t - 1) {
			if (manyIntervals[i].right < manyIntervals[i + 1].left && manyIntervals[i + 1].left > tmpR)
			{
				isGood = 0;
				break;
			}
			if (manyIntervals[i + 1].right < tmpR)
				continue;
			tmpR = manyIntervals[i + 1].right;
		}
	}
	if (isGood)
		cout <<min << " " << max<<endl;
	else {
		cout << "no";

	 }
	return 0;
}