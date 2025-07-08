#include "clasemotherboard.h"
#include "superclasecomponente.h"
#include "funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DEL PSU
motherboard::motherboard():componente() {
	formato = "";
	chipset = "";
	socketCpu = "";
	slotsRam = 0;
}

//RETORNAR EL FORMATO
string motherboard::mostrarFormato() {
	return formato;
}

//RETORNAR EL CHIPSET
string motherboard::mostrarChipset() {
	return chipset;
}

//RETORNAR EL SOCKET
string motherboard::mostrarSocketCpu() {
	return socketCpu;
}

//RETORNAR LOS SLOTS DE RAM
int motherboard::mostrarSlotsRam() {
	return slotsRam;
}

//GENERAR RAM ALEATORIA
void motherboard::generarMotherboard() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "ROG Strix X670E-E Gaming";
			marca = "ASUS";
			precio = 499;
			formato = "ATX";
			chipset = "X670E";
			socketCpu = "AM5";
			slotsRam = 4;
			break;
		case 2:
			nombre = "Z790 AORUS Elite AX";
			marca = "Gigabyte";
			precio = 299;
			formato = "ATX";
			chipset = "Z790";
			socketCpu = "LGA1700";
			slotsRam = 4;
			break;
		case 3:
			nombre = "MAG B650 Tomahawk WiFi";
			marca = "MSI";
			precio = 229;
			formato = "ATX";
			chipset = "B650";
			socketCpu = "AM5";
			slotsRam = 4;
			break;
		case 4:
			nombre = "ProArt X670E-Creator WiFi";
			marca = "ASUS";
			precio = 449;
			formato = "ATX";
			chipset = "X670E";
			socketCpu = "AM5";
			slotsRam = 4;
			break;
		case 5:
			nombre = "Z690 Gaming X DDR4";
			marca = "Gigabyte";
			precio = 189;
			formato = "ATX";
			chipset = "Z690";
			socketCpu = "LGA1700";
			slotsRam = 4;
			break;
		case 6:
			nombre = "B550M Pro-VDH WiFi";
			marca = "MSI";
			precio = 89;
			formato = "Micro-ATX";
			chipset = "B550";
			socketCpu = "AM4";
			slotsRam = 4;
			break;
		case 7:
			nombre = "ROG Strix B650E-I Gaming WiFi";
			marca = "ASUS";
			precio = 329;
			formato = "Mini-ITX";
			chipset = "B650E";
			socketCpu = "AM5";
			slotsRam = 2;
			break;
		case 8:
			nombre = "Z790I AORUS Ultra";
			marca = "Gigabyte";
			precio = 399;
			formato = "Mini-ITX";
			chipset = "Z790";
			socketCpu = "LGA1700";
			slotsRam = 2;
			break;
		case 9:
			nombre = "Prime B450M-A II";
			marca = "ASUS";
			precio = 69;
			formato = "Micro-ATX";
			chipset = "B450";
			socketCpu = "AM4";
			slotsRam = 4;
			break;
		case 10:
			nombre = "X570S AORUS Pro AX";
			marca = "Gigabyte";
			precio = 249;
			formato = "ATX";
			chipset = "X570S";
			socketCpu = "AM4";
			slotsRam = 4;
			break;
		case 11:
			nombre = "MPG B550 Gaming Plus";
			marca = "MSI";
			precio = 129;
			formato = "ATX";
			chipset = "B550";
			socketCpu = "AM4";
			slotsRam = 4;
			break;
		case 12:
			nombre = "H610M-HDV/M.2";
			marca = "ASRock";
			precio = 59;
			formato = "Micro-ATX";
			chipset = "H610";
			socketCpu = "LGA1700";
			slotsRam = 2;
			break;
		case 13:
			nombre = "TUF Gaming B660M-Plus WiFi";
			marca = "ASUS";
			precio = 149;
			formato = "Micro-ATX";
			chipset = "B660";
			socketCpu = "LGA1700";
			slotsRam = 4;
			break;
		case 14:
			nombre = "A520M-HDV";
			marca = "ASRock";
			precio = 49;
			formato = "Micro-ATX";
			chipset = "A520";
			socketCpu = "AM4";
			slotsRam = 2;
			break;
		case 15:
			nombre = "Z790 Hero";
			marca = "ASUS";
			precio = 629;
			formato = "ATX";
			chipset = "Z790";
			socketCpu = "LGA1700";
			slotsRam = 4;
			break;
	}
}