#pragma once
#define PI 3.14
using namespace std;


class Complex {
private:
	double real, imag;
public:
	bool setValues(double r, double i) {
		real = r;
		imag = i;
		return true;
	}
	double modulus() {
		return sqrt(pow(real, 2) + pow(imag, 2));
	}
	double arg() {
		double arg = (180 / PI) * acos(real / modulus());
		return arg;
	}
	Complex operator +(Complex const& obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	Complex operator -(Complex const& obj) {
		Complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}
	Complex operator *(Complex const& obj) {
		Complex res;
		res.real = real * obj.real - imag * obj.imag;
		res.imag = real * obj.imag + imag * obj.real;
		return res;
	}
	Complex operator /(Complex const& obj) {
		Complex res;
		res.real = (real * obj.real + imag * obj.imag) / (pow(obj.real, 2) + pow(obj.imag, 2));
		res.imag = (imag * obj.real - real * obj.imag) / (pow(obj.real, 2) + pow(obj.imag, 2));
		return res;
	}
	void print() {
		cout << "Postac algebraiczna: " << real << " + i" << imag << endl;
		cout << "Postac trygonometryczna: " << modulus() << "(cos(" << arg() << ") + i*sin(" << arg() << ")\n";
	}
};