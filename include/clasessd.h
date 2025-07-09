#ifndef clasessd_h
#define clasessd_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class ssd : public componente {
	private:
		int capacidad;
		int velocidadLectura;
		int velocidadEscritura;
		string pcie;
	
	public:
		//CONSTRUCTOR
		ssd();
		
		//RETORNAR ATRIBUTOS
		int mostrarCapacidad();
		int mostrarVelocidadLectura();
		int mostrarVelocidadEscritura();
		string mostrarPcie();
		
		//GENERAR SSD ALEATORIO
		void generarSsd();
};

#endif