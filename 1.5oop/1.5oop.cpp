#include "Real.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Number p, s, k;

	p.Read();
	s.Read();
	
	cout << endl;
	k.Display(p, s);
	
	cout << "result of Substraction = " << k.substr(p, s) << endl;
	cout << "result of Multiplying = " << k.multiply(p, s) << endl;

	Real f;

	int n;
	cout << endl << "Stepin is: "; cin >> n;

	cout << endl << "first number square = " << f.square(p, n) << endl;
	cout << "second number square = " << f.square(s, n) << endl << endl;
	cout << "PI result = " << f.step(n) << endl;
}