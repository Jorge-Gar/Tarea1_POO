#include "Persona.cpp"

#include <iostream>

using namespace std;

class Empleado : Persona{

 // atributos

 private : string codigo_empleado,puesto;
 private : int sueldo;

 // constructor

 public :

 Empleado(){

 }

 Empleado(string nom,string ape,string dir,int tel,string code, string pues, int suel): Persona(nom,ape,dir,tel){ 

 codigo_empleado = code;
 puesto = pues;
 sueldo = suel;
 
 }

  

 // METODOS

 //set (modificar)

 void setNombres(string nom){nombres = nom;}

 void setApellidos(string ape){apellidos = ape;}

 void setDireccion(string dir){direccion = dir;}

 void setTelefono(int tel){telefono = tel;}
 
 void setcodigo_empleado(string code){codigo_empleado = code;}

 void setpuesto(string pues){puesto = pues;}
 
 void setsueldo(int suel){sueldo = suel;}
 
 //get (mostrar)

 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}

 int getTelefono(){	return telefono;}
 
 string getcodigo_empleado(){ return codigo_empleado;}
 
 string getpuesto(){ return puesto;}
 
 int getsueldo(){ return sueldo;}

  

// metodo

void mostrar(){

	cout<<"______________________"<<endl;

	cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<puesto<<","<<sueldo<<endl;

}

};

