#pragma once
#include "Number.h"

class Real
{
private:
	Number num;
public:
	Number getNum() const { return num; }
	void setnum(Number num) { this->num = num; }
	double step(int n);
	double square(Number p, int n);
};

