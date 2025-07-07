#include "superclasecomponente.h"
#include "clasegpu.h"

#include <iostream>
using namespace std;

int main() {
	gpu g1;
	g1.generarTarjeta();
	cout << "Tarjeta generada:" << endl;
	cout << g1.mostrarNombre() << endl;
	cout << g1.mostrarMarca() << endl;
	cout << g1.mostrarPrecio() << endl;
	cout << g1.mostrarNucleos() << endl;
	cout << g1.mostrarVentiladores() << endl;
	cout << g1.mostrarVram() << endl;
	cout << g1.mostrarGeneracion() << endl;
	return 0;
}