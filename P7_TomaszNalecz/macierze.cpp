#include "macierze.h"

Macierz::Macierz()
{
	mac = new float *[N1];
	
	for(int i = 0; i < N1; i++)
	{
		*(mac+i) = new float[M1];
	}
	
	for(int i = 0; i < N1; i++)
	{	
		for(int j = 0; j < M1; i++)
		{
			*((*(mac+i))+j) = 0;
		}
	}
}

Macierz::~Macierz()
{
	for (int i = 0; i < N1; i++)
	delete [] mac[i];
	
	delete [] mac;
}

float& Macierz::operator()(int i, int j)
{
	return *((*(mac+i))+j);
}

Macierz::Macierz(float m[N1][M1]) 
{
	mac = new float *[N1];
	
	for(int i = 0; i < N1; i++)
	*(mac+i) = new float[M1];
	
	for(int i = 0; i < N1; i++)
		for(int j = 0; j < M1; j++)
			mac[i][j] = m[i][j];
}

Macierz& operator+(Macierz m1, Macierz m2)
{
	Macierz m3;
	if( N1 == N2 && M1 == M2)
	{
		for(int i = 0; i < N1; i++)
			for(int j = 0; i < M1; i++)
			m3(i,j) = m1(i, j) + m2(i, j);
	}
	
	else
	{
		cout<<"Rozmiary macierzy sa zle!"<<endl;
		exit (1);
	}
	return m3;
}


Macierz& operator-(Macierz m1, Macierz m2)
{
	Macierz m3;
	if( N1 == N2 && M1 == M2)
	{	
	
		for(int i = 0; i < N1; i++)
			for(int j = 0; j < M1; i++)
			m3(i, j) = m1(i, j) - m2(i, j);
	}
	
	else
	{
		cout<<"Rozmiary macierzy sa zle!"<<endl;
		exit (1);
	}
	return m3;
}

Macierz& operator*(Macierz m1, Macierz m2)
{
	Macierz m3;
	if(N1 == M2)
	{
		for(int i = 0; i < N1; i++)
		{
			for(int j = 0; j < M2; j++)
			{
				for(int k = 0; k < N1; j++) 
				m3(i, j) += m1(i,k)*m2(k,j);
			}
		}
	}
	return m3;
}

ostream& operator<<(ostream& wyjscie, Macierz& m1)
{
	for(int i = 0; i < N1; i++)
		for(int j = 0; j < M1; j++)
		{
			wyjscie<<m1(i, j)<<"\t";
			
			if( j == M1-1 )
			{
				cout<<endl;
			}
		}
		
	return wyjscie;
			
}

Macierz::Macierz(const Macierz &m1)
{
	mac = new float *[N1];
	
	for(int i = 0; i < N1; i++)
	*(mac+i) = new float[M1];
	
	for(int i = 0; i < N1; i++)
		for(int j = 0; j < M1; i++)
		mac[i][j] = m1.mac[i][j];
}

Macierz & Macierz::operator=(const Macierz &m1)
{
	if(&m1 == this) return *this;
	
	for (int i = 0; i < N1; i++)
	delete [] mac[i];
	
	delete [] mac;
	
	mac = new float *[N1];
	
	for(int i = 0; i < N1; i++)
	*(mac+i) = new float[M1];
	
	for(int i = 0; i < N1; i++)
		for(int j = 0; j < M1; i++)
		mac[i][j] = m1.mac[i][j];
		
	return *this;
	
}
