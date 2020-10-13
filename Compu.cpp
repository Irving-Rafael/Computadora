#include <iostream>
#include "Laboratorio.h"
#include "Computadora.h"


int main()
{
    void set_nombre1(string new_name)
{
nombre1=new_name;
}
string get_nombre1()
{
return nombre1;
}
void set_procesador(string new_procesador)
{
procesador=new_procesador;
}
string get_procesador()
{
return procesador;
}
void set_marca(string new_marca)
{
marca=new_marca;
}
string get_marca()
{
return marca;
}
void set_ram(int new_ram)
{
ram=new_ram;
}
int get_ram()
{
return ram;
}
	Computadora a;
	Computadora C;
	C.set_nombre1("All_in_one");
	C.set_procesador("AMD");
	C.set_marca("HP");
	C.set_ram(8);

    string nombre_tmp;
    string procesador_tmp;
    string marca_tmp;
    int ram_tmp;

cout<<"Ingresa el nombre: "<<endl;
cin>>nombre_tmp;
a.set_nombre1(nombre_tmp);

cout<<"Ingresa la marca del procesador: "<<endl;
cin>>procesador_tmp;
a.set_procesador(procesador_tmp);

cout<<"Ingresa la marca del PC: "<<endl;
cin>>marca_tmp;
a.set_marca(marca_tmp);

cout<<"Ingresa los GB de ram: "<<endl;
cin>>ram_tmp;
a.set_ram(ram_tmp);

cout<<"El Nombre registrado es: "<<a.get_nombre1()<<endl;
cout<<"El Procesador registrado es: "<<a.get_procesador()<<endl;
cout<<"La Marca del PC registrada es: "<<a.get_marca()<<endl;
cout<<"La Ram registrada es: "<<a.get_ram()<<"GB"<<endl;

    Laboratorio Comp;
    Comp.agregarComputadora(a);
    Comp.agregarComputadora(C);

    Comp.mostrar();
}
