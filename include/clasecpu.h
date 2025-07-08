#ifndef clasecpu_h
#define clasecpu_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class cpu : public componente {
	private:
		int nucleos;
		int hilos;
		double frecuencia;
		string generacion;
		string socket;
	
	public:
		//CONSTRUCTOR
		cpu();
		
		//RETORNAR ATRIBUTOS
		int mostrarNucleos();
		int mostrarHilos();
		int mostrarFrecuencia();
		string mostrarGeneracion();
		string mostrarSocket();
		
		//GENERAR PROCESADOR ALEATORIO
		void generarProcesador();
};

#endif