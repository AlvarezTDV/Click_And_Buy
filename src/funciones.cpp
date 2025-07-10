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

//ARREGLO QUE ALMACENA GPU
gpu inventarioGpu[10];

//FUNCION PARA GENERAR COMPONENTES ALEATORIOS
void generarComponente() {
	int num = NumRandom(1, 1);
	switch (num) {
		case 1:
			gpu Temp;
			Temp.generarTarjeta();
			inventarioGpu[i] = Temp;
			i++;
			break;
		/*case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;*/
	}
}