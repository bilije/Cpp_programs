#include "parabola.h"

int point::counter = 0;

point::point(float xx , float yy )
{
	x = xx;
	y = yy;
	
	counter++;
}

point::~point()
{
	counter--;
}

void point::Przedstaw()
{
	cout<<"Punkt #"<<counter<<" ma wspolrzedne: ("
		<<x<<";"<<y<<")"<<endl;
}

void point::Licznik()
{
	cout<<"Liczba obiektow klasy point: "<<counter<<endl;
}


////////////////////////////////////////////////


int parabola::counter=0;

parabola::parabola(point a, point b, point c)   // oblicza wspolczynniki metoda Cramera
{
	float W = a.x*a.x*b.x + a.x*c.x*c.x + b.x*b.x*c.x - a.x*b.x*b.x - a.x*a.x*c.x - c.x*c.x*b.x;
	
	A = (a.y*b.x + a.x*c.y + c.x*b.y - a.x*b.y - a.y*c.x - b.x*c.y)/W;
	B = (a.x*a.x*b.y + c.x*c.x*a.y + b.x*b.x*c.y - b.x*b.x*a.y - a.x*a.x*c.y - c.x*c.x*b.y)/W;
	C = (a.x*a.x*b.x*c.y + a.x*b.y*c.x*c.x + a.y*b.x*b.x*c.x - a.x*b.x*b.x*c.y - a.x*a.x*b.y*c.x - a.y*b.x*c.x*c.x)/W;

	counter++;
}

parabola::~parabola()
{
	counter--;
}

void parabola::Przedstaw()
{
	
	if( B > 0 && C > 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2+"
			<<B<<"x+"
			<<C<<endl;
	}

	if( B > 0 && C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2+"
			<<B<<"x"
			<<C<<endl;
	}
	
	if( B > 0 && C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2+"
			<<B<<"x"<<endl;
	}

	if( B < 0 && C > 0)
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2"
			<<B<<"x+"
			<<C<<endl;
	}
	
	if( B < 0 && C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2"
			<<B<<"x"
			<<C<<endl;
	}
	
	if( B < 0 && C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2"
			<<B<<endl;
	}
	
	if( B == 0 && C > 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2+"
			<<C<<endl;
	}
	
	if( B == 0 && C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2"
			<<C<<endl;
	}
	
	if( B == 0 && C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<A<<"x^2"<<endl;
	}

}


void parabola::Sprawdz(point a, point b, point c)
{
	float W = a.x*a.x*b.x + a.x*c.x*c.x + b.x*b.x*c.x - a.x*b.x*b.x - a.x*a.x*c.x - c.x*c.x*b.x;
	
	if( W == 0 )
	{
		cout<<"Nie mozna utworzyc paraboli!"<<endl;
		exit(1);
	}
	
	float A = (a.y*b.x + a.x*c.y + c.x*b.y - a.x*b.y - a.y*c.x - b.x*c.y);
	
	if( A == 0 )
	{
		cout<<"Nie mozna utworzyc paraboli!"<<endl;
		exit(1);
	}
}

void parabola::Licznik()
{
	cout<<"Liczba obiektow klasy parabola: "<<counter<<endl;
}

void styczna(parabola a, float &Aprim, float &Bprim, float odcieta, float rzedna)
{	
	Aprim = 2*a.A*rzedna + a.B;
	Bprim = rzedna - odcieta*Aprim;
}

float rzedna(parabola a, float odcieta)
{
	float rzedna = a.A*odcieta*odcieta + a.B*odcieta + a.C;
	
	return rzedna;
}

void wypiszstyczna(float Aprim, float Bprim, float odcieta, float rzedna)
{
	cout<<"Styczna do paraboli w punkcie ("
		<<odcieta<<";"
		<<rzedna<<") ma rownanie: ";
		
	if( Aprim != 0 && Bprim > 0 )
	{
		cout<<"y="
			<<Aprim<<"x+"
			<<Bprim<<endl;
	}
	
	if( Aprim != 0 && Bprim == 0 )
	{
		cout<<"y="
			<<Aprim<<"x"
			<<endl;
	}
	
	if( Aprim != 0 && Bprim < 0 )
	{
		cout<<"y="
			<<Aprim<<"x"
			<<Bprim<<endl;
	}
	
	if( Aprim == 0 )
	{
		cout<<"y="<<Bprim<<endl;
	}
}
