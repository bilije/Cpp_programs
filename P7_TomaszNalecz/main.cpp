#include "macierze.h"

int main ()
{
	float tab1[N1][M1] = { {1, 2, 3}, {2, 1, 3} , { 5, 6, 7}};
	float tab2 [N2][M2] = { {9, 8, 7}, {-2, -1, -3} , { 5, 6, 7}};
	
	
	Macierz m1(tab1);
	
	Macierz m2(tab2);
	
	//Macierz m3;
	
	

	cout<<m1<<endl;
	cout<<m2;
	
	return 0;
}
