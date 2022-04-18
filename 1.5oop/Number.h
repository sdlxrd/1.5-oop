#pragma once
#include <sstream>
#include <iostream>
using namespace std;
class Number
{
private:
	double number;
public:
	double getNumber() const { return number; }

	void setNumber(double value);

	bool Init(double x);
	void Display(Number p, Number s) const;
	double Read();

	double substr(Number p, Number s);
	double multiply(Number p, Number s);

	string toString(Number p, Number s) const;
};