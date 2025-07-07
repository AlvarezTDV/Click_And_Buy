#include "clasecpu.h"
#include "superclasecomponente.h"
#include "funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE CPU
cpu::cpu():componente() {
	nucleos = 0;
	hilos = 0;
	frecuencia = 0.0;
	generacion = "";
	socket = "";
}

//RETORNAR LOS NUCLEOS
int cpu::mostrarNucleos() {
	return nucleos;
}

//RETORNAR LA CANTIDAD DE HILOS
int cpu::mostrarHilos() {
	return hilos;
}

//RETORNAR LA FRECUENCIA
int cpu::mostrarFrecuencia() {
	return frecuencia;
}

//RETORNAR LA GENERACION
string cpu::mostrarGeneracion() {
	return generacion;
}

//RETORNAR EL SOCKET
string cpu::mostrarSocket() {
	return socket;
}

//GENERAR PROCESADOR ALEATORIO
void cpu::generarProcesador() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "Core i9-14900K";
			marca = "INTEL";
			precio = 589;
			nucleos = 24;
			hilos = 32;
			frecuencia = 3.2;
			generacion = "14th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 2:
			nombre = "Ryzen 9 7950X";
			marca = "AMD";
			precio = 549;
			nucleos = 16;
			hilos = 32;
			frecuencia = 4.5;
			generacion = "Zen 4";
			socket = "AM5";
			break;
		case 3:
			nombre = "Core i7-14700K";
			marca = "INTEL";
			precio = 409;
			nucleos = 20;
			hilos = 28;
			frecuencia = 3.4;
			generacion = "14th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 4:
			nombre = "Ryzen 9 7900X";
			marca = "AMD";
			precio = 429;
			nucleos = 12;
			hilos = 24;
			frecuencia = 4.7;
			generacion = "Zen 4";
			socket = "AM5";
			break;
		case 5:
			nombre = "Core i5-14600K";
			marca = "INTEL";
			precio = 319;
			nucleos = 14;
			hilos = 20;
			frecuencia = 3.5;
			generacion = "14th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 6:
			nombre = "Ryzen 7 7800X3D";
			marca = "AMD";
			precio = 449;
			nucleos = 8;
			hilos = 16;
			frecuencia = 4.2;
			generacion = "Zen 4 (3D V-Cache)";
			socket = "AM5";
			break;
		case 7:
			nombre = "Core i5-13600K";
			marca = "INTEL";
			precio = 289;
			nucleos = 14;
			hilos = 20;
			frecuencia = 3.5;
			generacion = "13th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 8:
			nombre = "Ryzen 7 7700X";
			marca = "AMD";
			precio = 349;
			nucleos = 8;
			hilos = 16;
			frecuencia = 4.5;
			generacion = "Zen 4";
			socket = "AM5";
			break;
		case 9:
			nombre = "Core i7-13700K";
			marca = "INTEL";
			precio = 379;
			nucleos = 16;
			hilos = 24;
			frecuencia = 3.4;
			generacion = "13th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 10:
			nombre = "Ryzen 5 7600X";
			marca = "AMD";
			precio = 229;
			nucleos = 6;
			hilos = 12;
			frecuencia = 4.7;
			generacion = "Zen 4";
			socket = "AM5";
			break;
		case 11:
			nombre = "Core i5-12600K";
			marca = "INTEL";
			precio = 259;
			nucleos = 10;
			hilos = 16;
			frecuencia = 3.7;
			generacion = "12th Gen Alder Lake";
			socket = "LGA1700";
			break;
		case 12:
			nombre = "Ryzen 5 5600X";
			marca = "AMD";
			precio = 199;
			nucleos = 6;
			hilos = 12;
			frecuencia = 3.7;
			generacion = "Zen 3";
			socket = "AM4";
			break;
		case 13:
			nombre = "Core i3-14100";
			marca = "INTEL";
			precio = 149;
			nucleos = 4;
			hilos = 8;
			frecuencia = 3.5;
			generacion = "14th Gen Raptor Lake";
			socket = "LGA1700";
			break;
		case 14:
			nombre = "Ryzen 5 7500F";
			marca = "AMD";
			precio = 179;
			nucleos = 6;
			hilos = 12;
			frecuencia = 3.7;
			generacion = "Zen 4";
			socket = "AM5";
			break;
		case 15:
			nombre = "Core i5-12400F";
			marca = "INTEL";
			precio = 189;
			nucleos = 6;
			hilos = 12;
			frecuencia = 2.5;
			generacion = "12th Gen Alder Lake";
			socket = "LGA1700";
			break;
	}
}