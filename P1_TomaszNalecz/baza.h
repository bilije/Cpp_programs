#ifndef _BAZA_H
#define _BAZA_H

#include <iostream>
using namespace std;

class Czlowiek //Zadeklarowanie i definicja klasy Czlowiek
{
	public:
	
	//elementy klasy Czlowiek:
	string Imie;
	string Nazwisko;
	int Rok;
	int Grupa;
	
	void Dodaj(); // Zadeklarowanie funkcji Dodaj dla klasy Czlowiek
	void Wypisz(); //Zadeklarowanie funkcji Wypisz dla klasy Czlowiek
};

#endif
