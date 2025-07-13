#ifndef funciones_h
#define funciones_h

#include "includes.h"

#include <queue>
#include <semaphore.h>
using namespace std;

//FUNCIONES QUE SE VAYAN A USAR DE MANERA REPETIDA

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int, int);

//PRODUCIR COMPONENTE
void producirComponente(int);

//CONSUMIR COMPONENTE
void consumirComponente();

//PRODUCTOR O PROVEEDOR
void productor(int, int);

//CONSUMIDOR O VENTAS
void consumidor(int, int&);

//SEMAFOROS
extern sem_t mutex; //MUTEX PARA PROTEGER LA SECCION CRITICA
extern sem_t libres;
extern sem_t ocupados;
extern sem_t numRandom; //MUTEX PARA PROTEGER EL ACCESO A LOS NUMEROS ALEATORIOS
extern int cliente;

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