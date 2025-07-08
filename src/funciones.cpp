#include "../include/funciones.h"

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