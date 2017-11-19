//============================================================================
// Name        : Binary Tree.cpp
// Author      : Ricky
// Version     : 1.0
// Description : To find the commond node.
//============================================================================

#include <iostream>
using namespace std;

int BtreeCommonNode(int x, int y) {
	if (x == y)return x;
	if (x > y) return BtreeCommonNode(x / 2, y);
	if (x < y) return BtreeCommonNode(x, y / 2);

}
int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;
	cout << BtreeCommonNode(a, b);
	return 0;
}
