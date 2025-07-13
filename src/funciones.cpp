#include "../include/funciones.h"
#include "../include/includes.h"

#include <iostream>
#include <random>
#include <queue>
#include <semaphore.h>
#include <thread>
using namespace std;

//INVENTARIO
queue <gpu> inventarioGpu;
queue <cpu> inventarioCpu;
queue <psu> inventarioPsu;
queue <ram> inventarioRam;
queue <motherboard> inventarioMotherboard;
queue <ssd> inventarioSsd;
queue <disipador> inventarioDisipador;
queue <refrigeracionLiquida> inventarioRefrigeracionLiquida;
queue <gabinete> inventarioGabinete;

//VENTAS REALIZADAS
queue <gpu> ventasGpu;
queue <cpu> ventasCpu;
queue <psu> ventasPsu;
queue <ram> ventasRam;
queue <motherboard> ventasMotherboard;
queue <ssd> ventasSsd;
queue <disipador> ventasDisipador;
queue <refrigeracionLiquida> ventasRefrigeracionLiquida;
queue <gabinete> ventasGabinete;

//TEXTO TAB
const char tab = '\t';

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int min, int max) {
	thread_local static random_device rd;
	thread_local static mt19937 gen(rd());
	uniform_int_distribution<int> dis(min, max);
	return dis(gen);
}

