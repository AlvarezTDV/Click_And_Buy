#ifndef clasepsu_h
#define clasepsu_h

#include "superclasecomponente.h"
#include <string>
using namespace std;

class psu : public componente {
	private:
		int watts;
		string tieneCertificacion;
		string certificacion;
		string esModular;
	
	public:
		//CONSTRUCTOR
		psu();

		//RETORNAR ATRIBUTOS
		int mostrarWatts();
		string mostrarSiTieneCertificacion();
		string mostrarCertificacion();
		string mostrarSiEsModular();
		
		//GENERAR FUENTE ALEATORIA
		void generarFuente();
};

#endif