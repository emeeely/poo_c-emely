#include"Empleado.cpp"
#include  <iostream>
using namespace std;
main(){
	string codigo_empleado,nombres,apellidos,puesto,direccion;
	int sueldo;
	int telefono;
	cout<<"Ingrese Codigo del empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese Nombre: ";
	cin>>nombres;
	cout<<"Ingrese Apellido: ";
	cin>>apellidos;
	cout<<"Ingrese Sueldo: Q ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codigo_empleado,sueldo, puesto);
	obj.mostrar();

}

