#include "sklep.h"


Produkt::Produkt(string d, string n, float c, float k)
{
	dzial = d;
	nazwa = n;
	cena = k*c;
}


void Produkt::Print()
{
	cout<<setprecision(2)<<fixed;
	cout<<nazwa<<" - "<<cena<<" zl"<<endl;
}



int wczytaj(int a, int b)
{
	int n;
	
	while(1)
	{
		cout<<"Wybierz pozycje menu od "<<a<<" do "<<b<<": ";
		cin>>n;
		
		if( n < a || n > b )
		{
			cout<<endl<<"Wybrano nieprawidlowa pozycje!"<<endl
					  <<"Sprobuj jeszcze raz"<<endl;
			
			continue;
		}
		
		else
		break;
	}
	
	return n;
}


