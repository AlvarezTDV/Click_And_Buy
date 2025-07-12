#ifndef funciones_h
#define funciones_h

#include "includes.h"
using namespace std;

//FUNCIONES QUE SE VAYAN A USAR DE MANERA REPETIDA

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int, int);
void generarComponente();

//INVENTARIO
extern gpu inventarioGpu[10];
extern cpu inventarioCpu[10];
extern psu inventarioPsu[10];
extern ram inventarioRam[10];
extern motherboard inventarioMotherboard[10];

extern int i; //INDICE DEL ARREGLO DE COMPONENTES

#endif