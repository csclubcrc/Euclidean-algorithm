#include <iostream>
#include <vector>
#include "Diophantine.h"

using namespace std;

Diophantine::Diophantine(int x0,int y0,int z0)
{ 

  int bigV = 0;
	int smallV = 0;
	xvalue = x0;
	yvalue = y0;
	zvalue = z0;
	if(xvalue > yvalue)
	{ 
		bigV = xvalue;
		smallV = yvalue;
	}else
	{
		bigV = yvalue;
		smallV = xvalue;
	}
  euclideanAlg(bigV,smallV);
	x = 0;
	y = 0;
}

void Diophantine::euclideanAlg(int a,int b)
{
	int bigValue = a;
	int smallValue = b;
	int remainder = 0;
	

	unsigned int mult1 = 0;
	remainder =  (bigValue - (smallValue*mult1));

		 while ( remainder >= smallValue    ) // remainder value will need to be less than the numerator  
		 {
			 remainder =  (bigValue - (smallValue*mult1));// remainder 
			 mult1++; 
		 }

		 mults.push_back(mult1-1);
		 num.push_back(smallValue);

		 cout << bigValue << " = " << smallValue << " * " << mult1-1 << " + " << remainder << endl;

		 bigValue = smallValue;
         if( remainder == 0) // Alg. is done once the remainder is 0  
		 {
			 return;
		 }
		 smallValue = remainder;

		 euclideanAlg(bigValue,smallValue);//  recrusive call  
}

void Diophantine::euclideanAlg_reverse()
{
	int a = num.size();
	for ( int i = 0; i < a; i++)
	{

	   cout << num.at(i) << " * " << mults.at(i) << endl;

	}
}

void Diophantine::print()
{
	for(int i =0;i < mults.size(); i++ )
	{
		cout << mults.at(i) << endl;
	}

	cout << endl;

	for (int i = 0; i < num.size();i++)
	{
		cout << num.at(i) << endl;
	}
}
