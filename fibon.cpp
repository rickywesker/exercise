//============================================================================
// Name        : fibonacci.cpp
// Author      : Ricky
// Version     : 1.0
// Description : Fibonacci sequence with recursive method
//============================================================================
#include <iostream>
using namespace std;

int fib(int n) {//定?斐波那契?列函?
	if (n == 2 ||n == 1 ) {
		return 1;
	}
	else {
		return fib(n - 2) + fib(n - 1);//????
	}
}



int main(int argc, char const *argv[])
{
	int n,f[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> f[i];//?入??
	}
	for (int i = 0; i < n; i++)
	{
		cout << fib(f[i]) << endl;//?出??
	}
	return 0;
}