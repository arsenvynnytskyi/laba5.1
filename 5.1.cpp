#include <iostream>
#include <cmath>

using namespace std;

double k(double x, double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	
	double c =  k(pow(p + sqrt(p), 2), - k(1, p + q));
	cout << "c = " << c << endl;

	return 0;

}
double k(const double x,const double y)
{
	
	return x / abs((pow(x, 3) + pow(y, 3) + y / (x - y)));
}