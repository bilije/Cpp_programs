#ifndef _SKLEP_H
#define _SKLEP_H

#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <algorithm>

using namespace std;

class Produkt
{
	public:
	
	string dzial;
	string nazwa;
	float cena;
	
	Produkt(string = "", string = "", float = 0.0, float = 1.0);
	~Produkt(){}
	
	void Print();
	
};

int wczytaj(int a, int b);



#endif
