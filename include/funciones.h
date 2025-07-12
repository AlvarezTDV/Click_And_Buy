#ifndef funciones_h
#define funciones_h

#include "includes.h"
#include <queue>
using namespace std;

//FUNCIONES QUE SE VAYAN A USAR DE MANERA REPETIDA

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int, int);
void producirComponente();

//INVENTARIO
extern queue <gpu> inventarioGpu;
extern queue <cpu> inventarioCpu;
extern queue <psu> inventarioPsu;
extern queue <ram> inventarioRam;
extern queue <motherboard> inventarioMotherboard;
extern queue <ssd> inventarioSsd;
extern queue <disipador> inventarioDisipador;
extern queue <refrigeracionLiquida> inventarioRefrigeracionLiquida;
extern queue <gabinete> inventarioGabinete;

#endif