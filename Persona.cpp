#include "Empleado.cpp"
#include <iostream>
using namespace std;
class Persona : Empleado{
	// atributos
	protected : string nombres,apellidos,direccion;
				int telefono;
	// costructor
	protected : 
		Persona(){
		}
		Persona(string nom,string ape,string dir,int tel): Empleado(cg,sl,pt){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	

	// metodos
	void mostrar(){
	cout<<"______________________"<<endl;
	cout<<codigo_empleado<<","<<sueldo<<","<<puesto<<endl;
	}
	
};
