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
};

/*
struct inventario {
	gpu tarjetas[MAX];
	cpu procesadores[MAX];
	psu fuentesDePoder[MAX];
	ram memoriasRam[MAX];
	motherboard tarjetasMadre[MAX];
	ssd almacenamientos[MAX];
	disipador disipadores[MAX];
	refrigeracionLiquida refrigeracionesLiquidas[MAX];
	gabinete gabinetes[MAX];
	monitor monitores[MAX];
	teclado teclados[MAX];
	mouse ratones[MAX];
	auricular auriculares[MAX];
	microfono microfonos[MAX];
};*/

#endif