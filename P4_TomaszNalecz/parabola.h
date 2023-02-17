#ifndef _PARABOLA_H
#define _PARABOLA_H

#include <iostream>
#include <cstdlib>

using namespace std;


class point
{
	float x, y;
	
	static int counter;    // licznik
	
	public:
	
	//static int counter;
	
	point(float xx = 0.0 , float yy = 0.0 );  //konstruktor domyslnoy + glowny
	
	~point();
	
	void Przedstaw();   // wypisuje punkt
	
	void Licznik();	 	// pokazuje ile jest obiektow klasy
	
	friend class parabola;	// zaprzyjaznienie z klasa parabola
};

class parabola
{
	float A, B, C;
	
	static int counter;   // licznik
	
	public:
	
	//static int counter;
	
	parabola(point a, point b, point c);  // konstruktor
	
	~parabola();
	
	void Przedstaw();				// wypisanie paraboli
	
	void Sprawdz(point a, point b, point c);	// sprawdzenie czy mozliwe jest utworzenie paraboli
	
	void Licznik();					// pokazuje ile jest obiektow klasy parabola
	
	
	// zaprzyjaznione funkcje
	friend void styczna(parabola a, float &Aprim, float &Bprim, float odcieta, float rzedna); 
	
	friend float rzedna(parabola a, float odcieta);
};

void styczna(parabola a, float &Aprim, float &Bprim, float odcieta, float rzedna); // wspolczynnki prostej stycznej

float rzedna(parabola a, float odcieta);			// liczy y dla podanego x, punkt ten lezy na paraboli

void wypiszstyczna(float Aprim, float Bprim, float odcieta, float rzedna);		// wypisuje styczna

#endif
