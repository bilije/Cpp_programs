#include "generator.h"


Generator::Generator(long NN, long ww1, long ww2, long ww3, long sd)
{
	N = NN;
	w1 = ww1;
	w2 = ww2;
	w3 = ww3;
	seed = sd;
	tab = 0;
}



void Generator::printGenerator()
{
	
	for(int i = 0; i < N; i++)
	{
		tab = (w1*seed + w2)%w3;
		tab /= w3;
		
		cout<<"Liczba wygenerowana #"<<i+1<<": "<<tab<<endl;
		
		seed = tab*w3;
	}
}


Histogram::Histogram()
{
	hist = new int[100];
}

Histogram::~Histogram()
{
	delete [] hist;
}

void Histogram::FillHist(Generator g, long sd)
{
	
	g.seed = sd;
	
	for(int i = 0; i < g.N; i++)
	{
		g.tab = (g.w1*g.seed + g.w2)%g.w3;
		g.tab /= g.w3;
		
		hist[int(100*g.tab)] += 1;
		
		
		/*do
		{
			if( (g.tab < k) && (g.tab >= (i-0.1)) )
			{
				
				hist[int(100*k)-1] += 1;
				k = 1;
			} 
			
			else
			k += 0.1;
			
		}while(k < 1); */
		
		
		g.seed = g.tab*g.w3;
		
	}
}


void Histogram::PrintHist()
{
	for(int j = 0 ; j < 100; j++)
	{
		cout<<"Przedzial "<<j+1<<": "<<hist[j]<<endl;
	}
}

