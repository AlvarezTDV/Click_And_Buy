#ifndef clasegabinete_h
#define clasegabinete_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class gabinete : public componente {
	private:
		string tamanio;
		string material;
	
	public:
		//CONSTRUCTOR
		gabinete();
		
		//RETORNAR ATRIBUTOS
		string mostrarTamanio();
		string mostrarMaterial();
		
		//GENERAR GABINETE ALEATORIO
		void generarGabinete();
};

#endif