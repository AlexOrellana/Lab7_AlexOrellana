/*
1) crear racionales
2) suma de racionales
3) resta de racionales
4) multiplicacion de racionales
5) division de racionales
6) ver historial de operaciones
7) salir
*/

#include "racional.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){

	stringstream ss;
	string historial;
	int nom,den,opcion=0,pos1,pos2;
	vector<Racional>racionales;
	Racional temp(1,2);

	while(opcion!=7){
		cout << endl;
		cout << endl;
		cout << ("---MENU---") << endl;
		cout << ("1) crear racionales") << endl;
		cout << ("2) suma de racionales") << endl;
		cout << ("3) resta de racionales") << endl;
		cout << ("4) multiplicacion de racionales") << endl;
		cout << ("5) division de racionales") << endl;
		cout << ("6) ver historial de operaciones") << endl;
		cout << ("7) salir") << endl;
		cout << endl;
		cout << endl;
		cout << ("Ingrese opcion: ") << endl;
		cin >> opcion;
		cout << endl;
		cout << endl;

		if(opcion==1){
			cout << ("Ingrese nominador: ") << endl;
			cin >> nom;
			cout << ("Ingrese denominador: ") << endl;
			cin >> den;
			cout << endl;
			cout << endl;
			if(nom<0 && den<0){
				nom = (nom*(-1));
				den = (den*(-1));
			}
			if(den<0){
				den = (den*(-1));
				nom = (nom*(-1));
			}
			if(den==0){
				den=1;
			}
			if(nom==0){
				den = 1;
			}
			if(nom==den){
				nom=1;
				den=1;
			}
			racionales.push_back(Racional(nom,den));
		}else if(opcion==2){
			cout << ("Lista: ") << endl;
			for(int i=0;i<racionales.size();i++){
				cout << i <<" -> " << racionales[i] << endl;
			}
			cout << endl;
			cout << ("Ingrese la posicion del primero que desea sumar: ") << endl;
			cin >> pos1;
			cout << ("Ingrese la posicion del segundo que desea sumar: ") << endl;
			cin >> pos2;
			cout << endl;
				
			temp=racionales[pos1]+racionales[pos2];
			cout << racionales[pos1] << " + " <<racionales[pos2] << " = " <<temp << endl;
			ss << racionales[pos1] << " + " <<racionales[pos2] << " = " <<temp <<"\n";
			
		}else if(opcion==3){
			cout << ("Lista: ") << endl;
			for(int i=0;i<racionales.size();i++){
				cout << i <<" -> " << racionales[i] << endl;
			}
			cout << endl;
			cout << ("Ingrese la posicion del primero que desea sumar: ") << endl;
			cin >> pos1;
			cout << ("Ingrese la posicion del segundo que desea sumar: ") << endl;
			cin >> pos2;
			cout << endl;
				
			temp=racionales[pos1]-racionales[pos2];
			cout << racionales[pos1] << " - " <<racionales[pos2] << " = " <<temp << endl;
			ss << racionales[pos1] << " - " <<racionales[pos2] << " = " <<temp<<"\n";

		}else if(opcion==4){
			cout << ("Lista: ") << endl;
			for(int i=0;i<racionales.size();i++){
				cout << i <<" -> " << racionales[i] << endl;
			}
			cout << endl;
			cout << ("Ingrese la posicion del primero que desea sumar: ") << endl;
			cin >> pos1;
			cout << ("Ingrese la posicion del segundo que desea sumar: ") << endl;
			cin >> pos2;
			cout << endl;
				
			temp=racionales[pos1]*racionales[pos2];
			cout << racionales[pos1] << " * " <<racionales[pos2] << " = " <<temp << endl;
			ss << racionales[pos1] << " * " <<racionales[pos2] << " = " <<temp<<"\n";

		}else if(opcion==5){
			cout << ("Lista: ") << endl;
			for(int i=0;i<racionales.size();i++){
				cout << i <<" -> " << racionales[i] << endl;
			}
			cout << endl;
			cout << ("Ingrese la posicion del primero que desea sumar: ") << endl;
			cin >> pos1;
			cout << ("Ingrese la posicion del segundo que desea sumar: ") << endl;
			cin >> pos2;
			cout << endl;
				
			temp=racionales[pos1]/racionales[pos2];
			cout << racionales[pos1] << " / " <<racionales[pos2] << " = " <<temp << endl;
			ss << racionales[pos1] << " / " <<racionales[pos2] << " = " <<temp<<"\n";

		}else if(opcion==6){
			cout << ("---HISTORIAL--") << endl;
			historial=ss.str();
			cout << historial << endl;
		}else if(opcion==7){
			cout << ("Adios") << endl;
		}
	}

	return 0;
}
