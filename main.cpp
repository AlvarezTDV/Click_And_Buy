#include "include/includes.h"

#include <iostream>
using namespace std;

int i = 0; //INDICE DEL ARREGLO DE COMPONENTES

int main() {
	//PROBANDO SI SE GENERAN LOS COMPONENTES
	gpu g1;
	g1.generarTarjeta();
	cout << "Tarjeta generada:" << endl;
	cout << g1.mostrarNombre() << endl;
	cout << g1.mostrarMarca() << endl;
	cout << g1.mostrarPrecio() << endl;
	cout << g1.mostrarNucleos() << endl;
	cout << g1.mostrarVentiladores() << endl;
	cout << g1.mostrarVram() << endl;
	cout << g1.mostrarGeneracion() << endl << endl;
	
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
	cout << c1.mostrarSocket() << endl << endl;
	
	psu p1;
	p1.generarFuente();
	cout << "Fuente generado" << endl;
	cout << p1.mostrarNombre() << endl;
	cout << p1.mostrarMarca() << endl;
	cout << p1.mostrarPrecio() << endl;
	cout << p1.mostrarWatts() << endl;
	cout << p1.mostrarSiTieneCertificacion() << endl;
	cout << p1.mostrarCertificacion() << endl;
	cout << p1.mostrarSiEsModular() << endl << endl;
	
	ram r1;
	r1.generarRam();
	cout << "Ram generada" << endl;
	cout << r1.mostrarNombre() << endl;
	cout << r1.mostrarMarca() << endl;
	cout << r1.mostrarPrecio() << endl;
	cout << r1.mostrarTipo() << endl;
	cout << r1.mostrarCapacidad() << endl;
	cout << r1.mostrarVelocidad() << endl;
	cout << r1.mostrarLatencia() << endl << endl;
	
	motherboard m1;
	m1.generarMotherboard();
	cout << "Mother generada" << endl;
	cout << m1.mostrarNombre() << endl;
	cout << m1.mostrarMarca() << endl;
	cout << m1.mostrarPrecio() << endl;
	cout << m1.mostrarFormato() << endl;
	cout << m1.mostrarChipset() << endl;
	cout << m1.mostrarSocketCpu() << endl;
	cout << m1.mostrarSlotsRam() << endl << endl;
	
	ssd s1;
	s1.generarSsd();
	cout << "SSD generada" << endl;
	cout << s1.mostrarNombre() << endl;
	cout << s1.mostrarMarca() << endl;
	cout << s1.mostrarPrecio() << endl;
	cout << s1.mostrarCapacidad() << endl;
	cout << s1.mostrarVelocidadLectura() << endl;
	cout << s1.mostrarVelocidadEscritura() << endl;
	cout << s1.mostrarPcie() << endl << endl;
	
	disipador d1;
	d1.generarDisipador();
	cout << "Disipador generado" << endl;
	cout << d1.mostrarNombre() << endl;
	cout << d1.mostrarMarca() << endl;
	cout << d1.mostrarPrecio() << endl;
	cout << d1.mostrarCompatibilidadSocket() << endl;
	cout << d1.mostrarHeatPipes() << endl << endl;
	
	refrigeracionLiquida rl1;
	rl1.generarRefrigeracionLiquida();
	cout << "Refrigeracion liquida generado" << endl;
	cout << rl1.mostrarNombre() << endl;
	cout << rl1.mostrarMarca() << endl;
	cout << rl1.mostrarPrecio() << endl;
	cout << rl1.mostrarCompatibilidadSocket() << endl;
	cout << rl1.mostrarNumVentiladores() << endl << endl;
	
	gabinete ga1;
	ga1.generarGabinete();
	cout << "Gabinete generado" << endl;
	cout << ga1.mostrarNombre() << endl;
	cout << ga1.mostrarMarca() << endl;
	cout << ga1.mostrarPrecio() << endl;
	cout << ga1.mostrarTamanio() << endl;
	cout << ga1.mostrarMaterial() << endl << endl;
	
	generarComponente();
	cout << "Tarjeta generada:" << endl;
	cout << inventarioGpu[0].mostrarNombre() << endl;
	cout << inventarioGpu[0].mostrarMarca() << endl;
	cout << inventarioGpu[0].mostrarPrecio() << endl;
	cout << inventarioGpu[0].mostrarNucleos() << endl;
	cout << inventarioGpu[0].mostrarVentiladores() << endl;
	cout << inventarioGpu[0].mostrarVram() << endl;
	cout << inventarioGpu[0].mostrarGeneracion() << endl << endl;
	
	return 0;
}