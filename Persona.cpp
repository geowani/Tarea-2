#include"Propietario.cpp"
#include <iostream>
using namespace std;
class Persona: Propietario{
	//atributos
	private : string nombres, apellidos, direccion,fecha,nit;
				int telefono; 
				double cui;
	// constructor
	public :
	Persona(){
	}
	Persona(string nom,string ape,string dir,int tel,string f) : Propietario(nit,cui){
	nombres = nom;
	apellidos = ape;
	direccion = dir; 
	telefono = tel;
	fecha = f;
    }
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFecha(string f){fecha = f;}
	void setCui(double cui){cui = cui;}
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha(){return fecha;}
	double getCui(){return cui;}
	void mostrar(){
		cout<<"__________________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha<<","<<cui<<","<<endl;
	}
};
