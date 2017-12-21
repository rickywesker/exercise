#include<iostream>
#include<cstdio>
using namespace std;
int year, month, day;

bool isLeap(int year) {
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
		return true;
	}
	return false;
}
int yearDays(int year) {
	if (isLeap(year))
		return 366;
	else
		return 365;
}
int monthDays(int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else {
		return 28;
	}
}
int dayInYear(int year, int month, int day) {
	int sum = 0;
	if (month == 1) {
		return day;
	}
	for (int i = 1; i < month; i++) {
		sum += monthDays(i);
	}
	sum += day;
	if (month == 2)
		return sum;
	if (isLeap(year))
		sum += 1;
	return sum;

}

int getDay() {
	scanf("%d-%d-%d", &year, &month, &day);
	int diff = 0;
	for (int i = 1900; i < year; i++) {
		diff += yearDays(i);
	}
	diff += dayInYear(year, month, day);
	int ans = 0;
	ans = diff % 7;
	return ans;
}
int main() {
	int t,givenDay,limitedNo;
	cin >> t;
	for (int i = 0; i < t; i++) {
		char number[7];
		givenDay = getDay();
		cin >> number;
		if (number[5] == '1' || number[5] == '6') {
			limitedNo = 1;
		}
		if (number[5] == '2' || number[5] == '7') {
			limitedNo = 2;
		}
		if (number[5] == '3' || number[5] == '8') {
			limitedNo = 3;
		}
		if (number[5] == '4' || number[5] == '9') {
			limitedNo = 4;
		}
		if (number[5] == '5' || number[5] == '0' || (number[5] >= 'A' &&number[5] <= 'Z')) {
			limitedNo = 5;
		}
		if (givenDay == limitedNo)
			cout << "yes"<<endl;
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}