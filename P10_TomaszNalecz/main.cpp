#include "sklep.h"

//		PRODUKTY:

Produkt prod;


int main ()
{
	
	int n = 5;
	
	float ilosc = 0;
	
	
	list<Produkt> koszyk;
	list<Produkt>::iterator i; //ITERATOR GLOWNY
	list<Produkt>::iterator i2; //DO KOSZYKA
	int k; //TO BEDZIE SUMA PRODUKTOW W KOSZYKU

	while(1)
	{
		cout<<endl<<"****SKLEP****"<<endl
				  <<"1.Dodaj do koszyka"<<endl
				  <<"2.Wyswietl koszyk"<<endl
				  <<"3.Zaplac"<<endl
				  <<"4.Wyjdz"<<endl;
				  
		n = wczytaj(1, 4);
		
		switch(n) //MENU
		{
			case 1:
			cout<<endl<<"***ZAKUPY***"<<endl
					  <<"1.Owoce i warzywa"<<endl
					  <<"2.Napoje"<<endl
					  <<"3.Mieso"<<endl
					  <<"4.Pieczywo"<<endl
					  <<"5.Slodycze"<<endl
					  <<"6.Wroc"<<endl;
					  
			n = wczytaj(1, 6);
			
			switch(n) //DODAJ DO KOSZYKA
			{
				case 1:
				cout<<endl<<"***Owoce i warzywa***"<<endl
						  <<"1.Jablka - 3.99 zl/kg"<<endl
						  <<"2.Ziemniaki - 2.49 zl/kg"<<endl
						  <<"3.Banany - 4.99 zl/kg"<<endl
						  <<"4.Wroc"<<endl;
						  
				n = wczytaj(1, 4);
				
				switch(n) //OWOCE I WARZYWA
				{
					case 1:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Owoce i warzywa", "Jablka", 3.99, ilosc);
					koszyk.push_back(prod);
					
					continue;
					
					case 2:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Owoce i warzywa", "Ziemniaki", 2.49, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 3:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Owoce i warzywa", "Banany", 4.99, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 4:
					break;
				}
				continue;
				
				case 2:
				cout<<endl<<"***Napoje***"<<endl
						  <<"1.Woda - 1.08 zl/l"<<endl
						  <<"2.Sok Pomaranczowy - 3.58 zl/l"<<endl
						  <<"3.Cola - 2.33 zl/l"<<endl
						  <<"4.Wroc"<<endl;
						  
				n = wczytaj(1, 4);
				
				switch(n) // NAPOJE
				{
					case 1:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Napoje", "Woda", 1.08, ilosc);
					koszyk.push_back(prod);
					
					continue;
					
					case 2:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Napoje", "Sok Pomaranczowy", 3.58, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 3:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Napoje", "Cola", 2.33, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 4:
					break;
				}
				continue;
				
				case 3:
				
				cout<<endl<<"***Mieso***"<<endl
						  <<"1.Wedlina - 31.90 zl/kg"<<endl
						  <<"2.Kielbasa - 29.00 zl/kg"<<endl
						  <<"3.Schab - 22.19 zl/kg"<<endl
						  <<"4.Wroc"<<endl;
						  
				n = wczytaj(1, 4);
				
				switch(n) //MIESO
				{
					case 1:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Mieso", "Wedlina", 31.90, ilosc);
					koszyk.push_back(prod);
					
					continue;
					
					case 2:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Mieso", "Kielbasa", 29.00, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 3:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Mieso", "Schab", 22.19, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 4:
					break;
				}
				continue;
				
				case 4:
				
				cout<<endl<<"***Pieczywo***"<<endl
						  <<"1.Chleb zytni - 5.98 zl/kg"<<endl
						  <<"2.Bulka - 9.90 zl/kg"<<endl
						  <<"3.Chleb Razowy - 6.98 zl/kg"<<endl
						  <<"4.Wroc"<<endl;
						  
				n = wczytaj(1, 4);
				
				switch(n) //PIECZYWO
				{
					case 1:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Pieczywo", "Chleb zytni", 5.98, ilosc);
					koszyk.push_back(prod);
					
					continue;
					
					case 2:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Pieczywo", "Bulka", 9.90, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 3:
					cout<<endl<<"Podaj ilosc w kg: ";
					cin>>ilosc;
					
					prod = Produkt("Pieczywo", "Chleb razowy", 6.98, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 4:
					break;
				}
				continue;
				
				case 5:
				
				cout<<endl<<"***Slodycze***"<<endl
						  <<"1.Czekolada mleczna - 2,68 zl"<<endl
						  <<"2.Krowki - 7.58 zl"<<endl
						  <<"3.Lizak - 0.89 zl"<<endl
						  <<"4.Wroc"<<endl;
				
				n = wczytaj(1, 4);
				
				switch(n) //SLODYCZE
				{
					case 1:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Slodycze", "Czekolada mleczna", 2.68, ilosc);
					koszyk.push_back(prod);
					
					continue;
					
					case 2:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Slodycze", "Krowki", 7.58, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 3:
					cout<<endl<<"Podaj ilosc: ";
					cin>>ilosc;
					
					prod = Produkt("Slodycze", "Lizak", 0.89, ilosc);
					koszyk.push_back(prod);
					continue;
					
					case 4:
					break;
				}
				continue;
				
				case 6:
				break;
			}
					  
			continue;
			
			case 2: // KOSZYK
			if( koszyk.empty() )
			{
				cout<<endl<<"Koszyk jest pusty!"<<endl;
			}
			
			else
			{
				cout<<endl<<"****TWOJ KOSZYK****"<<endl;
	
				float suma = 0.0;
				
				int j = 0;
				
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					cout<<j+1<<" - "; it->Print();
					suma += it->cena;
					j++;
				}
				cout<<"SUMA: "<<suma<<" zl"<<endl;
				
				cout<<endl<<"1.Wyczysc koszyk"<<endl
						  <<"2.Usun produkt z koszyka"<<endl
						  <<"3.Wroc"<<endl;
						  
				n = wczytaj(1, 3);
				
				switch(n) //KOSZYK
				{
					case 1:
					koszyk.clear();
					
					cout<<endl<<"Wyczyszczono koszyk!"<<endl;
					break;
					
					case 2:
					
					k = koszyk.size();
					
					cout<<endl<<"Jaki produkt z koszyka chcesz usunac:";
					n = wczytaj(1, k);
					
					
					
					i2 = koszyk.begin();
					for(int y = 0; y < n - 1; y++)
					{
						i2++;
					}
					
					cout<<"Usunieto "<<i2->nazwa<<" z koszyka"<<endl;
					koszyk.erase(i2);
	
					break;
					
					case 3:
					break;

					
				}
			}
			
			continue;
			
			case 3:
			cout<<endl<<"***Placenie***"<<endl;
			if( koszyk.empty() )
			{
				cout<<endl<<"Koszyk jest pusty!"<<endl;
			}
			
			else // PARAGAON
			{
				cout<<"---Wybrane Produkty---"<<endl;
				
				float suma2 = 0.0;
				
				int j2 = 0;
				
				cout<<"Owoce i warzywa:"<<endl;
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					if( it->dzial == "Owoce i warzywa" )
					{
						cout<<j2+1<<" - "; it->Print();
						suma2 += it->cena;
						j2++;
					}
				}
				
				if(j2 == 0)
				cout<<"---------"<<endl;
				
				j2 = 0;
				
				cout<<endl<<"Napoje:"<<endl;
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					if( it->dzial == "Napoje" )
					{
						cout<<j2+1<<" - "; it->Print();
						suma2 += it->cena;
						j2++;
					}
				}
				
				if(j2 == 0)
				cout<<"---------"<<endl;
				
				j2 = 0;
				
				
				cout<<endl<<"Mieso:"<<endl;
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					if( it->dzial == "Mieso" )
					{
						cout<<j2+1<<" - "; it->Print();
						suma2 += it->cena;
						j2++;
					}
				}
				
				if(j2 == 0)
				cout<<"---------"<<endl;
				
				j2 = 0;
				
				
				cout<<endl<<"Pieczywo:"<<endl;
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					if( it->dzial == "Pieczywo" )
					{
						cout<<j2+1<<" - "; it->Print();
						suma2 += it->cena;
						j2++;
					}
				}
				
				if(j2 == 0)
				cout<<"---------"<<endl;
				
				j2 = 0;
				
				cout<<endl<<"Slodycze:"<<endl;
				for( list<Produkt>::iterator it = koszyk.begin(); it != koszyk.end(); it++)
				{
					if( it->dzial == "Slodycze" )
					{
						cout<<j2+1<<" - "; it->Print();
						suma2 += it->cena;
						j2++;
					}
				}
				
				if(j2 == 0)
				cout<<"---------"<<endl;
				

				cout<<"Do zapłaty: "<<suma2<<" zl"<<endl;
				
				cout<<endl<<"1.Zaplac"<<endl
						  <<"2.Wroc"<<endl;
						  
				n = wczytaj(1,2);
				
				switch(n)
				{
					case 1:
					cout<<endl<<"Zaplacono za zakupy "<<suma2<<" zl"<<endl
							  <<"Dziekujemy za skorzystanie naszej uslugi i zapraszamy ponownie"<<endl;
					
					koszyk.clear();
					
					break;
					
					case 2:
					break;
					
				}
				
			
				//sort(koszyk.end(),koszyk.begin());
			}
			
			
			continue;
			
			case 4:
			cout<<endl<<"Wychodzenie"<<endl;
			
			break;
		}
		break;
	}
	
	
	return 0;
}
