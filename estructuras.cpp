#include "ESTRUCTURAS_H"

class componenteYPeriferico {
	protected:
		string nombre;
		string marca;
		int precio;
};

class gpu : public componenteYPeriferico {
	private:
		int nucleos;
		int ventiladores;
		int vram;
		string generacion;
};

class cpu : public componenteYPeriferico {
	private:
		int nucleos;
		int hilos;
		int frecuencia;
		string generacion;
		string socket;
};

class psu : public componenteYPeriferico {
	private:
		int watts;
		bool tieneCertificacion;
		string certificacion;
		bool esModular;
};

class ram : public componenteYPeriferico {
	private:
		string tipo;
		int capacidad;
		int velocidad;
		int latencia;
};

class motherboard : public componenteYPeriferico {
	private:
		string formato;
		string chipset;
		string socketCpu;
		int slotsRam;
};

class ssd : public componenteYPeriferico {
	private:
		int capacidad;
		int velocidadLectura;
		int velocidadEscritura;
		string pcie;
};

class disipador : public componenteYPeriferico {
	private:
		string compatibilidadSocket;
		int heatPipes;
};

class refrigeracionLiquida : public componenteYPeriferico {
	private:
		string compatibilidadSocket;
		int numVentiladores;
};

class gabinete : public componenteYPeriferico {
	private:
		string tamanio;
		string material;
};

class monitor : public componenteYPeriferico {
	private:
		int tamanioPantalla;
		string resolucion;
		int tasaRefresco;
};

class teclado: public componenteYPeriferico {
	private:
		string switches;
		string distribucionTeclas;
		bool iluminacion;
};

class mouse : public componenteYPeriferico {
	private:
		int dpi;
		int numBotones;
		int peso;
};

class auricular : public componenteYPeriferico {
	private:
		int tiempoRespuesta;
		bool microfono;
};

class microfono : public componenteYPeriferico {
	private:
		int tiempoRespuesta;
		bool tieneSoporte;
		bool filtroAntiRuido;
};