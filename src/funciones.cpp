#include "../include/funciones.h"
#include "../include/includes.h"

#include <iostream>
#include <random>
#include <queue>
using namespace std;

//FUNCIONES QUE SE VAYAN A USAR DE MANERA REPETIDA

//GENERAR NUMEROS ALEATORIOS
int NumRandom(int min, int max) {
	static random_device rd;
	static mt19937 gen(rd());
	uniform_int_distribution<int> dis(min, max);
	return dis(gen);
}

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

//FUNCION PARA PRODUCIR COMPONENTES ALEATORIOS
void producirComponente() {
	int num = NumRandom(1, 9);
	switch (num) {
		case 1: {
			gpu gpuTemp;
			gpuTemp.generarTarjeta();
			inventarioGpu.push(gpuTemp);
			cout << "Llego una tarjeta grafica " << inventarioGpu.front().mostrarNombre() << endl;
			break;
		}
		case 2: {
			cpu cpuTemp;
			cpuTemp.generarProcesador();
			inventarioCpu.push(cpuTemp);
			cout << "Llego un procesador " << inventarioCpu.front().mostrarNombre() << endl;
			break;
		}
		case 3: {
			psu psuTemp;
			psuTemp.generarFuente();
			inventarioPsu.push(psuTemp);
			cout << "Llego una fuente " << inventarioPsu.front().mostrarNombre() << endl;
			break;
		}
		case 4: {
			ram ramTemp;
			ramTemp.generarRam();
			inventarioRam.push(ramTemp);
			cout << "Llego una ram " << inventarioRam.front().mostrarNombre() << endl;
			break;
		}
		case 5: {
			motherboard motherboardTemp;
			motherboardTemp.generarMotherboard();
			inventarioMotherboard.push(motherboardTemp);
			cout << "Llego una motherboard " << inventarioMotherboard.front().mostrarNombre() << endl;
			break;
		}
		case 6: {
			ssd ssdTemp;
			ssdTemp.generarSsd();
			inventarioSsd.push(ssdTemp);
			cout << "Llego una ssd " << inventarioSsd.front().mostrarNombre() << endl;
			break;
		}
		case 7: {
			disipador disipadorTemp;
			disipadorTemp.generarDisipador();
			inventarioDisipador.push(disipadorTemp);
			cout << "Llego un disipador " << inventarioDisipador.front().mostrarNombre() << endl;
			break;
		}
		case 8: {
			refrigeracionLiquida refrigeracionLiquidaTemp;
			refrigeracionLiquidaTemp.generarRefrigeracionLiquida();
			inventarioRefrigeracionLiquida.push(refrigeracionLiquidaTemp);
			cout << "Llego una refrigeracion liquida " << inventarioRefrigeracionLiquida.front().mostrarNombre() << endl;
			break;
		}
		case 9: {
			gabinete gabineteTemp;
			gabineteTemp.generarGabinete();
			inventarioGabinete.push(gabineteTemp);
			cout << "Llego un gabinete " << inventarioGabinete.front().mostrarNombre() << endl;
			break;
		}
	}
}

//FUNCION PARA CONSUMIR COMPONENTES ALEATORIOS
void consumirComponente() {
	int num = NumRandom(1, 9);
	switch (num) {
		case 1: {
			if (inventarioGpu.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio una tarjeta grafica " << inventarioGpu.front().mostrarNombre() << endl;
				inventarioGpu.pop();
			}
			break;
		}
		case 2: {
			if (inventarioCpu.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio un procesador " << inventarioCpu.front().mostrarNombre() << endl;
				inventarioCpu.pop();
			}
			break;
		}
		case 3: {
			if (inventarioPsu.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio una fuente " << inventarioPsu.front().mostrarNombre() << endl;
				inventarioPsu.pop();
			}
			break;
		}
		case 4: {
			if (inventarioRam.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio una ram " << inventarioRam.front().mostrarNombre() << endl;
				inventarioRam.pop();
			}
			break;
		}
		case 5: {
			if (inventarioMotherboard.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio una motherboard " << inventarioMotherboard.front().mostrarNombre() << endl;
				inventarioMotherboard.pop();
			}
			break;
		}
		case 6: {
			if (inventarioSsd.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio una ssd " << inventarioSsd.front().mostrarNombre() << endl;
				inventarioSsd.pop();
			}
			break;
		}
		case 7: {
			if (inventarioDisipador.empty() != true) { //SI NO ESTA VACIO
				cout << "Se vendio un disipador " << inventarioDisipador.front().mostrarNombre() << endl;
				inventarioDisipador.pop();
			}
			break;
		}
		case 8: {
			if (inventarioRefrigeracionLiquida.empty() != true) { //SI NO ESTA VACIO
				cout << "Llego una refrigeracion liquida " << inventarioRefrigeracionLiquida.front().mostrarNombre() << endl;
				inventarioRefrigeracionLiquida.pop();
			}
			break;
		}
		case 9: {
			if (inventarioGabinete.empty() != true) { //SI NO ESTA VACIO
				cout << "Llego un gabinete " << inventarioGabinete.front().mostrarNombre() << endl;
				inventarioGabinete.pop();
			}
			break;
		}
	}
}