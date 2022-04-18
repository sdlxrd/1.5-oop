#include "Real.h"

double Real::square(Number p, int n)
{
	double result = pow(p.getNumber(), 1.0 / n);
	return result;
}
double Real::step(int c)
{
	long double result = pow(atan(1) * 4, c);
	return result;
}