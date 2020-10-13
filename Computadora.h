#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iostream>

using namespace std;
class Computadora
{
public://metodos
Computadora ()//constructor implicito
{
nombre1=" ";
procesador= " ";
marca= " ";
ram = 0;
}
explicit Computadora(string no, string pro,string ma, int r):nombre1{no},procesador{pro},marca{ma},ram{r}
{
nombre1=no;
procesador=pro;
marca=ma;
ram=r;
}


private://atributos
string nombre1;
string procesador;
string marca;
int ram;
};


#endif // COMPUTADORA_H_INCLUDED
