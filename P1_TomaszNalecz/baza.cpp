#include "baza.h"


void Czlowiek::Dodaj() //Zdefiniowanie funkcji Dodaj
{
	cout<<"Podaj imie studenta:";	//Wyswietlenie napisu w " " (*)
	cin>>Imie;						//Wprowadzenie zmiennej Imie
		
	cout<<"Podaj nazwisko studenta:";	// (*)		
	cin>>Nazwisko;						//Wprowadzenie zmiennej Nazwisko
		
	cout<<"Podaj rok:";		// (*)
	cin>>Rok;				//Wprowadzenie zmiennej Rok
		
	cout<<"Podaj grupe studenta:";	// (*)
	cin>>Grupa;						//Wprowadzenie zmiennej Grupa	
}

void Czlowiek::Wypisz() //Zdefiniowanie funkcji Wypisz
{
	cout<<endl<<"Wpisano na liste studenta:"; 	// (*)
	cout<<endl<<"Imie:"<<Imie					//Wypisanie zmiennej Imie
		<<endl<<"Nazwisko:"<<Nazwisko			// 		 -- 		 Nazwisko
		<<endl<<"Rok:"<<Rok						//       --          Rok
		<<endl<<"Grupa:"<<Grupa					//       --          Grupa
		<<endl;									//endl = nowa linijka
}
