#ifndef _GENERATOR_H
#define _GENERATOR_H

#include <iostream>

using namespace std;


class Histogram;

class Generator
{
	long N;
	double tab;
	long w1, w2 ,w3;
	long seed;
	
	public:
	
	Generator(long NN = 0, long ww1 = 0, long ww2 = 0, long ww3 = 0, long sd = 0);
	
	~Generator(){}
	
	void printGenerator();
	
	friend class Histogram;
};

class Histogram
{
	int *hist;
	
	public:
	
	Histogram();
	
	~Histogram();
	
	void PrintHist();
	void FillHist(Generator g1, long sd);
	
};



#endif
