#ifndef claserefrigeracionliquida_h
#define claserefrigeracionliquida_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class refrigeracionLiquida : public componente {
	private:
		string compatibilidadSocket;
		int numVentiladores;
	
	public:
		//CONSTRUCTOR
		refrigeracionLiquida();
		
		//RETORNAR ATRIBUTOS
		string mostrarCompatibilidadSocket();
		int mostrarNumVentiladores();
		
		//GENERAR REFRIGERACION LIQUIDA ALEATORIA
		void generarRefrigeracionLiquida();
};

#endif