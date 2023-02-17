#include "wektor.h"

int main()
{
		
	cout<<"Wprowadzanie wspolrzednych pierwszego punktu:"<<endl;

	// wpisywanie wspolrzednych punktu:	
	float a;
	cout<<"Podaj pierwsza wspolrzedna:"; 
	cin>>a;
	sprawdzenie();  // sprawdzamy czy wpisalismy liczbe
		
		
	float b;
	cout<<"Podaj druga wspolrzedna:";
	cin>>b;
	sprawdzenie();
		
	float c;
	cout<<"Podaj trzecia wspolrzedna:";
	cin>>c;
	sprawdzenie();
	
	Punkt p1(a,b,c);  // utworzenie obiektu klasy Punkt 
		
	p1.Przedstaw();
		
	Punkt p2;		  // utworzenie domyslnego obiektu klasy Punkt
	p2.Przedstaw();
			
	Wektor w1(p2, p1);  // utworzenie wektora 
		
	cout<<"Utworzono wektor zaczepiony o poczatek ukladu wspolrzednych i o koncu wpisanego punktu"
	<<endl;
		
	w1.Przedstaw();
		
	float d = w1.dlugosc();  // obliczanie dlugosci wektora
		
	cout<<"Wektor ma dlugosc:"<<d<<endl;
		

	return 0;
}
