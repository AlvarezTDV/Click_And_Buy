#ifndef clasedisipador_h
#define clasedisipador_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class disipador : public componente {
	private:
		string compatibilidadSocket;
		int heatPipes;
	
	public:
		//CONSTRUCTOR
		disipador();
		
		//RETORNAR ATRIBUTOS
		string mostrarCompatibilidadSocket();
		int mostrarHeatPipes();
		
		//GENERAR DISIPADOR ALEATORIO
		void generarDisipador();
};

#endif