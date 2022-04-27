#include "Number.h"
#include <iostream>
    
using namespace std;

void Number::setNumber(double value)
{
	number = value;
}
bool Number::Init(double x)
{
    if (x >= 0)
    {
        number = x;
        return true;
    }
    else {
        return false;
    }
}
double Number::Read()
{
    double x;
    do
    {
        cout << "number = ";
        cin >> x;
    } while (!Init(x));
    return x;
}
void Number::Display(Number p, Number s) const
{
    cout << toString(p, s) << endl;
}
double Number::substr(Number p, Number s)
{
    double result = p.number - s.number;
    return result;
}
double Number::multiply(Number p, Number s)
{
    double result = p.number * s.number;
    return result;
}
string Number::toString(Number p, Number s) const
{
    stringstream sout;

    sout << "first number = " << p.number << endl;
    sout << "second number = " << s.number << endl;

    return sout.str();
}