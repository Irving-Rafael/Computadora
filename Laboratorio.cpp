#include "Laboratorio.h"
#include "Computadora.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont]= p;
        cont++;
    }
    else {
        cout<<"Ya no hay espacio"<<endl;
    }
}
void Laboratorio::mostrar()
{
    for (size_t i=0; i<cont; i++){
        Computadora &p = arreglo[i];
        cout<<"Nombre"<<p.get_nombre1()<<endl;
        cout<<"Procesador"<<p.get_procesador()<<endl;
        cout<<"Marca"<<p.get_marca()<<endl;
        cout<<"Ram"<<p.get_ram()<<endl;
    }
}
