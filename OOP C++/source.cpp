#include <iostream>
#include "classes.h"
using namespace std;


int main() {
	Complex c1, c2, c3;
	trigComplex c5;
	c1.setValues(11.35, 0.3);
	c2.setValues(5, 2.65);
	c3 = c1 * c2;
	c5.setValues(64.2503, 29.4526);
	c3.print();
	c5.print();
	return 0;
}