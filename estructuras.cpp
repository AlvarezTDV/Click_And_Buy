#include "ESTRUCTURAS_H"

class componente {
	protected:
		string nombre;
		string marca;
		int precio;

};

class gpu : public componente {
	private:
		int nucleos;
		int ventiladores;
		int vram;
		string generacion;
};

class cpu : public componente {
	private:
		int nucleos;
		int frecuencia;
		string generacion;
		string socket;
};