#include "../include/clasessd.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE SSD
ssd::ssd():componente() {
	capacidad = 0;
	velocidadLectura = 0;
	velocidadEscritura = 0;
	pcie = "";
}

//RETORNAR CAPACIDAD
int ssd::mostrarCapacidad() {
	return capacidad;
}

//RETORNAR VELOCIDAD DE LECTURA
int ssd::mostrarVelocidadLectura() {
	return velocidadLectura;
}

//RETORNAR VELOCIDAD DE ESCRITURA
int ssd::mostrarVelocidadEscritura() {
	return velocidadEscritura;
}

//RETORNAR PCIE
string ssd::mostrarPcie() {
	return pcie;
}

//GENERAR SSD ALEATORIO
void ssd::generarSsd() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "980 PRO NVMe 1TB";
			marca = "Samsung";
			precio = 129;
			capacidad = 1000;
			velocidadLectura = 7000;
			velocidadEscritura = 5000;
			pcie = "Gen 4.0";
			break;
		case 2:
			nombre = "WD Black SN850X 2TB";
			marca = "Western Digital";
			precio = 199;
			capacidad = 2000;
			velocidadLectura = 7300;
			velocidadEscritura = 6600;
			pcie = "Gen 4.0";
			break;
		case 3:
			nombre = "Crucial P3 Plus 500GB";
			marca = "Crucial";
			precio = 49;
			capacidad = 500;
			velocidadLectura = 5000;
			velocidadEscritura = 3600;
			pcie = "Gen 4.0";
			break;
		case 4:
			nombre = "FireCuda 530 4TB";
			marca = "Seagate";
			precio = 399;
			capacidad = 4000;
			velocidadLectura = 7300;
			velocidadEscritura = 6900;
			pcie = "Gen 4.0";
			break;
		case 5:
			nombre = "KC3000 1TB";
			marca = "Kingston";
			precio = 89;
			capacidad = 1000;
			velocidadLectura = 7000;
			velocidadEscritura = 6000;
			pcie = "Gen 4.0";
			break;
		case 6:
			nombre = "970 EVO Plus 1TB";
			marca = "Samsung";
			precio = 99;
			capacidad = 1000;
			velocidadLectura = 3500;
			velocidadEscritura = 3300;
			pcie = "Gen 3.0";
			break;
		case 7:
			nombre = "MP600 Pro LPX 2TB";
			marca = "Corsair";
			precio = 179;
			capacidad = 2000;
			velocidadLectura = 7100;
			velocidadEscritura = 6500;
			pcie = "Gen 4.0";
			break;
		case 8:
			nombre = "Blue SN570 500GB";
			marca = "Western Digital";
			precio = 39;
			capacidad = 500;
			velocidadLectura = 3500;
			velocidadEscritura = 2300;
			pcie = "Gen 3.0";
			break;
		case 9:
			nombre = "Rocket 4 Plus 1TB";
			marca = "Sabrent";
			precio = 119;
			capacidad = 1000;
			velocidadLectura = 7000;
			velocidadEscritura = 5300;
			pcie = "Gen 4.0";
			break;
		case 10:
			nombre = "P2 250GB";
			marca = "Crucial";
			precio = 29;
			capacidad = 250;
			velocidadLectura = 2400;
			velocidadEscritura = 1900;
			pcie = "Gen 3.0";
			break;
		case 11:
			nombre = "990 PRO 2TB";
			marca = "Samsung";
			precio = 249;
			capacidad = 2000;
			velocidadLectura = 7450;
			velocidadEscritura = 6900;
			pcie = "Gen 4.0";
			break;
		case 12:
			nombre = "SN770 1TB";
			marca = "Western Digital";
			precio = 79;
			capacidad = 1000;
			velocidadLectura = 5150;
			velocidadEscritura = 4900;
			pcie = "Gen 4.0";
			break;
		case 13:
			nombre = "TeamGroup MP34 512GB";
			marca = "Team Group";
			precio = 45;
			capacidad = 512;
			velocidadLectura = 3400;
			velocidadEscritura = 2800;
			pcie = "Gen 3.0";
			break;
		case 14:
			nombre = "Solidigm P44 Pro 1TB";
			marca = "Solidigm";
			precio = 109;
			capacidad = 1000;
			velocidadLectura = 7000;
			velocidadEscritura = 6500;
			pcie = "Gen 4.0";
			break;
		case 15:
			nombre = "A400 240GB";
			marca = "Kingston";
			precio = 25;
			capacidad = 240;
			velocidadLectura = 500;
			velocidadEscritura = 350;
			pcie = "SATA III";
			break;
	}
}