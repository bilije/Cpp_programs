#include "daty.h"

void Date::readDate(int &d, int &m, int &y) // funkcja wpisania daty
{
	day = d;
	month = m;
	year = y;
}

void Date::printDate()		// funkcja wypisania daty
{
	cout<<"Wpisana Data:"<<day<<"."
					<<month<<"."
					<<year<<"r"<<endl;
}

// funkcja liczaca liczbe dni ktore minely danego miesiaca:
// (przesuwamy date dla "dwa")
int count(Date k, int g) 
{
	int a = k.day - g;
	
	return a;
}

// funkcja liczaca ilosc dni do pierwszego dnia nastepnego miesiaca:
// (przesuwamy date dla "jeden")
int count(Date k) 
{
	int a;
	
	if(k.month == 1 || k.month == 3 || k.month == 5 || k.month == 7 || 
		k.month == 8 || k.month == 10 || k.month == 12)
	a = 32 - k.day;
	
	if(k.month == 2 && k.year%4 == 0)
	a = 30 - k.day;
	
	if(k.month == 2 && k.year%4 != 0)
	a = 29 - k.day;
	
	if(k.month == 4 || k.month == 6 || k.month == 9 || k.month == 11)
	a = 31 - k.day;
	
	return a;
}

// funkcja liczaca liczbe dni do 1 stycznia przyszlego roku
// od "przesunietej daty":
int styczenj(Date k) 
{
	int a = 0;
	
	// k.month+1 bo "sprowadzilismy" date do 1 dnia nastepnego miesiaca
	if((k.month+1) < 13) 
	a += 31;
	
	if((k.month+1) < 12)
	a += 30;
	
	if((k.month+1) < 11)
	a += 31;
	
	if((k.month+1) < 10)
	a += 30;
	
	if((k.month+1) < 9)
	a += 31;
	
	if((k.month+1) < 8)
	a += 31;
	
	if((k.month+1) < 7)
	a += 30;
	
	if((k.month+1) < 6)
	a += 31;
	
	if((k.month+1) < 5)
	a += 30;
	
	if((k.month+1) < 4)
	a += 31;
	
	if((k.month+1) < 3 && k.year%4 == 0)
	a += 29;
	
	if((k.month+1) < 3 && k.year%4 != 0)
	a += 28;
	
	if((k.month+1) < 2)
	a += 31;
	
	return a;
}

// funkcja liczaca liczbe dni od 1 stycznia danego roku
// do "przesunietej" daty:
int styczend(Date k) 
{
	int a = 0;
	
	if(k.month > 11)
	a += 30;
	
	if(k.month > 10)
	a += 31;
	
	if(k.month > 9)
	a += 30;
	
	if(k.month > 8)
	a += 31;
	
	if(k.month > 7)
	a += 31;
	
	if(k.month > 6)
	a += 30;
	
	if(k.month > 5)
	a += 31;
	
	if(k.month > 4)
	a += 30;
	
	if(k.month > 3)
	a += 31;
	
	if(k.month > 2 && k.year%4 == 0)
	a += 29;
	
	if(k.month > 2 && k.year%4 != 0)
	a += 28;
	
	if(k.month > 1)
	a += 31;
	
	return a;	
}

// funkcja liczaca liczbe dni od 1 stycznia jednego roku
// do 1 stycznia drugiego roku
int rok(Date k1, Date k2, int a, int b, int c, int d)
{
	int n = (k2.year-k1.year-1)/4; // k2.year-(k1.year+1) poniewaz 
								   // przesunelismy date do 1.01 nastepnego roku
	
	if( (k1.year+1)%4 == 0)  // doliczamy rok przestepny (*)
	n++;
	
	// obliczamy calkowita liczbe dni pomiedzy WPISANYMI datami:
	// (a, b, c, d to liczba dni ktora musimy doliczyc po wczesniejszych
	// przesunieciach dat) 
	int dni = (n*366+(k2.year-k1.year-1-n)*365)+a+b+c+d;
	
	// jesli rok jest taki sam, to przy roku przestepnym oraz jeden rok przed
	// rokiem przestepnym, musimy odjac jeden dzien
	if(k1.year == k2.year)
	{
		if(k1.year%4 == 0 || k1.year%4 == 3)
		dni -= 1;
		
		if(k1.month > k2.month)
		return -dni;
		
		if(k1.month == k2.month && k1.day > k2.day)
		return -dni;
		
		// jesli pierwsza data jest pozniejsza niz druga to wystarczy zmienic
		// znak na przeciwny (**)
	}
	
	if(k1.year > k2.year)
	{
		if(k2.year%4 == 0) // podobna sytuacja jak w (*) 
		dni -= 1;
		
		return -dni; // tak samo jak (**)
	}
	
	if(k1.year <= k2.year)
	return dni;
}

