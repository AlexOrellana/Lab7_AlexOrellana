#pragma once
#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;

class Racional{
	int nom, den;
public:
	Racional(int, int);
	string toString() const;
	const Racional operator+(const Racional&)const;
	const Racional operator-(const Racional&)const;
	const Racional operator/(const Racional&)const;
	const Racional operator*(const Racional&)const;
	friend ostream& operator<<(ostream&, const Racional&);
	friend istream& operator>>(istream&, Racional&);
};

