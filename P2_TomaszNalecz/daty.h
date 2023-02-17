#ifndef _DATY_H
#define _DATY_H

#include <iostream>
using namespace std;

class Date
{
	//public:
	int day; //dzien
	int month; //miesiac
	int year; // rok
	
	public:
	void readDate(int &d, int &m, int &y); //funkcja wpisywania daty
	void printDate();				 	   //funkcja wypisania daty
	
	// deklaracje zaprzyjaznienia funckji:
	friend int count(Date k, int g); 
	friend int count(Date k);
	friend int styczenj(Date k);
	friend int styczend(Date k);
	friend int rok(Date k1, Date k2, int a, int b, int c, int d);

};
	
	// deklaracje funkcji:
	int count(Date k, int g); // zmienna g tylko dla przeciazenia funkcji
	int count(Date k);
	int styczenj(Date k);
	int styczend(Date k);
	int rok(Date k1, Date k2, int a, int b, int c, int d);

#endif
