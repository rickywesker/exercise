//============================================================================
// Name        : Polish Notation.cpp
// Author      : Ricky
// Version     : 1.0
// Description : * + 11.0 12.0 + 24.0 35.0
//============================================================================
#include <iostream>
#include<stdlib.h>
using namespace std;

double Notation() {
	char str[10];
	cin >> str;
	switch (str[0]) {
	case '+': return Notation() + Notation();
	case '-': return Notation() - Notation();
	case '*': return Notation() * Notation();
	case '/': return Notation() / Notation();
	default: return atof(str);
	}
}
int main()
{
	double value;
	value=Notation();
	printf("%f\n", value);
	
	return 0;
}