#ifndef clasemotherboard_h
#define clasemotherboard_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class motherboard : public componente {
	private:
		string formato;
		string chipset;
		string socketCpu;
		int slotsRam;
	
	public:
		//CONSTRUCTOR
		motherboard();

		//RETORNAR ATRIBUTOS
		string mostrarFormato();
		string mostrarChipset();
		string mostrarSocketCpu();
		int mostrarSlotsRam();
		
		//GENERAR MOTHERBOARD ALEATORIA
		void generarMotherboard();
};

#endif