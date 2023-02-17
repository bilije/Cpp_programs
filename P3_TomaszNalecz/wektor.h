#ifndef _WEKTOR_H
#define _WKTOR_H

#include <iostream>		//biblioteki z ktorych korzystamy
#include <cmath>
#include <stdlib.h>

using namespace std;

class Punkt				// klasa dla punktu
{
	float mX, mY, mZ;	// prywatne wspolrzedne dla punktu
	
	public:
	
	Punkt();			// domyslny konstruktor
	
	Punkt(float a, float b, float c);	// konstruktor
	
	~Punkt();			// destruktor
	
	void Przedstaw();	// funkcja ktora wypisuje nam wspolrzedne punktu
	
	friend class Wektor;	// zaprzyjaznienie klasy Punkt z klasa Wektor
};

class Wektor
{
	float mA, mB, mC;	// prywatne wspolrzedne wektora
	
	public:
	
	Wektor();			// domyslny konstruktor
	
	Wektor(Punkt a, Punkt b);	// konstruktor (podajemy dwa punkty)

	~Wektor();			// destruktor
	
	void Przedstaw();	// funkcja wypisujaca wspolrzedne wektora
	
	float dlugosc();	// funkcja zwracajaca dlugosc wektora
		
};

void sprawdzenie();		// funkcja ktora sprawdza czy wpisalismy liczbe

#endif
