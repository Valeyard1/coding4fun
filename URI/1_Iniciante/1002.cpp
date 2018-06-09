#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double raio = 0;
	double area = 0;

	cin >> raio;
	area = pow(raio, 2) * 3.14159;
	cout << "A=";
	cout << fixed << showpoint;
	cout << setprecision(4) << area << endl;
	return 0;
}
