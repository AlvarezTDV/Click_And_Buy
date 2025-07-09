#include "../include/clasedisipador.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE DISIPADOR
disipador::disipador():componente() {
	compatibilidadSocket = "";
	heatPipes = 0;
}

//RETORNAR COMPATIBILIDAD CON SOCKETS
string disipador::mostrarCompatibilidadSocket() {
	return compatibilidadSocket;
}

//RETORNAR HEAT PIPES
int disipador::mostrarHeatPipes() {
	return heatPipes;
}

//GENERAR DISIPADOR ALEATORIO
void disipador::generarDisipador() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "NH-D15 chromax.black";
			marca = "Noctua";
			precio = 109;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 6;
			break;
		case 2:
			nombre = "Dark Rock Pro 4";
			marca = "be quiet!";
			precio = 89;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 7;
			break;
		case 3:
			nombre = "Hyper 212 Black Edition";
			marca = "Cooler Master";
			precio = 39;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 4;
			break;
		case 4:
			nombre = "NH-U12S Redux";
			marca = "Noctua";
			precio = 49;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 4;
			break;
		case 5:
			nombre = "Dark Rock Slim";
			marca = "be quiet!";
			precio = 69;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 6;
			break;
		case 6:
			nombre = "Scythe Fuma 2";
			marca = "Scythe";
			precio = 59;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 6;
			break;
		case 7:
			nombre = "Pure Rock 2";
			marca = "be quiet!";
			precio = 39;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 4;
			break;
		case 8:
			nombre = "NH-U9S";
			marca = "Noctua";
			precio = 59;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 5;
			break;
		case 9:
			nombre = "MasterAir MA610P";
			marca = "Cooler Master";
			precio = 79;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 6;
			break;
		case 10:
			nombre = "Shadow Rock 3";
			marca = "be quiet!";
			precio = 49;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 5;
			break;
		case 11:
			nombre = "Arctic Freezer 34 eSports DUO";
			marca = "Arctic";
			precio = 45;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 4;
			break;
		case 12:
			nombre = "Wraith Prism";
			marca = "AMD";
			precio = 35;
			compatibilidadSocket = "AM4, AM5";
			heatPipes = 4;
			break;
		case 13:
			nombre = "Gammaxx 400 V2";
			marca = "DeepCool";
			precio = 29;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 4;
			break;
		case 14:
			nombre = "Pure Rock LP";
			marca = "be quiet!";
			precio = 29;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 3;
			break;
		case 15:
			nombre = "U12A";
			marca = "Noctua";
			precio = 119;
			compatibilidadSocket = "AM4, AM5, LGA1700, LGA1200";
			heatPipes = 7;
			break;
	}
}