#include "clasegpu.h"
#include "superclasecomponente.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE GPU
gpu::gpu(int nu, int ven, int vr, string g, string n, string m, int p):componente(n, m, p) {
	nucleos = nu;
	ventiladores = ven;
	vram = vr;
	generacion = g;
}

//RETORNAR LOS NUCLEOS
int gpu::mostrarNucleos() {
	return nucleos;
}

//RETORNAR LA CANTIDAD DE VENTILADORES
int gpu::mostrarVentiladores() {
	return ventiladores;
}

//RETORNAR LA VRAM
int gpu::mostrarVram() {
	return vram;
}

//RETORNAR LA GENERACION
string gpu::mostrarGeneracion() {
	return generacion;
}