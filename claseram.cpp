#include "claseram.h"
#include "superclasecomponente.h"
#include "funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DEL PSU
ram::ram():componente() {
	tipo = "";
	capacidad = 0;
	velocidad = 0;
	latencia = 0;
}

//RETORNAR EL TIPO DE RAM
string ram::mostrarTipo() {
	return tipo;
}

//RETORNAR LA CAPACIDAD
int ram::mostrarCapacidad() {
	return capacidad;
}

//RETORNA LA VELOCIDAD
int ram::mostrarVelocidad() {
	return velocidad;
}

//RETORNA LA LATENCIA
int ram::mostrarLatencia() {
	return latencia;
}

//GENERAR RAM ALEATORIA
void ram::generarRam() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "Vengeance LPX 32GB Kit";
			marca = "Corsair";
			precio = 119;
			tipo = "DDR4";
			capacidad = 32;
			velocidad = 3200;
			latencia = 16;
			break;
		case 2:
			nombre = "Trident Z5 RGB 32GB Kit";
			marca = "G.Skill";
			precio = 189;
			tipo = "DDR5";
			capacidad = 32;
			velocidad = 6000;
			latencia = 30;
			break;
		case 3:
			nombre = "Ripjaws V 16GB Kit";
			marca = "G.Skill";
			precio = 59;
			tipo = "DDR4";
			capacidad = 16;
			velocidad = 3600;
			latencia = 18;
			break;
		case 4:
			nombre = "Dominator Platinum RGB 64GB Kit";
			marca = "Corsair";
			precio = 399;
			tipo = "DDR5";
			capacidad = 64;
			velocidad = 5600;
			latencia = 36;
			break;
		case 5:
			nombre = "HyperX Fury 16GB Kit";
			marca = "Kingston";
			precio = 49;
			tipo = "DDR4";
			capacidad = 16;
			velocidad = 3200;
			latencia = 16;
			break;
		case 6:
			nombre = "Ballistix MAX 32GB Kit";
			marca = "Crucial";
			precio = 169;
			tipo = "DDR4";
			capacidad = 32;
			velocidad = 4000;
			latencia = 18;
			break;
		case 7:
			nombre = "Viper Steel 16GB Kit";
			marca = "Patriot";
			precio = 65;
			tipo = "DDR4";
			capacidad = 16;
			velocidad = 3733;
			latencia = 17;
			break;
		case 8:
			nombre = "Vengeance DDR5 64GB Kit";
			marca = "Corsair";
			precio = 349;
			tipo = "DDR5";
			capacidad = 64;
			velocidad = 5200;
			latencia = 40;
			break;
		case 9:
			nombre = "Trident Z Neo 32GB Kit";
			marca = "G.Skill";
			precio = 149;
			tipo = "DDR4";
			capacidad = 32;
			velocidad = 3600;
			latencia = 16;
			break;
		case 10:
			nombre = "Value Select 8GB";
			marca = "Corsair";
			precio = 29;
			tipo = "DDR4";
			capacidad = 8;
			velocidad = 2666;
			latencia = 18;
			break;
		case 11:
			nombre = "Flare X5 32GB Kit";
			marca = "G.Skill";
			precio = 199;
			tipo = "DDR5";
			capacidad = 32;
			velocidad = 6400;
			latencia = 32;
			break;
		case 12:
			nombre = "Elite 16GB Kit";
			marca = "Team Group";
			precio = 45;
			tipo = "DDR4";
			capacidad = 16;
			velocidad = 3200;
			latencia = 22;
			break;
		case 13:
			nombre = "Ballistix Sport LT 32GB Kit";
			marca = "Crucial";
			precio = 99;
			tipo = "DDR4";
			capacidad = 32;
			velocidad = 3200;
			latencia = 16;
			break;
		case 14:
			nombre = "RGB Pro 16GB Kit";
			marca = "Corsair";
			precio = 89;
			tipo = "DDR4";
			capacidad = 16;
			velocidad = 3600;
			latencia = 18;
			break;
		case 15:
			nombre = "ValueRAM 4GB";
			marca = "Kingston";
			precio = 19;
			tipo = "DDR3";
			capacidad = 4;
			velocidad = 1600;
			latencia = 11;
			break;
	}
}