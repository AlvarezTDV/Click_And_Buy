#ifndef clasepsu_h
#define clasepsu_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class psu : public componente {
	private:
		int watts;
		bool tieneCertificacion;
		string certificacion;
		bool esModular;
	
	public:
		//CONSTRUCTOR
		psu();

		//RETORNAR ATRIBUTOS
		int mostrarWatts();
		bool mostrarSiTieneCertificacion();
		string mostrarCertificacion();
		bool mostrarSiEsModular();
		
		//GENERAR FUENTE ALEATORIA
		void generarFuente();
};

#endif