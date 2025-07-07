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

class cpu : public componente {
	private:
		int nucleos;
		int hilos;
		int frecuencia;
		string generacion;
		string socket;
};

class psu : public componente {
	private:
		int watts;
		bool tieneCertificacion;
		string certificacion;
		bool esModular;
};

class ram : public componente {
	private:
		string tipo;
		int capacidad;
		int velocidad;
		int latencia;
};

class motherboard : public componente {
	private:
		string formato;
		string chipset;
		string socketCpu;
		int slotsRam;
};

class ssd : public componente {
	private:
		int capacidad;
		int velocidadLectura;
		int velocidadEscritura;
		string pcie;
};

class disipador : public componente {
	private:
		string compatibilidadSocket;
		int heatPipes;
};

class refrigeracionLiquida : public componente {
	private:
		string compatibilidadSocket;
		int numVentiladores;
};

class gabinete : public componente {
	private:
		string tamanio;
		string material;
};

class monitor : public componente {
	private:
		int tamanioPantalla;
		string resolucion;
		int tasaRefresco;
};

class teclado: public componente {
	private:
		string switches;
		string distribucionTeclas;
		bool iluminacion;
};

class mouse : public componente {
	private:
		int dpi;
		int numBotones;
		int peso;
};

class auricular : public componente {
	private:
		int tiempoRespuesta;
		bool microfono;
};

class microfono : public componente {
	private:
		int tiempoRespuesta;
		bool tieneSoporte;
		bool filtroAntiRuido;
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