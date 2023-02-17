#include "zw.h"

int main()
{
	string imie1;
	cout<<"Wpisz imie zwierzaka: ";
	cin>>imie1;
	
	unsigned int wiek1;
	cout<<"Wpisz wiek zwierzaka: ";
	cin>>wiek1;
	
	zwierze *z1 = new zwierze(imie1, wiek1);
	
	z1->przedstaw();
	
	
	cout<<endl;
	
	
	string imie2;
	cout<<"Podaj imie ryby: ";
	cin>>imie2;
	
	unsigned int wiek2;
	cout<<"Podaj wiek ryby: ";
	cin>>wiek2;
	
	/*enum wody w2;
	cout<<"Podaj z jakiej wody jest ryba: ";
	cin>>w2;
	*/
	
	ryba *r2 = new ryba(imie2, wiek2, slonowodne);
	
	r2->zwierze::przedstaw();
	r2->przedstaw();
	
	
	cout<<endl;
	
	
	string imie3;
	cout<<"Wpisz imie plaza: ";
	cin>>imie3;
	
	unsigned int wiek3;
	cout<<"Wpisz wiek plaza: ";
	cin>>wiek3;
	
	unsigned int dlg3;
	cout<<"Wpisz dlugosc plaza w cm: ";
	cin>>dlg3;
	plaz *p3 = new plaz(imie3, wiek3, dlg3);
	
	p3->zwierze::przedstaw();
	p3->przedstaw();
	
	
	cout<<endl;
	 
	 
	string imie4;
	cout<<"Wpisz imie ssaka: ";
	cin>>imie4;
	
	unsigned int wiek4;
	cout<<"Wpisz wiek ssaka: ";
	cin>>wiek4;
	
	unsigned int ciaza4;
	cout<<"Wpisz dlugosc ciazy w tygodniach: ";
	cin>>ciaza4;
	
	ssak *s4 = new ssak(imie4, wiek4 ,ciaza4);
	
	s4->zwierze::przedstaw();
	s4->przedstaw();
	
	
	cout<<endl;
	
	
	string imie5;
	cout<<"Wpisz imie ptaka: ";
	cin>>imie5;
	
	unsigned int wiek5;
	cout<<"Wpisz wiek ptaka: ";
	cin>>wiek5;
	
	string k5;
	cout<<"Podaj kolor: ";
	cin>>k5;
	
	ptak *p5 = new ptak(imie5, wiek5, k5);
	
	p5->zwierze::przedstaw();
	p5->przedstaw();
	
	
	cout<<endl;
	
	
	string imie6;
	cout<<"Wpisz imie gada: ";
	cin>>imie6;
	
	unsigned int wiek6;
	cout<<"Wpisz wiek gada: ";
	cin>>wiek6;
	
	unsigned int d6;
	cout<<"Podaj dlugosc zycia: ";
	cin>>d6;
	
	gad *g6 = new gad(imie6, wiek6, d6);
	
	g6->zwierze::przedstaw();
	g6->przedstaw();
	
	
	
	return 0;
}
