#include<iostream>
#include<cstdlib>
using namespace std;
double random(int x, double y);
int main()
{
	int randome = rand();
	int intmax = RAND_MAX;
	double dd = random(randome,intmax);
	cout << dd << endl;
	getchar();
	return 0;
	
}

double random(int x, double y)
{
	return(x / y);
}