//FUNCION PARA PRODUCIR COMPONENTES ALEATORIOS
void producirComponente(int proveedor) {
	int num = NumRandom(1, 9);
	switch (num) {
		case 1: {
			gpu gpuTemp;
			gpuTemp.generarTarjeta();
			inventarioGpu.push(gpuTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una tarjeta grafica " << gpuTemp.mostrarNombre() << endl << endl;
			sem_post(&gpuDisponible); //HAY STOCK
			break;
		}
		case 2: {
			cpu cpuTemp;
			cpuTemp.generarProcesador();
			inventarioCpu.push(cpuTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego un procesador " << cpuTemp.mostrarNombre() << endl << endl;
			sem_post(&cpuDisponible); //HAY STOCK
			break;
		}
		case 3: {
			psu psuTemp;
			psuTemp.generarFuente();
			inventarioPsu.push(psuTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una fuente " << psuTemp.mostrarNombre() << endl << endl;
			sem_post(&psuDisponible); //HAY STOCK
			break;
		}
		case 4: {
			ram ramTemp;
			ramTemp.generarRam();
			inventarioRam.push(ramTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una ram " << ramTemp.mostrarNombre() << endl << endl;
			sem_post(&ramDisponible); //HAY STOCK
			break;
		}
		case 5: {
			motherboard motherboardTemp;
			motherboardTemp.generarMotherboard();
			inventarioMotherboard.push(motherboardTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una motherboard " << motherboardTemp.mostrarNombre() << endl << endl;
			sem_post(&motherboardDisponible); //HAY STOCK
			break;
		}
		case 6: {
			ssd ssdTemp;
			ssdTemp.generarSsd();
			inventarioSsd.push(ssdTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una ssd " << ssdTemp.mostrarNombre() << endl << endl;
			sem_post(&ssdDisponible); //HAY STOCK
			break;
		}
		case 7: {
			disipador disipadorTemp;
			disipadorTemp.generarDisipador();
			inventarioDisipador.push(disipadorTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego un disipador " << disipadorTemp.mostrarNombre() << endl << endl;
			sem_post(&disipadorDisponible); //HAY STOCK
			break;
		}
		case 8: {
			refrigeracionLiquida refrigeracionLiquidaTemp;
			refrigeracionLiquidaTemp.generarRefrigeracionLiquida();
			inventarioRefrigeracionLiquida.push(refrigeracionLiquidaTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego una refrigeracion liquida " << refrigeracionLiquidaTemp.mostrarNombre() << endl << endl;
			sem_post(&refrigeracionLiquidaDisponible); //HAY STOCK
			break;
		}
		case 9: {
			gabinete gabineteTemp;
			gabineteTemp.generarGabinete();
			inventarioGabinete.push(gabineteTemp);
			cout << tab << tab << "PROVEEDOR [" << proveedor << "]: Llego un gabinete " << gabineteTemp.mostrarNombre() << endl << endl;
			sem_post(&gabineteDisponible); //HAY STOCK
			break;
		}
	}
}

//FUNCION PARA CONSUMIR COMPONENTES ALEATORIOS
void consumirComponente(int& cliente) {
	int num = NumRandom(1, 9);
	switch (num) {
		case 1: {
			if (sem_trywait(&gpuDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasGpu.push(inventarioGpu.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una tarjeta grafica " << inventarioGpu.front().mostrarNombre() << endl << endl;
				inventarioGpu.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian tarjetas graficas en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 2: {
			if (sem_trywait(&cpuDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasCpu.push(inventarioCpu.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro un procesador " << inventarioCpu.front().mostrarNombre() << endl << endl;
				inventarioCpu.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian procesadores en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 3: {
			if (sem_trywait(&psuDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasPsu.push(inventarioPsu.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una fuente " << inventarioPsu.front().mostrarNombre() << endl << endl;
				inventarioPsu.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian fuentes en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 4: {
			if (sem_trywait(&ramDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasRam.push(inventarioRam.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una ram " << inventarioRam.front().mostrarNombre() << endl << endl;
				inventarioRam.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian rams en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 5: {
			if (sem_trywait(&motherboardDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasMotherboard.push(inventarioMotherboard.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una motherboard " << inventarioMotherboard.front().mostrarNombre() << endl << endl;
				inventarioMotherboard.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian motherboards en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 6: {
			if (sem_trywait(&ssdDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasSsd.push(inventarioSsd.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una ssd " << inventarioSsd.front().mostrarNombre() << endl << endl;
				inventarioSsd.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian ssd en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 7: {
			if (sem_trywait(&disipadorDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasDisipador.push(inventarioDisipador.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro un disipador " << inventarioDisipador.front().mostrarNombre() << endl << endl;
				inventarioDisipador.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian disipadores en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 8: {
			if (sem_trywait(&refrigeracionLiquidaDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasRefrigeracionLiquida.push(inventarioRefrigeracionLiquida.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro una refrigeracion liquida " << inventarioRefrigeracionLiquida.front().mostrarNombre() << endl << endl;
				inventarioRefrigeracionLiquida.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian refrigeraciones liquidas en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
		case 9: {
			if (sem_trywait(&gabineteDisponible) == 0) { //VERIFICA SI SE CONSUMIO, DE LO CONTRARIO SE MANDA MENSAJE DE QUE NO HAY STOCK
				ventasGabinete.push(inventarioGabinete.front());
				cout << tab << tab << "CLIENTE [" << cliente << "]: Compro un gabinete " << inventarioGabinete.front().mostrarNombre() << endl << endl;
				inventarioGabinete.pop();
				cliente++;
			} else {
				cout << tab << tab << "CLIENTE [" << cliente << "]: No pudo comprar nada, no habian gabinetes en ese momento" << endl << endl;
				cliente++;
			}
			break;
		}
	}
}

//SEMAFOROS PRINCIPALES
sem_t mutex; //MUTEX PARA PROTEGER LA SECCION CRITICA
sem_t libres; //PARA EL BUFFER GENERAL (CUANTOS ESPACIOS LIBRES QUEDAN)
sem_t ocupados; //PARA VER CUANTOS ESTAN OCUPADOS

//SEMAFOROS ESPECIFICOS
sem_t gpuDisponible;
sem_t cpuDisponible;
sem_t psuDisponible;
sem_t ramDisponible;
sem_t motherboardDisponible;
sem_t ssdDisponible;
sem_t disipadorDisponible;
sem_t refrigeracionLiquidaDisponible;
sem_t gabineteDisponible;

//INICIALIZAR SEMAFOROS
void inicializarSemaforos() {
	//SEMAFOROS GENERALES
	sem_init(&mutex, 0, 1); //MUTEX PARA PROTEGER LA SC
	sem_init(&libres, 0 , 9); //PARA EL BUFFER GENERAL (CUANTOS ESPACIOS LIBRES QUEDAN)
	sem_init(&ocupados, 0, 0); //PARA VER CUANTOS ESTAN OCUPADOS
	
	//SEMAFOROS ESPECIFICOS
	sem_init(&gpuDisponible, 0, 0);
	sem_init(&cpuDisponible, 0, 0);
	sem_init(&psuDisponible, 0, 0);
	sem_init(&ramDisponible, 0, 0);
	sem_init(&motherboardDisponible, 0, 0);
	sem_init(&ssdDisponible, 0, 0);
	sem_init(&disipadorDisponible, 0, 0);
	sem_init(&refrigeracionLiquidaDisponible, 0, 0);
	sem_init(&gabineteDisponible, 0, 0);
}
	
//PROVEEDOR (PRODUCTOR)
void productor(int n, int proveedor) {
	for (int i = 0; i < n; i++) {
		sem_wait(&libres);
		sem_wait(&mutex);
		producirComponente(proveedor);
		sem_post(&mutex);
		sem_post(&ocupados);
	}
}

//VENTAS (CONSUMIDOR)
void consumidor(int n, int& cliente) {
	for (int i = 0; i < n; i++) {
		sem_wait(&ocupados);
		sem_wait(&mutex);
		consumirComponente(cliente);
		sem_post(&mutex);
		sem_post(&libres);
	}
}