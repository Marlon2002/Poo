#include <iostream>
using namespace std;
class Empleado {
	public : 
	string puesto;
	int codigo_empleado, sueldo;
	public:
		Empleado(){
		}
			Empleado( int cg, int sl, string pt ){
				codigo_empleado = cg;
				sueldo= sl;
				puesto = pt;
				
			}
	
			
};
