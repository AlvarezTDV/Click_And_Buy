#include "../include/funciones.h"
#include "../include/includes.h"

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

//FUNCION PARA GENERAR COMPONENTES ALEATORIOS
void producirComponente() {
	int num = NumRandom(1, 1);
	switch (num) {
		case 1: {
			gpu gpuTemp;
			gpuTemp.generarTarjeta();
			inventarioGpu.push(gpuTemp);
			break;
		}
		case 2: {
			cpu cpuTemp;
			cpuTemp.generarProcesador();
			inventarioCpu.push(cpuTemp);
			break;
		}
		case 3: {
			psu psuTemp;
			psuTemp.generarFuente();
			inventarioPsu.push(psuTemp);
			break;
		}
		case 4: {
			ram ramTemp;
			ramTemp.generarRam();
			inventarioRam.push(ramTemp);
			break;
		}
		case 5: {
			motherboard motherboardTemp;
			motherboardTemp.generarMotherboard();
			inventarioMotherboard.push(motherboardTemp);
			break;
		}
		case 6: {
			ssd ssdTemp;
			ssdTemp.generarSsd();
			inventarioSsd.push(ssdTemp);
			break;
		}
		case 7: {
			disipador disipadorTemp;
			disipadorTemp.generarDisipador();
			inventarioDisipador.push(disipadorTemp);
			break;
		}
		case 8: {
			refrigeracionLiquida refrigeracionLiquidaTemp;
			refrigeracionLiquidaTemp.generarRefrigeracionLiquida();
			inventarioRefrigeracionLiquida.push(refrigeracionLiquidaTemp);
			break;
		}
		case 9: {
			gabinete gabineteTemp;
			gabineteTemp.generarGabinete();
			inventarioGabinete.push(gabineteTemp);
			break;
		}
	}
}