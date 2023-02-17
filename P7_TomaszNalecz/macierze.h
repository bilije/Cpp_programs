#ifndef _MACIERZE_H
#define _MACIERZE_H

#include <iostream>
#include <cstdlib>

using namespace std;

#define N1 3
#define M1 3
#define N2 3
#define M2 3

class Macierz
{
	float **mac;
	
	public:
	
	Macierz();
	Macierz(float m[N1][M1]);
	Macierz(const Macierz &);
	~Macierz();
	Macierz & operator=(const Macierz&);
	
	float& operator()(int i, int j);
	friend Macierz& operator+(Macierz, Macierz);
	friend Macierz& operator-(Macierz, Macierz);
	friend Macierz& operator*(Macierz, Macierz);
	friend ostream & operator<<(ostream&, Macierz&);
};

	Macierz& operator+(Macierz, Macierz);
	Macierz& operator-(Macierz, Macierz);
	Macierz& operator*(Macierz, Macierz);
	ostream & operator<<(ostream&, Macierz&);
	
#endif
