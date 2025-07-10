#ifndef funciones_h
#define funciones_h

#include "superclasecomponente.h"
using namespace std;

//FUNCIONES QUE SE VAYAN A USAR DE MANERA REPETIDA

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int, int);
void generarComponente();

//ARREGLO QUE ALMACENA LOS COMPONENTES
extern componente* componentes[50];
extern int i; //INDICE DEL ARREGLO DE COMPONENTES

#endif