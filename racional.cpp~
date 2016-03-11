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
using std::cout;
using std::endl;

Racional::Racional(int nom,int den):nom(nom), den(den){
}
const Racional Racional::operator+(const Racional& r)const{
	int x,y;	
	x=(nom*r.den)+(r.nom*den);
	y=den*r.den;


	if(nom==0){
		x=r.nom;
		y=r.den;
	}
	if(r.nom==0){
		x=nom;
		y=den;
	}
	int dividir=0;
	if(x>y){
		dividir=x;
	}else{
		dividir=y;
	}
	for(int i=dividir;i>1;i--){
		if((x%i==0) && (y%i==0)){			
			x=x/i;
			y=y/i;
		}
	}
	 return Racional(x, y);
}
const Racional Racional::operator-(const Racional& r)const{
	int x,y;	
	x=(nom*r.den)-(r.nom*den);
	y=den*r.den;	
	if(nom==0){
		x=r.nom;
		y=r.den;
	}
	if(r.nom==0){
		x=nom;
		y=den;
	}
	int dividir=0;
	if(x>y){
		dividir=x;
	}else{
		dividir=y;
	}
	for(int i=dividir;i>1;i--){
		if((x%i==0) && (y%i==0)){			
			x=x/i;
			y=y/i;
		}
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
	int dividir=0;
	if(x>y){
		dividir=x;
	}else{
		dividir=y;
	}
	for(int i=dividir;i>1;i--){
		if((x%i==0) && (y%i==0)){			
			x=x/i;
			y=y/i;
		}
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
	int dividir=0;
	if(x>y){
		dividir=x;
	}else{
		dividir=y;
	}
	for(int i=dividir;i>1;i--){
		if((x%i==0) && (y%i==0)){			
			x=x/i;
			y=y/i;
		}
	}
	if(y==0){
		cout << "error valores incorrectos" << endl;
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

