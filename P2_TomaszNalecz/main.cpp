#include "daty.h"



int main ()
{
	Date jeden, dwa; // wprowadzenie obiektow klasy Date
	
	int d, m, y; // zmienne potrzebne do wpisania dat
	
	while (1)	// petla gdyby daty byly zle wpisane
	{
		
		cout<<"Podaj rok:";
		cin>>y;
		
		if( y < 1 )
		{
			cout<<"Podano zly rok!"<<endl; // tylko dla "naszej ery"
			continue;
		}
		
		cout<<"Podaj miesiac:";
		cin>>m;
		
		if(m < 1 || m > 12)
		{
			cout<<"Podano zly miesiac!"<<endl; // miesiace od 1 do 12
			continue;
		}
		
		cout<<"Podaj dzień:";
		cin>>d;
		
		// sprawdzanie czy zostal wprowadzony poprawny dzien:
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if( d < 1 || d > 31)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 2 && y%4 == 0)
		{
			if(d < 1 || d > 29)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 2 && y%4 != 0)
		{
			if(d < 1 || d > 28)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 4 || m == 6 || m == 9 || m == 11)
		{
			if(d < 1 || d > 30)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		jeden.readDate(d, m, y); // wpisanie daty do klasy
		jeden.printDate();		 // wypisanie wpisanej daty
		
		break;
	}

	while (1)	// tak samo jak dla pierwszej daty
	{
		
		cout<<"Podaj rok:";
		cin>>y;
		
		if( y < 1 )
		{
			cout<<"Podano zly rok!"<<endl;
			continue;
		}
		
		cout<<"Podaj miesiac:";
		cin>>m;
		
		if(m < 1 || m > 12)
		{
			cout<<"Podano zly miesiac!"<<endl;
			continue;
		}
		
		cout<<"Podaj dzień:";
		cin>>d;
		
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if( d < 1 || d > 31)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 2 && y%4 == 0)
		{
			if(d < 1 || d > 29)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 2 && y%4 != 0)
		{
			if(d < 1 || d > 28)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		if(m == 4 || m == 6 || m == 9 || m == 11)
		{
			if(d < 1 || d > 30)
			{
				cout<<"Podano zly dzien!"<<endl;
				continue;
			}
		}
		
		dwa.readDate(d, m, y);
		dwa.printDate();
		
		break;
	}
	
	// po kolei wywolujemy funkcje, aby obliczyc liczbe dni pomiedzy datami:
	int e = count(jeden);
	
	int f = count(dwa, 1); // dla przeciazenia funkcji zamiast "1" w obliczeniach
						   // uzylem g = 1
	
	int g = styczenj(jeden);
	
	int h = styczend(dwa);
	
	int dni = rok(jeden, dwa, e, f ,g, h);
	
	
	cout<<endl<<"Liczba dni pomiędzy danymi datami:"<<dni<<endl;
	
	
	return 0;
}
