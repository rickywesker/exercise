#include<iostream>
#include<cstring>
using namespace std;
int len1, len2;
char str1[30], str2[30];
bool ismatch(int i, int j) {
	if (i == len1 && j == len2) {
		return true;
	}
	else if (i == len1 && j < len2) {
		return false;
	}
	else if (i < len1 && j == len2) {
		if (str1[i] == '*') {
			return ismatch(i + 1, j);
		}
		else {
			return false;
		}
	}
	if (str1[i] == str2[j]) {
		return ismatch(i + 1, j + 1);
	}
	else if (str1[i] == '?') {
		return ismatch(i + 1, j + 1);
	}
	else if (str1[i] == '*') {
		return ismatch(i, j+1) || ismatch(i+1, j);
		
	}
	else {
		return false;
	}

}

int main() {
	cin >> str1 >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if (!ismatch(0, 0)) {
		cout << "not ";
	}
		cout << "matched"<<endl;
}