#include "parabolav2.h"

int point::counter = 0;

point::point(float xx , float yy )
{
	x = new float (xx);
	y = new float(yy);
	
	counter++;
}

point::~point()
{
	delete y;
	delete x;
	counter--;
}

void point::Przedstaw()
{
	cout<<"Punkt #"<<counter<<" ma wspolrzedne: ("
		<<*x<<";"<<*y<<")"<<endl;
}

void point::Licznik()
{
	cout<<"Liczba obiektow klasy point: "<<counter<<endl;
}


point::point(const point &pt)
{
	x = new float(*pt.x);
	y = new float(*pt.y);
}


point & point::operator=(const point &pt)
{
	if(&pt == this) return *this;
	
	delete x;
	delete y;
	
	x = new float(*pt.x);
	y = new float(*pt.y);
	
	return *this;
}



////////////////////////////////////////////////


int parabola::counter=0;

parabola::parabola(point a, point b, point c)   // oblicza wspolczynniki metoda Cramera
{
	float x1 = *a.x;
	float y1 = *a.y;
	float x2 = *b.x;
	float y2 = *b.y;
	float x3 = *c.x;
	float y3 = *c.y;
	
	//cout<<endl<<"$$"<<x3<<" "<<y2<<"$$"<<endl;
	
	
	float W = ((x1)*(x1)*(x2) + (x1)*(x3)*(x3) + (x2)*(x2)*(x3) - (x1)*(x2)*(x2) - (x1)*(x1)*(x3) - (x3)*(x3)*(x2));
	
	A = new float ((y1*x2 + x1*y3 + x3*y2 - x1*y2 - y1*x3 - x2*y3)/W);
	B = new float ((x1*x1*y2 + x3*x3*y1 + x2*x2*y3 - x2*x2*y1 - x1*x1*y3 - x3*x3*y2)/W);
	C = new float ((x1*x1*x2*y3 + x1*y2*x3*x3 + y1*x2*x2*x3 - x1*x2*x2*y3 - x1*x1*y2*x3 - y1*x2*x3*x3)/W);
	
	
	
	/*A = ((y1*x2 + x1*y3 + x3*y2 - x1*y2 - y1*x3 - x2*y3)/W);
	*B = ((x1*x1*y2 + x3*x3*y1 + x2*x2*y3 - x2*x2*y1 - x1*x1*y3 - x3*x3*y2)/W);
	*C = ((x1*x1*x2*y3 + x1*y2*x3*x3 + y1*x2*x2*x3 - x1*x2*x2*y3 - x1*x1*y2*x3 - y1*x2*x3*x3)/W);
*/
	counter++;
}

parabola::~parabola()
{
	delete C;
	delete B;
	delete A;
	counter--;
}

void parabola::Przedstaw()
{
	
	//cout<<"parabola:"<<*A<<"  "<<*B<<" "<<*C<<endl;

	
	if( *B > 0 && *C > 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2+"
			<<*B<<"x+"
			<<*C<<endl;
	}

	if( *B > 0 && *C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2+"
			<<*B<<"x"
			<<*C<<endl;
	}
	
	if( *B > 0 && *C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2+"
			<<*B<<"x"<<endl;
	}

	if( *B < 0 && *C > 0)
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2"
			<<*B<<"x+"
			<<*C<<endl;
	}
	
	if( *B < 0 && *C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2"
			<<*B<<"x"
			<<*C<<endl;
	}
	
	if( *B < 0 && *C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2"
			<<*B<<endl;
	}
	
	if( *B == 0 && *C > 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2+"
			<<*C<<endl;
	}
	
	if( *B == 0 && *C < 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2"
			<<*C<<endl;
	}
	
	if( *B == 0 && *C == 0 )
	{
		cout<<"Parabola ma rownanie: "
			<<*A<<"x^2"<<endl;
	}

}


void parabola::Sprawdz(point a, point b, point c)
{
	float x1 = *a.x;
	float y1 = *a.y;
	float x2 = *b.x;
	float y2 = *b.y;
	float x3 = *c.x;
	float y3 = *c.y;
	
	//cout<<endl<<"$$"<<x3<<" "<<y2<<"$$"<<endl;
	
	float W = (x1)*(x1)*(x2) + (x1)*(x3)*(x3) + (x2)*(x2)*(x3) - (x1)*(x2)*(x2) - (x1)*(x1)*(x3) - (x3)*(x3)*(x2);
	
	if( W == 0 )
	{
		cout<<"Nie mozna utworzyc paraboli!"<<endl;
		exit(1);
	}
	
	float A = (y1*x2 + x1*y3 + x3*y2 - x1*y2 - y1*x3 - x2*y3);
	
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


parabola::parabola(const parabola &pb)
{
	A = new float(*pb.A);
	B = new float(*pb.B);
	C = new float(*pb.C);
}

parabola & parabola::operator=(const parabola &pb)
{
	if(&pb == this) return *this;
	
	delete A;
	delete B;
	delete C;
	
	A = new float(*pb.A);
	B = new float(*pb.B);
	C = new float(*pb.C);
	
	return *this;
}





void styczna(parabola a, float &Aprim, float &Bprim, float odcieta, float rzedna)
{	
	float A1 = *a.A;
	float B1 = *a.B;
	Aprim = 2*A1*rzedna + B1;
	
	//cout<<endl<<Aprim<<endl;
	
	Bprim = rzedna - odcieta*Aprim;
	
	//cout<<endl<<Bprim<<endl;
}

float rzedna(parabola a, float odcieta)
{
	float A1 = *a.A;
	float B1 = *a.B;
	float C1 = *a.C;
	float rzedna = A1*odcieta*odcieta + B1*odcieta + C1;
	
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
