#include <iostream>
#include <cmath>
using namespace std;
double p(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double g = gp;
	while (g <= gk)
	{
		z = p(1 - 2 * g)+pow(1-p(1)+pow((2*g),2),2);
		cout << g << " " << z << endl;
		g += dg;
	}
	return 0;
}
double p(const double x)
{
	if (abs(x) >= 1)
		return pow(cos(x),2)-sin(x) / (exp(sin(x)));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = 1/cos(x);
		do
		{
			j++;
			double R =  x / 2;
			a *= R;
			S += a;
		} while (j < 4);
		return S;
	}
}
