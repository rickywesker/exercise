/*THIS LOGIC PROBLEM IS FUCKING TWISTING*/

#include<iostream>
using namespace std;
int main() {
	int A, B, C, D, E;
	for (A = 1; A <=5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			if (B == A){ 
				continue; 
			}
			for (C = 1; C <= 5; C++)
			{
				if ((C == B) || (C == A)) { 
					continue;
				}
				for (D = 1; D <= 5; D++)
				{
					if ((D == C) || (D == B) || (D == A)) {
						continue; 
					}
					E = 15 - A - B - C - D;
					if ((E == 2) || (E == 3) || (E == D) || (E == C) || (E == B) || (E == A)) {
						continue; 
					}
					bool a = (E == 1);
					bool b = (B == 2);
					bool c = (A == 5);
					bool d = (C != 1);
					bool e = (D == 1);
					
					if (((a + b + c + d + e) == 2)&&((E != 2) && (E != 3))&&((a&&(A==1||A==2))+(b&&(B==1||B==2))+(c&&(C==1||C==2))+(d&&(D==1||D==2))+(e&&(E==1||E==2))==2)) {
						cout << A << " " << B << " " << C << " " << D << " " << E << endl;
					}
				}
			}
		}
	}
	return 0;
}