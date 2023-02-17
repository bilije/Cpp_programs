#include "zw.h"

zwierze::zwierze(string z, unsigned int w)
{
	imie = z;
	wiek = w;
}

void zwierze::przedstaw()
{
	cout<<"Imie: "<<imie<<endl
		<<"Wiek: "<<wiek<<endl;
}

////////////////////////////////////

ryba::ryba(string z, unsigned int w, enum wody wod)
{
	imie = z;
	wiek = w;
	woda = wod;
} 

void ryba::przedstaw()
{
	cout<<"Wody: ";
	
	if(woda == 0)
	cout<<"nieokreslone"<<endl;
	
	if(woda == 1)
	cout<<"slodkowodne"<<endl;
	
	if(woda == 2)
	cout<<"slonowodne"<<endl;
	
	else
	exit(1);
	
}

////////////////////////////////////

plaz::plaz(string z, unsigned int w,  unsigned int dlg)
{
	imie = z;
	wiek = w;
	dlugosc = dlg;
}

void plaz::przedstaw()
{
	cout<<"Dlugosc: "<<dlugosc<<endl;
}

/////////////////////////////////////


ssak::ssak(string z, unsigned int w, unsigned int c)
{
	imie = z;
	wiek = w;
	ciaza = c;
}

void ssak::przedstaw()
{
	cout<<"Dlugosc ciazy: "<<ciaza<<endl;
}

//////////////////////////////////////


ptak::ptak(string z, unsigned int w, string k)
{
	imie = z;
	wiek = w;
	kolor = k;
}

void ptak::przedstaw()
{
	cout<<"Kolor: "<<kolor<<endl;
}

//////////////////////////////////////////////

gad::gad(string z, unsigned int w, unsigned int dz)
{
	if( w > dz )
	{ 
		cout<<"Wiek gada sie nie zgadza!"<<endl;
		exit(1);
	}
	
	imie = z;
	wiek = w;
	dlgz = dz;
	
}

void gad::przedstaw()
{
	cout<<"Dlugosc zycia: "<<dlgz<<endl;
}
