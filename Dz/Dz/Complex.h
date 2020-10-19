#pragma once
#include <iostream>

using namespace std;

struct complex {
public:
	complex(double re, double im = 0) :Re(re), Im(im) {}

	double Re;
	double Im;

	friend inline std::ostream& operator<< (std::ostream& o, const complex& c) {

		if (c.Re != 0) {
			if (c.Im != 0) {
				if (c.Im > 0)
					return o << c.Re << " + i*" << c.Im;
				else
					return o << c.Re << " - i*" << -c.Im;
			}
			else
				return o << c.Re;

		}
		else {
			if (c.Im != 0) {
				if (c.Im > 0)
					return o << "i*" << c.Im;
				else
					return o << "-i*" << -c.Im;

			}
			else {
				return o << 0;
			}
		}

	}
};

static class Complex_calc
{
public:
	static inline complex plus(const complex& c, const complex& arg) {
		double re;
		double im;
		im = c.Im + arg.Im;
		re = c.Re + arg.Re;
		return complex(re, im);
	}

	static inline complex minus(const complex& c, const complex& arg) {
		double re;
		double im;
		im = c.Im - arg.Im;
		re = c.Re - arg.Re;
		return complex(re, im);
	}

	static inline complex mult(const complex& c, const complex& arg) {
		double re;
		double im;
		re = c.Re * arg.Re + c.Im * arg.Im;
		im = c.Re * arg.Im + c.Im * arg.Re;
		return complex(re, im);
	}


};

complex operator+(const complex& c, const complex& arg) {
	return Complex_calc::plus(c, arg);
}

complex operator-(const complex& c, const complex& arg) {
	return Complex_calc::minus(c, arg);
}

complex operator*(const complex& c, const complex& arg) {
	return Complex_calc::mult(c, arg);
}