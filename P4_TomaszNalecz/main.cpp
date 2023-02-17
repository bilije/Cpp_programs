#include "parabola.h"

int main()
{
	
	cout<<"Wpisywanie wspolrzednych punktow"<<endl;
	
	float x1;
	cout<<"Wpisz wspolrzedna x punktu #1:";
	cin>>x1;
	
	float y1;
	cout<<"Wpisz wspolrzedna y punktu #1:";
	cin>> y1;
	
	point *p1;
	
	p1 = new point(x1, y1);
	
	p1->Licznik();
	
	p1->Przedstaw();
	
	cout<<endl<<endl;
	//////////////////////
	
	
	float x2;
	cout<<"Wpisz wspolrzedna x punktu #2:";
	cin>>x2;
	
	float y2;
	cout<<"Wpisz wspolrzedna y punktu #2:";
	cin>> y2;
	
	point *p2;
	
	p2 = new point(x2, y2);
	
	p2->Licznik();
	
	p2->Przedstaw();
	
	cout<<endl<<endl;
	///////////////////////
	
	
	float x3;
	cout<<"Wpisz wspolrzedna x punktu #3:";
	cin>>x3;
	
	float y3;
	cout<<"Wpisz wspolrzedna y punktu #3:";
	cin>> y3;
	
	point *p3;
	
	p3 = new point(x3, y3);
	
	p3->Licznik();
	
	p3->Przedstaw();
	
	cout<<endl<<endl;
	////////////////////////
	
	cout<<"Szukanie paraboli"<<endl;
	
	parabola *pb4;
	
	pb4->Sprawdz(*p1, *p2, *p3);
	
	pb4 = new parabola(*p1, *p2 , *p3);
	
	pb4->Licznik();
	
	pb4->Przedstaw();
	
	cout<<endl<<endl;
	///////////////////////
	
	cout<<"Szukanie stycznej w podanym punkcie"<<endl;
	
	float xo;
	cout<<"Podaj wartosc x punktu, dla ktorego prosta ma byc styczna do paraboli:";
	cin>>xo;
	
	float yr = rzedna(*pb4, xo);
	
	float Aprim, Bprim;
	
	styczna(*pb4, Aprim, Bprim, xo, yr);
	
	wypiszstyczna(Aprim, Bprim, xo, yr);
	
	
	return 0;
}
