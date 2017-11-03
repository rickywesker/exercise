#include<iostream>
using namespace std;
int main() {
	int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	bool leap = 0;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		leap = true;
	}

	if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		if (day == 30) {
			printf("%d-%02d-01", year, month + 1);
		}
		else {
			printf("%d-%02d-%02d", year, month,day+1);
		}
	}

	else if (month == 2) {
		if (leap) {
			if (day == 28) {
				printf("%d-%02d-%02d", year, month, day + 1);
			}
			else if (day == 29) {
				printf("%d-%02d-01", year, month + 1);
			}
		}
		else {
			if (day == 28) {
				printf("%d-%02d-01", year, month + 1);
			}
		}
	}
	else {
		if ((day == 31) && (month == 12)) {
			printf("%d-01-01", year+1);
		}
		else if (day == 31) {
			printf("%d-%02d-01", year, month + 1);
		}
		else {
			printf("%d-%02d-%02d", year, month, day + 1);
		}
	}

	return 0;
}