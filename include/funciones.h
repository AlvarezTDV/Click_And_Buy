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

//INICIALIZAR SEMAFOROS
void inicializarSemaforos();

//SEMAFOROS PRINCIPALES
extern sem_t mutex; //MUTEX PARA PROTEGER LA SECCION CRITICA
extern sem_t libres;
extern sem_t ocupados;
extern sem_t numRandom; //MUTEX PARA PROTEGER EL ACCESO A LOS NUMEROS ALEATORIOS

//SEMAFOROS ESPECIFICOS
extern sem_t gpuDisponible;
extern sem_t cpuDisponible;
extern sem_t psuDisponible;
extern sem_t ramDisponible;
extern sem_t motherboardDisponible;
extern sem_t ssdDisponible;
extern sem_t disipadorDisponible;
extern sem_t refrigeracionLiquidaDisponible;
extern sem_t gabineteDisponible;

//VARIABLE PARA SABER QUE NUM DE CLIENTE ES
extern int cliente;

//TEXTO TAB
extern const char tab;

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

//VENTAS REALIZADAS
extern queue <gpu> ventasGpu;
extern queue <cpu> ventasCpu;
extern queue <psu> ventasPsu;
extern queue <ram> ventasRam;
extern queue <motherboard> ventasMotherboard;
extern queue <ssd> ventasSsd;
extern queue <disipador> ventasDisipador;
extern queue <refrigeracionLiquida> ventasRefrigeracionLiquida;
extern queue <gabinete> ventasGabinete;

#endif