#include "../include/funciones.h"
#include "../include/includes.h"

#include <random>
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
gpu inventarioGpu[10];
cpu inventarioCpu[10];
psu inventarioPsu[10];
ram inventarioRam[10];
motherboard inventarioMotherboard[10];

//FUNCION PARA GENERAR COMPONENTES ALEATORIOS
void generarComponente() {
	int num = NumRandom(5, 5);
	switch (num) {
		case 1: {
			gpu gpuTemp;
			gpuTemp.generarTarjeta();
			inventarioGpu[i] = gpuTemp;
			i++;
			break;
		}
		case 2: {
			cpu cpuTemp;
			cpuTemp.generarProcesador();
			inventarioCpu[i] = cpuTemp;
			i++;
			break;
		}
		case 3: {
			psu psuTemp;
			psuTemp.generarFuente();
			inventarioPsu[i] = psuTemp;
			i++;
			break;
		}
		case 4: {
			ram ramTemp;
			ramTemp.generarRam();
			inventarioRam[i] = ramTemp;
			i++;
			break;
		}
		case 5: {
			motherboard motherboardTemp;
			motherboardTemp.generarMotherboard();
			inventarioMotherboard[i] = motherboardTemp;
			i++;
			break;
		}
		/*case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;*/
	}
}