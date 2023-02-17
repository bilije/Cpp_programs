#include "generator.h"

int main ()
{
	long ww1, ww2, ww3;
	cout<<"Podaj wspolczynniki: ";
	cin>>ww1>>ww2>>ww3;
	
	long sd;
	cout<<"Podaj ziarno: ";
	cin>>sd;
	
	long NN;
	cout<<"Ile liczb wygenerowac: ";
	cin>>NN;
	
	Generator g1(NN, ww1, ww2, ww3, sd);
	
	Histogram h1;
	
	g1.printGenerator();
	
	cout<<endl<<"Histogram:"<<endl;

	
	h1.FillHist(g1, sd);
	
	h1.PrintHist();
	
	return 0;
}
