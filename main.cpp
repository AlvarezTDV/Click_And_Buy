#include "include/includes.h"

#include <iostream>
#include <thread>
#include <semaphore.h>
using namespace std;

int cliente = 1;

int main() {
	//SEMAFOROS
	sem_init(&mutex, 0, 1);
	sem_init(&libres, 0 , 9);
	sem_init(&ocupados, 0, 0);
	
	//PRODUCTORES
	thread t1(productor, 3, 1);
	thread t2(productor, 3, 2);
	thread t3(productor, 3, 3);
	
	//CONSUMIDORES
	thread t4(consumidor, 3, ref(cliente));
	thread t5(consumidor, 3, ref(cliente));
	thread t6(consumidor, 3, ref(cliente));
	
	t1.join();
	t2.join();
	t3.join();
	
	t4.join();
	t5.join();
	t6.join();
	
	//PROBANDO SI SE GENERAN LOS COMPONENTES
	/*gpu g1;
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
	cout << ga1.mostrarMaterial() << endl << endl;*/
	
	/*
	producirComponente();
	consumirComponente();
	*/
	/*
	cout << "Tarjeta generada:" << endl;
	cout << inventarioGpu.front().mostrarNombre() << endl;
	cout << inventarioGpu.front().mostrarMarca() << endl;
	cout << inventarioGpu.front().mostrarPrecio() << endl;
	cout << inventarioGpu.front().mostrarNucleos() << endl;
	cout << inventarioGpu.front().mostrarVentiladores() << endl;
	cout << inventarioGpu.front().mostrarVram() << endl;
	cout << inventarioGpu.front().mostrarGeneracion() << endl << endl;
	
	cout << "Procesador generado:" << endl;
	cout << inventarioCpu.front().mostrarNombre() << endl;
	cout << inventarioCpu.front().mostrarMarca() << endl;
	cout << inventarioCpu.front().mostrarPrecio() << endl;
	cout << inventarioCpu.front().mostrarNucleos() << endl;
	cout << inventarioCpu.front().mostrarHilos() << endl;
	cout << inventarioCpu.front().mostrarFrecuencia() << endl;
	cout << inventarioCpu.front().mostrarGeneracion() << endl;
	cout << inventarioCpu.front().mostrarSocket() << endl << endl;
	
	cout << "Fuente generado" << endl;
	cout << inventarioPsu.front().mostrarNombre() << endl;
	cout << inventarioPsu.front().mostrarMarca() << endl;
	cout << inventarioPsu.front().mostrarPrecio() << endl;
	cout << inventarioPsu.front().mostrarWatts() << endl;
	cout << inventarioPsu.front().mostrarSiTieneCertificacion() << endl;
	cout << inventarioPsu.front().mostrarCertificacion() << endl;
	cout << inventarioPsu.front().mostrarSiEsModular() << endl << endl;
	
	cout << "Ram generada" << endl;
	cout << inventarioRam.front().mostrarNombre() << endl;
	cout << inventarioRam.front().mostrarMarca() << endl;
	cout << inventarioRam.front().mostrarPrecio() << endl;
	cout << inventarioRam.front().mostrarTipo() << endl;
	cout << inventarioRam.front().mostrarCapacidad() << endl;
	cout << inventarioRam.front().mostrarVelocidad() << endl;
	cout << inventarioRam.front().mostrarLatencia() << endl << endl;
	
	cout << "Mother generada" << endl;
	cout << inventarioMotherboard.front().mostrarNombre() << endl;
	cout << inventarioMotherboard.front().mostrarMarca() << endl;
	cout << inventarioMotherboard.front().mostrarPrecio() << endl;
	cout << inventarioMotherboard.front().mostrarFormato() << endl;
	cout << inventarioMotherboard.front().mostrarChipset() << endl;
	cout << inventarioMotherboard.front().mostrarSocketCpu() << endl;
	cout << inventarioMotherboard.front().mostrarSlotsRam() << endl << endl;
	
	cout << "SSD generada" << endl;
	cout << inventarioSsd.front().mostrarNombre() << endl;
	cout << inventarioSsd.front().mostrarMarca() << endl;
	cout << inventarioSsd.front().mostrarPrecio() << endl;
	cout << inventarioSsd.front().mostrarCapacidad() << endl;
	cout << inventarioSsd.front().mostrarVelocidadLectura() << endl;
	cout << inventarioSsd.front().mostrarVelocidadEscritura() << endl;
	cout << inventarioSsd.front().mostrarPcie() << endl << endl;
	
	cout << "Disipador generado" << endl;
	cout << inventarioDisipador.front().mostrarNombre() << endl;
	cout << inventarioDisipador.front().mostrarMarca() << endl;
	cout << inventarioDisipador.front().mostrarPrecio() << endl;
	cout << inventarioDisipador.front().mostrarCompatibilidadSocket() << endl;
	cout << inventarioDisipador.front().mostrarHeatPipes() << endl << endl;
	
	cout << "Refrigeracion liquida generado" << endl;
	cout << inventarioRefrigeracionLiquida.front().mostrarNombre() << endl;
	cout << inventarioRefrigeracionLiquida.front().mostrarMarca() << endl;
	cout << inventarioRefrigeracionLiquida.front().mostrarPrecio() << endl;
	cout << inventarioRefrigeracionLiquida.front().mostrarCompatibilidadSocket() << endl;
	cout << inventarioRefrigeracionLiquida.front().mostrarNumVentiladores() << endl << endl;
	
	cout << "Gabinete generado" << endl;
	cout << inventarioGabinete.front().mostrarNombre() << endl;
	cout << inventarioGabinete.front().mostrarMarca() << endl;
	cout << inventarioGabinete.front().mostrarPrecio() << endl;
	cout << inventarioGabinete.front().mostrarTamanio() << endl;
	cout << inventarioGabinete.front().mostrarMaterial() << endl << endl;*/
	
	return 0;
}