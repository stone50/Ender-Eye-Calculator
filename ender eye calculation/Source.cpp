#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

using namespace std;

double findSlope(double angle) {
	return tan(((angle / 90) + 1) * (M_PI / 2));
}

int main() {
	double x1 = -609.504;
	double y1 = 1754.047;
	double a1 = -158.6;
	double x2 = -492.548;
	double y2 = 1696.793;
	double a2 = 95.7;
	double m1 = findSlope(a1);
	double m2 = findSlope(a2);
	double xOut = (y2 - y1 + (x1 * m1) - (x2 * m2)) / (m1 - m2);
	double yOut = (m1 * (xOut - x1)) + y1;

	cout << "Stronghold: (" << xOut << ", " << yOut << ")" << endl;
	return 1;
}