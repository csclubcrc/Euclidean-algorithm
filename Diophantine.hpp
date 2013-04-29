#ifndef DIOPHANT_H
#define DIOPHANT_H


#include <vector>
using namespace std;

class Diophantine
{
public:
  Diophantine(int,int, int);
	
	void euclideanAlg(int,int);
	void euclideanAlg_reverse();
	void print();

	vector<int>num;
	vector<int> mults;

	
private:
	int xvalue;
	int yvalue;
	int zvalue;
	int x;
	int y;
	
};
#endif
