#include <iostream>
using namespace std;

class Propietario{
	//atributos
	protected : string nit;
	double cui;
			
	protected :
	Propietario(){
		}
		Propietario (string n,double cui){
		nit = n;
		cui = cui;
		}
		 
//metodo 
	void mostrar ();
};
