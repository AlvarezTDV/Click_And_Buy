#include "superclasecomponente.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE LA SUPER CLASE
componenteYPeriferico::componenteYPeriferico(string n, string m, int p) {
	nombre = n;
	marca = m;
	precio = p;
}

//RETORNAR EL NOMBRE
string componenteYPeriferico::mostrarNombre() {
	return nombre;
}

//RETORNAR LA MARCA
string componenteYPeriferico::mostrarMarca() {
	return marca;
}

//RETORNAR EL PRECIO
int componenteYPeriferico::mostrarPrecio() {
	return precio;
}