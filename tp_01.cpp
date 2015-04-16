//~ TP #01: Tipos de Datos; se muestran operaciones entre
//~ variables con distintos tipos de datos (bool, char, int,
//~ double y string).
//~ 
//~ Antonio Agustín Hardoy
//~ 
//~ 16 de abril de 2015, 00:28

#include <iostream>
 
using namespace std;

int main(){
	

//~ Character y String

	char c1 = 'T';
	char c2 = 'P';
	string s1 = "Número ";
	string s2 = "uno.";
	
	cout << c1 << c2 << " " << s1+s2 << endl << endl;

//~ Double

	double f1;
	double f2;
	
	cout << "\n\n---------------------\n\n";

	cout << "Ingrese un número real  ";
	cin >> f1;
	cout << "Ingrese otro número real  ";
	cin >> f2;
	cout << endl;
	
//~ Suma, resta, multiplicación y división con double

	cout << "La suma entre " << f1 << " y " << f2 << " es igual a " << f1 + f2 << "\n\n";
	cout << "La resta entre " << f1 << " y " << f2 << " es igual a " << f1 - f2 << "\n\n";
	cout << "La multiplicación entre " << f1 << " y " << f2 << " es igual a " << f1 * f2 << endl << endl;
	cout << "La división entre " << f1 << " y " << f2 << " es igual a " << f1 / f2 << "\n\n";
	
//~ Comparación con double

	if (f1 > f2) {
			cout << f1 << " es mayor que " << f2;
			}
			else {
				if (f1 == f2) {
					cout << f1 << " es igual a " << f2;
					}
					else {
						cout << f1 << " es menor que " << f2;
						}
					}
				
//~ Integer
	int i1;
	int i2;
	
	cout << "\n\n---------------------\n\n";
	
	cout << "Ingrese un número entero  ";
	cin >> i1;
	cout << "Ingrese otro número entero  ";
	cin >> i2;
	
//~ Suma, resta, multiplicación, división y resto con int
	cout << "La suma entre " << i1 << " y " << i2 << " es igual a " << i1 + i2 << "\n";
	cout << "La resta entre " << i1 << " y " << i2 << " es igual a " << i1 - i2 << "\n";
	cout << "La multiplicación entre " << i1 << " y " << i2 << " es igual a " << i1 * i2 << "\n";
	cout << "La división entre " << i1 << " y " << i2 << " es igual a " << i1 / i2 << "\n";
	cout << "El resto de la división anterior es: " << i1 % i2 <<endl<<endl;
	
//~ Comparación con int
	if (i1 > i2) {
			cout << i1 << " es mayor que " << i2;
			}
			else {
				if (i1 == i2) {
					cout << i1 << " es igual a " << i2;
					}
					else {
						cout << i1 << " es menor que " << i2;
						}
					}			
	cout << "\n\n";			

//~ Bool
//~ Se pide al usuario que defina valores de verdad para dos argumentos.
//~ En base a eso se determina los valores de verdad de 5 proposiciones.

bool a1;
bool a2;
char valorp, valorq;
	
	cout << "\n\n---------------------\n\n";
	
	cout << "Definir valor de verdad de p (v/f): " <<endl;
	cin >> valorp;
	if (valorp == 'v') {
		a1 = true;}
			else {
				a1 = false;}
	
	cout << "Definir valor de verdad de q (v/f): " << endl;
	cin >> valorq;
	if (valorq == 'v') {
		a2 = true;}
			else {
				a2 = false;}
	cout << endl << endl;
				
	cout << "Tomando esos valores para p y q se obtienen los valores de verdad para las proposiciones: " << endl <<endl;
	cout << "Conjunción de p y q: ";
		if (a1 and a2) {
			cout << "VERDADERA";}
				else {
					cout << "FALSA";
				}
		cout << endl;
		
	cout << "Disyunción incluyente de p y q: ";
		if (a1 or a2) {
			cout << "VERDADERA";}
				else {
					cout << "FALSA";
				}
		cout << endl;
		
	cout << "Disyunción excluyente de p y q: ";
		if (a1 xor a2) {
			cout << "VERDADERA";}
				else {
					cout << "FALSA";
				}
		cout << endl;
		
	cout << "Negación de p: ";
		if (a1) {
			cout << "FALSA";}
				else {
					cout << "VERDADERA";
				}
		cout << endl;

	cout << "Negación de q: ";
		if (a2) {
			cout << "FALSA";}
				else {
					cout << "VERDADERA";
				}

	return 0;
}
