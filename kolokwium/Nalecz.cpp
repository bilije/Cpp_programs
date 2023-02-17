// Tomasz Nalecz 305 045 wtorek-8
#include "Nalecz.h"

wycieczka::wycieczka(int dr , int dz, string m, string k, float odo, float odz)
{
	dataroz = dr;
	datazak = dz;
	miasto = m;
	kraj = k;
	opldo = odo;
	opldz = odz;
}


wycieczka operator+ (wycieczka w1, uczestnik u1)
{
	w1.listaU.push_back(u1);
	w1.iloscU = w1.listaU.size();
}

/*wycieczka opreator- (wycieczka w1, u1)
{
	
	
}*/

ostream& operator<<(ostream& wyjscie, wycieczka& w1)
{
	
	wyjscie<<endl<<"WYCIECZKA"<<endl<<"Kraj: "<<w1.kraj<<endl
								  <<"Miasto: "<<w1.miasto<<endl
								  <<"Okres wycieczki od/do: "<<w1.dataroz<<"/"<<w1.datazak<<endl
								  <<"Oplaty dzieci/dorosli: "<<setprecision(2)<<fixed<<w1.opldz<<"PLN/"<<w1.opldo<<"PLN"<<endl
								  <<"Ilosc uczestnikow: "<<w1.iloscU<<endl;
	
	if( w1.listaU.empty() )
			{
				wyjscie<<endl<<"Brak uczestnikow!"<<endl;
			}							  
	
	/*else
	{
		int j = 0;
		for( w1.list<uczestnik>::iterator it = w1.listaU.begin(); it !=w1.listaU.end(); it++)
				{
					wyjscie<<j+1<<"."<<it->imie<<" "<<it->nazwisko<<endl;
					j++;
				}
		wyjscie<<"Liczba uczestnikow: "<<w1.iloscU<<endl;
	}*/
	
	// KOMENTARZ: mam z tym problem, raz pokazuje ze nie ma dostepu do elementow klasy uczetnik, chociaz jest przyjazn klasy wycieczka
	//			  mysle ze zle posluzylem sie iteratorem listy ktora jest elementem klasy	
	return wyjscie;
			
}


wycieczka::wycieczka(const wycieczka &w)
{
	dataroz = w.dataroz;
	datazak = w.datazak;
	miasto = w.miasto;
	kraj = w. kraj;
	opldo = w.opldo;
	opldz = w.opldz;
}
