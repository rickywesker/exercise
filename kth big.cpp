#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, k,id[100];
	double score[100], sorted[100], search,temp;// id[100] and score[100] is a kind of 1-1 projection.
	cin >> n >> k;
	
	
	for (int i = 0; i < n; i++) {
		cin >> id[i] >> score[i];//input the data;
	}
	for (int i = 0; i < n; i++) {
		sorted[i] = score[i];//input the data into sorted array;
	}
	for (int i = 0; i < n - 1; i++) {//bubble sort
		for (int j = 0; j < n - 1 - i; j++) {
			if (sorted[j] < sorted[j + 1]) {
				temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
		}
	}
	search = sorted[k - 1];//searching
	
	for (int i = 0; i < n; i++)
	{
		if (search == score[i]) {
			cout << id[i] << " " <<score[i] << endl;
		}
	}
	return 0;
}
