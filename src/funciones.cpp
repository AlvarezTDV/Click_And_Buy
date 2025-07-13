#include "../include/funciones.h"
#include "../include/includes.h"

#include <iostream>
#include <random>
#include <queue>
#include <semaphore.h>
#include <thread>
#include <chrono>
using namespace std;

//SEMAFOROS
sem_t mutex; //MUTEX PARA PROTEGER LA SECCION CRITICA
sem_t libres;
sem_t ocupados;

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
			cout << "Proveedor Nro " << proveedor << ": Llego una tarjeta grafica " << gpuTemp.mostrarNombre() << endl;
			break;
		}
		case 2: {
			cpu cpuTemp;
			cpuTemp.generarProcesador();
			inventarioCpu.push(cpuTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego un procesador " << cpuTemp.mostrarNombre() << endl;
			break;
		}
		case 3: {
			psu psuTemp;
			psuTemp.generarFuente();
			inventarioPsu.push(psuTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego una fuente " << psuTemp.mostrarNombre() << endl;
			break;
		}
		case 4: {
			ram ramTemp;
			ramTemp.generarRam();
			inventarioRam.push(ramTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego una ram " << ramTemp.mostrarNombre() << endl;
			break;
		}
		case 5: {
			motherboard motherboardTemp;
			motherboardTemp.generarMotherboard();
			inventarioMotherboard.push(motherboardTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego una motherboard " << motherboardTemp.mostrarNombre() << endl;
			break;
		}
		case 6: {
			ssd ssdTemp;
			ssdTemp.generarSsd();
			inventarioSsd.push(ssdTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego una ssd " << ssdTemp.mostrarNombre() << endl;
			break;
		}
		case 7: {
			disipador disipadorTemp;
			disipadorTemp.generarDisipador();
			inventarioDisipador.push(disipadorTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego un disipador " << disipadorTemp.mostrarNombre() << endl;
			break;
		}
		case 8: {
			refrigeracionLiquida refrigeracionLiquidaTemp;
			refrigeracionLiquidaTemp.generarRefrigeracionLiquida();
			inventarioRefrigeracionLiquida.push(refrigeracionLiquidaTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego una refrigeracion liquida " << refrigeracionLiquidaTemp.mostrarNombre() << endl;
			break;
		}
		case 9: {
			gabinete gabineteTemp;
			gabineteTemp.generarGabinete();
			inventarioGabinete.push(gabineteTemp);
			cout << "Proveedor Nro " << proveedor << ": Llego un gabinete " << gabineteTemp.mostrarNombre() << endl;
			break;
		}
	}
}

//FUNCION PARA CONSUMIR COMPONENTES ALEATORIOS
void consumirComponente(int& cliente) {
	int num = NumRandom(1, 9);
	switch (num) {
		case 1: {
			if (inventarioGpu.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una tarjeta grafica " << inventarioGpu.front().mostrarNombre() << endl;
				inventarioGpu.pop();
				cliente++;
			}
			break;
		}
		case 2: {
			if (inventarioCpu.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro un procesador " << inventarioCpu.front().mostrarNombre() << endl;
				inventarioCpu.pop();
				cliente++;
			}
			break;
		}
		case 3: {
			if (inventarioPsu.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una fuente " << inventarioPsu.front().mostrarNombre() << endl;
				inventarioPsu.pop();
				cliente++;
			}
			break;
		}
		case 4: {
			if (inventarioRam.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una ram " << inventarioRam.front().mostrarNombre() << endl;
				inventarioRam.pop();
				cliente++;
			}
			break;
		}
		case 5: {
			if (inventarioMotherboard.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una motherboard " << inventarioMotherboard.front().mostrarNombre() << endl;
				inventarioMotherboard.pop();
				cliente++;
			}
			break;
		}
		case 6: {
			if (inventarioSsd.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una ssd " << inventarioSsd.front().mostrarNombre() << endl;
				inventarioSsd.pop();
				cliente++;
			}
			break;
		}
		case 7: {
			if (inventarioDisipador.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro un disipador " << inventarioDisipador.front().mostrarNombre() << endl;
				inventarioDisipador.pop();
				cliente++;
			}
			break;
		}
		case 8: {
			if (inventarioRefrigeracionLiquida.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro una refrigeracion liquida " << inventarioRefrigeracionLiquida.front().mostrarNombre() << endl;
				inventarioRefrigeracionLiquida.pop();
				cliente++;
			}
			break;
		}
		case 9: {
			if (inventarioGabinete.empty() != true) { //SI NO ESTA VACIO
				cout << "Cliente Nro " << cliente << ": Compro un gabinete " << inventarioGabinete.front().mostrarNombre() << endl;
				inventarioGabinete.pop();
				cliente++;
			}
			break;
		}
	}
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