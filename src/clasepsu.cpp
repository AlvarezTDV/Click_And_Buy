#include "../include/clasepsu.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DEL PSU
psu::psu():componente() {
	watts = 0;
	tieneCertificacion = false;
	certificacion = "";
	esModular = false;
}

//RETORNAR LOS WATTS
int psu::mostrarWatts() {
	return watts;
}

//RETORNAR SI TIENE CERTIFICACION
bool psu::mostrarSiTieneCertificacion() {
	return tieneCertificacion;
}

//RETORNAR SU CERTIFICACION
string psu::mostrarCertificacion() {
	return certificacion;
}

//RETORNAR SI ES QUE ES MODULAR
bool psu::mostrarSiEsModular() {
	return esModular;
}

//GENERAR FUENTE ALEATORIA
void psu::generarFuente() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "RM1000x";
			marca = "Corsair";
			precio = 199;
			watts = 1000;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = true;
			break;
		case 2:
			nombre = "SuperNOVA 850 G6";
			marca = "EVGA";
			precio = 149;
			watts = 850;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = true;
			break;
		case 3:
			nombre = "Focus GX-750";
			marca = "Seasonic";
			precio = 129;
			watts = 750;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = true;
			break;
		case 4:
			nombre = "Dark Power Pro 12 1200W";
			marca = "be quiet!";
			precio = 299;
			watts = 1200;
			tieneCertificacion = true;
			certificacion = "80 Plus Titanium";
			esModular = true;
			break;
		case 5:
			nombre = "ROG Thor 850P";
			marca = "ASUS";
			precio = 229;
			watts = 850;
			tieneCertificacion = true;
			certificacion = "80 Plus Platinum";
			esModular = true;
			break;
		case 6:
			nombre = "CV650";
			marca = "Corsair";
			precio = 69;
			watts = 650;
			tieneCertificacion = true;
			certificacion = "80 Plus Bronze";
			esModular = false;
			break;
		case 7:
			nombre = "Pure Power 11 600W";
			marca = "be quiet!";
			precio = 89;
			watts = 600;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = false;
			break;
		case 8:
			nombre = "HX1200";
			marca = "Corsair";
			precio = 249;
			watts = 1200;
			tieneCertificacion = true;
			certificacion = "80 Plus Platinum";
			esModular = true;
			break;
		case 9:
			nombre = "SuperNOVA 650 GT";
			marca = "EVGA";
			precio = 99;
			watts = 650;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = true;
			break;
		case 10:
			nombre = "Prime TX-1000";
			marca = "Seasonic";
			precio = 349;
			watts = 1000;
			tieneCertificacion = true;
			certificacion = "80 Plus Titanium";
			esModular = true;
			break;
		case 11:
			nombre = "BR500";
			marca = "EVGA";
			precio = 49;
			watts = 500;
			tieneCertificacion = true;
			certificacion = "80 Plus Bronze";
			esModular = false;
			break;
		case 12:
			nombre = "System Power 9 700W";
			marca = "be quiet!";
			precio = 79;
			watts = 700;
			tieneCertificacion = true;
			certificacion = "80 Plus Bronze";
			esModular = false;
			break;
		case 13:
			nombre = "Gaming Series 650W";
			marca = "Thermaltake";
			precio = 59;
			watts = 650;
			tieneCertificacion = false;
			certificacion = "Sin certificacion";
			esModular = false;
			break;
		case 14:
			nombre = "MWE Gold 750 V2";
			marca = "Cooler Master";
			precio = 109;
			watts = 750;
			tieneCertificacion = true;
			certificacion = "80 Plus Gold";
			esModular = true;
			break;
		case 15:
			nombre = "Smart Series 500W";
			marca = "Thermaltake";
			precio = 45;
			watts = 500;
			tieneCertificacion = false;
			certificacion = "Sin certificacion";
			esModular = false;
			break;
	}
}