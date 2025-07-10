#ifndef superclasecomponente_h
#define superclasecomponente_h

#include <string>
using namespace std;

const int MAX = 10;

//SUPER CLASE
class componente {
	protected:
		string nombre;
		string marca;
		int precio;
		
	public:
		//CONSTRUCTOR
		componente();
		
		//RETORNAR ATRIBUTOS
		string mostrarNombre();
		string mostrarMarca();
		int mostrarPrecio();
		
		//FUNCIONES VIRTUALES (GPU)
		virtual int mostrarNucleosGpu() = 0;
		virtual int mostrarVentiladores() = 0;
		virtual int mostrarVram() = 0;
		virtual string mostrarGeneracion() = 0;
};

#endif