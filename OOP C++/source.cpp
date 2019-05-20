#include <iostream>
#include "operacje.h"
using namespace std;


int main() {
	Complex c1, c2, c4;
	c1.setValues(11.35, 0.3);
	c2.setValues(5, 2.65);
	Complex c3 = c1 * c2;
	c3.print();
	return 0;
}