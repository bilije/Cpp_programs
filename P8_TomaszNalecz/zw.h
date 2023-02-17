#ifndef _ZW_H
#define _ZW_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum wody {nieokreslone, slodkowodne, slonowodne};

class zwierze
{
	protected:
	
	string imie;
	unsigned int wiek;
	
	public:
	zwierze(string = "", unsigned int = 0);
	~zwierze(){};
	void przedstaw();
		
};


class ryba: public zwierze
{
	protected:
	enum wody woda;
	
	public:
	ryba(string = "", unsigned int = 0, enum wody = nieokreslone);
	~ryba(){};
	void przedstaw();
	
};

class plaz: public zwierze
{
	protected:
	unsigned int dlugosc;
	
	public:
	plaz(string = "", unsigned int = 0, unsigned int = 0);
	~plaz(){};
	void przedstaw();
	
};

class ssak: public zwierze
{
	protected:
	unsigned int ciaza;
	
	public:
	ssak(string = "", unsigned int = 0, unsigned int = 0);
	~ssak(){};
	void przedstaw();
	
};

class ptak: public zwierze
{
	protected:
	string kolor;
	
	public:
	ptak(string = "", unsigned int = 0, string = "");
	~ptak(){};
	void przedstaw();
};

class gad: public zwierze
{
	protected:
	unsigned int dlgz;
	
	public:
	gad(string = "", unsigned int = 0, unsigned int = 0);
	~gad(){};
	void przedstaw();
};



#endif
