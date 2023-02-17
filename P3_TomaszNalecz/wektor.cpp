#include "wektor.h"

Punkt::Punkt() 
{
	// (gadajacy konstruktor) wartosci domyslne:
	cout<<endl<<"Zadzialal konstruktor domyslny, utworzono punkt"<<endl<<endl;
	mX = 0.0;
	mY = 0.0;
	mZ = 0.0;
}

Punkt::Punkt(float a, float b, float c)
{
	mX = a;
	mY = b;		
	mZ = c;
}

Punkt::~Punkt()
{
	// gadajacy destruktor
	cout<<endl<<"Zadzialal destruktor punktu"<<endl<<endl;
}

void Punkt::Przedstaw()
{
	cout<<"Punkt ma wspolrzedne: ("<<mX<<";"
								   <<mY<<";"
								   <<mZ<<")"<<endl;
}

Wektor::Wektor()
{
	// (gadajacy konstruktor) domyslne wartosci wektora:
	cout<<endl<<"Zadzialal konstruktor domyslny, utworzono wektor zerowy"<<endl<<endl;
	mA = 0.0;
	mB = 0.0;
	mC = 0.0;	
}

Wektor::Wektor(Punkt a, Punkt b) // obliczenie wspolrzednych wektora
{
	mA = b.mX - a.mX;
	mB = b.mY - a.mY;
	mC = b.mZ - a.mZ;
}

Wektor::~Wektor()
{
	// (gadajacy destruktor
	cout<<endl<<"Zadzialal destruktor wektora"<<endl<<endl;
}

void Wektor::Przedstaw()
{
	cout<<"Wektor ma wspolrzedne: ["<<mA<<";"
									<<mB<<";"
									<<mC<<"]"<<endl;
}

float Wektor::dlugosc() // obliczenie dlugosci wektora
{
	float d = sqrt(mA*mA + mB*mB + mC*mC);
		
	return d;
}

void sprawdzenie()
{
	if( !cin ) // jesli nie wpisano liczbe
	{
			cout<<"Nie wpisano liczbę!!!"<<endl
				<<"Sprobuj jeszcze raz"<<endl;
			
			cin.clear(); // czyszczenie flag bledu strumienia
			cin.sync();	 // czyszczenie buforu strumienia	
			
			exit (1);	// zakonczenie programu	
	}
}
