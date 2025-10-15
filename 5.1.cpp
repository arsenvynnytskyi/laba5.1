#include <iostream>
#include <cmath>

using namespace std;

double k(double x, double y);

int main()
{
	double p, q;
    
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double k1 = k(p + sqrt(q), q - sqrt(p));
    double k2 = k(1, p + q);

    double c = pow(k1, 2) - k2;

    cout << "c = " << c << endl;

	return 0;

}
double k(const double x,const double y)
{
    return x / abs(pow(x, 3) + pow(y, 3)) + y / abs(x - y);
}