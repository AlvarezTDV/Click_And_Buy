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
		int mostrarNucleosGpu() override;
		int mostrarVentiladores() override;
		int mostrarVram() override;
		string mostrarGeneracion() override;
		
		//GENERAR TARJETA ALEATORIA
		void generarTarjeta();
};

#endif