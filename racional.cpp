#include "racional.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::ostream;
using std::istream;
using std::showpos;
using std::noshowpos;

Racional::Racional(int nom,int den):nom(nom), den(den){
}
const Racional Racional::operator+(const Racional& r)const{
	int x,y;	
	if(den==r.den){
		x=(nom*r.den)+(r.nom*den);
		y=den;	
	}else{
		x=(nom*r.den)+(r.nom*den);
		y=den*r.den;
	}

	if(nom==0){
		x=r.nom;
		y=r.den;
	}
	if(r.nom==0){
		x=nom;
		y=den;
	}
	 return Racional(x, y);
}
const Racional Racional::operator-(const Racional& r)const{
	int x,y;	
	if(den==r.den){
		x=(nom*r.den)-(r.nom*den);
		y=den;	
	}else{
		x=(nom*r.den)-(r.nom*den);
		y=den*r.den;
	}
	if(nom==0){
		x=r.nom;
		y=r.den;
	}
	if(r.nom==0){
		x=nom;
		y=den;
	}
	 return Racional(x, y);
}
const Racional Racional::operator*(const Racional& r)const{
	int x,y;	
	x=nom*r.nom;
	y=den*r.den;
	if(nom==0){
		x=0;
		y=0;
	}
	if(r.nom==0){
		x=0;
		y=0;
	}
	return Racional(x, y);
}
const Racional Racional::operator/(const Racional& r)const{
	int x,y;	
	x=nom*r.den;
	y=den*r.nom;
	if(nom==0){
		x=r.nom;
		y=r.den;
	}
	if(r.nom==0){
		x=0;
		y=0;
	}
	return Racional(x, y);
}
string Racional::toString() const{
	
}
ostream& operator<<(ostream& output, const Racional& c){
	if(c.den==1){
		output << c.nom;
	}else if(c.nom==0){
		output << 0;
	}else{
		output << c.nom << "/" << c.den;
	}
	return output;
}

