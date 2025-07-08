#ifndef claseram_h
#define claseram_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class ram : public componente {
	private:
		string tipo;
		int capacidad;
		int velocidad;
		int latencia;
	
	public:
		//CONSTRUCTOR
		ram();

		//RETORNAR ATRIBUTOS
		string mostrarTipo();
		int mostrarCapacidad();
		int mostrarVelocidad();
		int mostrarLatencia();
		
		//GENERAR RAM ALEATORIA
		void generarRam();
};

#endif