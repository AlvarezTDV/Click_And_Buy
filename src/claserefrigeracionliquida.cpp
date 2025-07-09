#include "../include/claserefrigeracionliquida.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE LA REFRIGERACION LIQUIDA
refrigeracionLiquida::refrigeracionLiquida():componente() {
	compatibilidadSocket = "";
	numVentiladores = 0;
}

//RETORNAR COMPATIBILIDAD CON SOCKETS
string refrigeracionLiquida::mostrarCompatibilidadSocket() {
	return compatibilidadSocket;
}

//RETORNAR NUMERO DE VENTILADORES
int refrigeracionLiquida::mostrarNumVentiladores() {
	return numVentiladores;
}

//GENERAR REFRIGERACION LIQUIDA ALEATORIA
void refrigeracionLiquida::generarRefrigeracionLiquida() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "H150i RGB Pro XT";
			marca = "Corsair";
			precio = 189;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 3;
			break;
		case 2:
			nombre = "NZXT Kraken X73";
			marca = "NZXT";
			precio = 199;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 3;
			break;
		case 3:
			nombre = "MasterLiquid ML240L V2";
			marca = "Cooler Master";
			precio = 79;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 4:
			nombre = "ROG Ryujin II 360";
			marca = "ASUS";
			precio = 299;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 3;
			break;
		case 5:
			nombre = "Castle 280EX";
			marca = "DeepCool";
			precio = 129;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 6:
			nombre = "H100i RGB Pro XT";
			marca = "Corsair";
			precio = 139;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 7:
			nombre = "Liquid Freezer II 360";
			marca = "Arctic";
			precio = 119;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 3;
			break;
		case 8:
			nombre = "Kraken Z63";
			marca = "NZXT";
			precio = 249;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 9:
			nombre = "Silent Loop 2 280mm";
			marca = "be quiet!";
			precio = 159;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 10:
			nombre = "MasterLiquid ML360R RGB";
			marca = "Cooler Master";
			precio = 149;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 3;
			break;
		case 11:
			nombre = "Liquid Freezer II 240";
			marca = "Arctic";
			precio = 89;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 12:
			nombre = "TH240 ARGB";
			marca = "Thermaltake";
			precio = 99;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 13:
			nombre = "Kraken X53";
			marca = "NZXT";
			precio = 129;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 14:
			nombre = "Captain 240 Pro";
			marca = "DeepCool";
			precio = 109;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 2;
			break;
		case 15:
			nombre = "H60 v2";
			marca = "Corsair";
			precio = 69;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			numVentiladores = 1;
			break;
	}
}