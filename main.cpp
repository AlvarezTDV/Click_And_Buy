#include "superclasecomponente.h"
#include "clasegpu.h"
#include "clasecpu.h"

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
	
	cpu c1;
	c1.generarProcesador();
	cout << "Procesador generado:" << endl;
	cout << c1.mostrarNombre() << endl;
	cout << c1.mostrarMarca() << endl;
	cout << c1.mostrarPrecio() << endl;
	cout << c1.mostrarNucleos() << endl;
	cout << c1.mostrarHilos() << endl;
	cout << c1.mostrarFrecuencia() << endl;
	cout << c1.mostrarGeneracion() << endl;
	cout << c1.mostrarSocket() << endl;
	return 0;
}