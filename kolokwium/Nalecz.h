// Tomasz Nalecz 305 045 wtorek-8

#ifndef _NALECZ_H
#define _NALECZ_H

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <iomanip>

using namespace std;
class uczestnik
{
	string imie;
	string nazwisko;
	int wiek;
	
	public:
	uczestnik(string im = "", string nazw = "", int wi = 0): imie(im), nazwisko(nazw), wiek(wi) {}
	~uczestnik(){}
	
	friend class wycieczka;
};


class wycieczka
{
	int dataroz;
	int datazak;
	string miasto;
	string kraj;
	float opldo;
	float opldz;
	int iloscU;
	list <uczestnik> listaU;
	
	public:
	wycieczka(int = 0 , int = 0, string = "", string = "", float = 0.0, float = 0.0);
	~wycieczka() {}
	
	wycieczka(const wycieczka&);
	
	friend wycieczka operator+(wycieczka, uczestnik);
	//friend wycieczka opreator-(wycieczka, uczestnik);
	friend ostream & operator<<(ostream&, wycieczka&);
	
	friend class uczestnik;
};

	wycieczka operator+(wycieczka, uczestnik);
	//wycieczka opreator-(wycieczka, uczestnik);
	ostream & operator<<(ostream&, wycieczka&);

#endif
