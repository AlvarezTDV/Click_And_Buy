#ifndef clasegpu_h
#define clasegpu_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class gpu : public componente {
	private:
		int nucleos;
		int ventiladores;
		int vram;
		string generacion;
	
	public:
		//CONSTRUCTOR
		gpu();
		
		//RETORNAR ATRIBUTOS
		int mostrarNucleos();
		int mostrarVentiladores();
		int mostrarVram();
		string mostrarGeneracion();
		
		//GENERAR TARJETA ALEATORIA
		void generarTarjeta();
};

#endif