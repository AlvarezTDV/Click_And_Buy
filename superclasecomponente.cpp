#include "superclasecomponente.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE LA SUPER CLASE
componente::componente() {
	nombre = "";
	marca = "";
	precio = 0;
}

//RETORNAR EL NOMBRE
string componente::mostrarNombre() {
	return nombre;
}

//RETORNAR LA MARCA
string componente::mostrarMarca() {
	return marca;
}

//RETORNAR EL PRECIO
int componente::mostrarPrecio() {
	return precio;
}