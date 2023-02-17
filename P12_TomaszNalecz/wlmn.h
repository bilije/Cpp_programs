#ifndef _WLMN_H
#define _WLMN_H

#include <iostream>
#include <iomanip>

using namespace std;

template <class T, int N> // parametr N wykorzystam do zrobienia specjalizowanej wersji klasy

class wielomian
{
	T *Rez; // wskaznik na tablice
	//T *Imz;
	int n;  // wielkosc tablicy (stopien wielomianu)
	
	static int licznik; // licznik bedzie potrzebny do korekty stopnia wielomianu po jego zrozniczkowaniu
	
	public:
	
	wielomian()	{								// konstruktor domyślny, tworzy dwumian (2x+2)
					n = 2;
					Rez = new T[n];
					//Imz = new T[n];
					for( int i = 0; i < n; i++)
					{
						Rez[i] = 2;
						//Imz[i] = 2;
					}
				}
				
	wielomian(int n2,  T tab[]) {							//konstruktor glowny
								n = n2;
								Rez = new T[n];
								//Imz = new T[n];
								for( int i = 0; i < n; i++)
								{
									Rez[i] = tab[i];
									//Imz[i] = 0;
								}
							 }
				
				
	~wielomian() {						// destruktor, zwalnia pamiec
					delete [] Rez;
					//delete [] Imz;
				 }
	

				
	void Wypisz()	{														// funkcja ktora wypisuje wielomian
						
						cout<<endl<<"Wielomian:"<<endl;
						cout<<"y(x) = ";
						
						for( int i = 0; i < n - licznik; i++ )				// wykorzystanie licznika
						{
							if( i == n - 1 - licznik)
							{
								cout<<Rez[i]<<endl;
							}
							else
							{
								cout<<Rez[i]<<"x^"<<n - licznik -1-i<<"+";	// nie uwzglednilem tego czy wspolczynnik jest ujemny lub rowny 1, i potegi = 1
							}												// (wypisze sie np: "1x^2" i "2x^2+-2x^1" , zero rowniez sie wypisze)
						}
					
					}	
					
	void Rozniczka() {											// funckja rozniczkujaca wielomian
						cout<<endl<<"Rozniczkowanie"<<endl;
		
						for( int i = 0; i < n - licznik; i++ )	// wykorzystanie licznika
						{
							Rez[i] = (n - licznik -1-i)*Rez[i];	
						}
						licznik++;								// po zrozniczkowaniu licznik zwieksza sie o 1 (stopien wielomianu zmniejsza sie o 1)
					 }
};

template <class T, int N>
int wielomian<T, N>::licznik = 0; // ustawienie licznika rownego 0





template<class T>

class wielomian<T, 1>	// specjalizowana wersja klasy, dzieki parametrowi N = 1 nadal moge wybrac typ wspolczynnikow
{
	T *Rez;
	T *Imz;  // wszystko dziala tak jak w "pierwotnej" klasie szablonowej, dodatkiem jest tablica na wspolczynniki czesci urojonej
	int n;	// stopien czesci rzeczywistej i urojonej jest taki sam
	
	static int licznik;
	
	public:
	
	wielomian()	{
					n = 2;
					Rez = new T[n];
					Imz = new T[n];
					for( int i = 0; i < n; i++)
					{
						Rez[i] = 2;
						Imz[i] = 2;				// czesc urojona
					}
				}
				
	wielomian(int n2,  T tab1[], T tab2[]) {				// dodanie do konstruktora tablicy dla czesci urojonej
								n = n2;
								Rez = new T[n];
								Imz = new T[n];
								for( int i = 0; i < n; i++)
								{
									Rez[i] = tab1[i];
									Imz[i] = tab2[i];		// czesc urojona
								}
							 }
				
				
	~wielomian() {
					delete [] Rez;
					delete [] Imz;	// zwolnienie pamieci
				 }
	

				
	void Wypisz()	{														// funckja wypisujaca troche sie zmienila
						
						cout<<endl<<"Wielomian:"<<endl;
						cout<<"y(x) = (";
						
						for( int i = 0; i < n - licznik; i++ )
						{
							if( i == n - 1 - licznik)
							{
								cout<<Rez[i]<<") + i(";
							}
							else
							{
								cout<<Rez[i]<<"x^"<<n - licznik -1-i<<"+";
							}
						}
						
						for( int i = 0; i < n - licznik; i++ )
						{
							if( i == n - licznik - 1)
							{
								cout<<Imz[i]<<")"<<endl;
							}
							else
							{
								cout<<Imz[i]<<"x^"<<n - licznik -1-i<<"+";
							}
						}
					}	
					
						
					
	void Rozniczka() {											
						cout<<endl<<"Rozniczkowanie"<<endl;
		
						for( int i = 0; i < n - licznik; i++ )	
						{
							Rez[i] = (n - licznik -1-i)*Rez[i];
							Imz[i] = (n - licznik -1-i)*Imz[i];	// rozniczka czesci urojonej
						}
						licznik++;
					 }
};

template <class T>
int wielomian<T, 1>::licznik = 0;	// ustawienie licznika rownego 0 dla specjalizowanej wersji klasy szablonowej


#endif
