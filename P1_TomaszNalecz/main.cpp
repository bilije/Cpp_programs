#include "baza.h"
#include <list>


int main()
{
	list<Czlowiek> lst; //Utworzenie listy
	
	Czlowiek pierwszy; 			//utworzenie obiektu klasy Czlowiek
	lst.push_back(pierwszy);	//dodanie obiektu klasy Czlowiek do listy
								// (wstawiamy obiekt na koniec listy) ($)
	Czlowiek drugi;				//($)
	lst.push_back(drugi);
	
	Czlowiek trzeci;			//($)
	lst.push_back(trzeci);
	
	/* Definiujemy iterator "i" i poruszamy się nim po elementach listy.
	 * Na początku działania pętli "znajdujemy się" na początku listy i pętla
	 * działa dopóki nie znajdziemy się na końcu listy.
	 * (co każdą pętlę poruszamy się o jedno miejsce).
	 */
	for(list<Czlowiek>::iterator i=lst.begin(); i!=lst.end(); i++)
	{
		i->Dodaj();  //wywołanie funkcji Dodaj na obiekcie i
		i->Wypisz(); //wywołanie funkcji Wypisz na obiekcie i	
	}
	
	return 0;
}
