#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

template <class T>
void wypiszt(T tab[], int N) // wypisanie na ekran
{
	cout<<endl<<"Zawartosc tablicy:"<<endl;
	
	for( int i = 0; i < N; i++)
		cout<<tab[i]<<endl;
	
}

template <class T>
void bombel_ros(T tab[], int N) // sortowanie rosnaco
{
	cout<<endl<<"Posortowano rosnaco"<<endl;
	for(int i = 0; i < N ; i++)
		for(int j = 1; j < N - i; j++)
		if(tab[j-1] > tab[j])
			swap(tab[j-1], tab[j]);
	
}

template <class T>
void bombel_mal(T tab[], int N) // sortowanie malejaco
{
	cout<<endl<<"Posortowano malejaco"<<endl;
	for(int i = 0; i < N ; i++)
		for(int j = 1; j < N - i; j++)
		if(tab[j-1] < tab[j])
			swap(tab[j-1], tab[j]);
	
}



int main()
{
	
	cout<<endl<<"PLIK INT"<<endl;
	
	int tab1[10];
	
	fstream fin;
	fin.open("int", ios::in);
	
	if(fin.good() == false)
	{
		cout<<"Nie wczytano pliku"<<endl;
		exit(1);
	}
	
	int N1;
	fin>>N1;

	for(int i = 0; i < N1; i++)
	{
		fin>>tab1[i];
	}
	
	wypiszt <int> (tab1, N1);
	
	bombel_mal <int> (tab1, N1);
	
	wypiszt <int> (tab1, N1);
	
	fstream fout;
	fout.open("int2", ios::out);
	
	fout<<N1<<endl;
	for( int i = 0; i < N1 ; i++)
	{
		fout<<tab1[i]<<" ";
	} 
	
	cout<<endl<<"Wpisano do pliku"<<endl;
	
	fout.close();
	fin.close();

	
	
	cout<<endl<<endl<<"PLIK CHAR"<<endl;
	
	fin.open("char", ios::in);
	
	if(fin.good() == false)
	{
		cout<<"Nie wczytano pliku"<<endl;
		exit(1);
	}
	
	char tab2[15];
	
	int N2;
	fin>>N2;

	for(int i = 0; i < N2; i++)
	{
		fin>>tab2[i];
	}
	
	wypiszt <char> (tab2, N2);
	
	bombel_ros <char> (tab2, N2);
	
	wypiszt <char> (tab2, N2);
	
	fout.open("char2", ios::out);
	
	fout<<N2<<endl;
	for( int i = 0; i < N2 ; i++)
	{
		fout<<tab2[i]<<" ";
	} 
	
	cout<<endl<<"Wpisano do pliku"<<endl;
	
	fout.close();
	fin.close();
	
	
	cout<<endl<<endl<<"GENEROWANIE LICZB"<<endl;
	
	int N3;
	
	cout<<"Ile liczb chcesz wygenerowac? ";
	cin>>N3;
	
	double tab3[N3];
	
	long seed = 5;
	long w3 = 4294967296;
	
	for(int i = 0; i < N3; i++)
	{
		tab3[i] = (69069*seed + 5)%w3;
		tab3[i] /= w3;
		
		
		seed = tab3[i]*w3;
	}
	
	
	
	fout.open("double", ios::out);
	
	fout<<N3<<endl;
	for( int i = 0; i < N3 ; i++)
	{
		fout<<tab3[i]<<" ";
	} 
	
	cout<<endl<<"Wpisano do pliku"<<endl;
		
	fout.close();

	
	bombel_ros <double> (tab3, N3);
	
	fout.open("double_sort", ios::out);
	
	fout<<N3<<endl;
	for( int i = 0; i < N3 ; i++)
	{
		fout<<tab3[i]<<" ";
	} 
	
	cout<<endl<<"Wpisano do pliku"<<endl;
	
	fout.close();
	


	return 0;
}
