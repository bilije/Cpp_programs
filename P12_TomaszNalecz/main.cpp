#include "wlmn.h"

int main ()
{
	
	int n;	//stopien wielomianu
	cout<<"Podaj stopien wielomianu:";
	cin>>n;
	
	int tab1[n];
	
	cout<<"PODAJ WSPOLCZYNNIKI"<<endl;
					
	for(int j = 0; j < n; j++)
	{
		cout<<"Podaj wspolczynnik dla x^"<<n-j-1<<": ";	// zapelnienie tablicy wspolczynnikami
		cin>>tab1[j];
	}
	
	wielomian <int,0> w1(n, tab1);		// utworzenie obiektu klasy wielomian, w1 (dla int) ( N trzeba dac rozne od 1 )
	
	
	w1.Wypisz();		// wypisanie
	w1.Rozniczka();		// zrozniczkowanie
	w1.Wypisz();		// ponowne wypisanie
	
	
	
	
	
	
	
	
	cout<<endl<<"WIELOMIAN ZESPOLONY"<<endl;				// czesc dla wielomianu zespolonego (podobnie jak wyzej)
	
	
	cout<<"Podaj stopień czesci rzeczywitej i urojonej:";
	cin>>n;
	float tab2[n];
	float tab3[n];
	cout<<endl<<"PODAJ WSPOLCZYNNIKI"<<endl;
	cout<<"Czesc rzeczywista:"<<endl;
					
	for(int j = 0; j < n; j++)
	{
		cout<<"Podaj wspolczynnik dla x^"<<n-j-1<<": ";
		cin>>tab2[j];
	}
					
	cout<<endl<<"Czesc urojona:"<<endl;
	for(int j = 0; j < n; j++)
	{
		cout<<"Podaj wspolczynnik dla x^"<<n-j-1<<": ";
		cin>>tab3[j];
	}
		
	
	
	wielomian<float,1> w2(n, tab2, tab3);	// utworzenie obiektu specjalizowanej klasy wielomian, w2 (tym razem wykorzystalem typ float)
	
	w2.Wypisz();
	w2.Rozniczka();
	w2.Wypisz();
	
	return 0;
}
