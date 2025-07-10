#include "../include/clasegpu.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DE GPU
gpu::gpu():componente() {
	nucleos = 0;
	ventiladores = 0;
	vram = 0;
	generacion = "";
}

//RETORNAR LOS NUCLEOS
int gpu::mostrarNucleosGpu() {
	return nucleos;
}

//RETORNAR LA CANTIDAD DE VENTILADORES
int gpu::mostrarVentiladores() {
	return ventiladores;
}

//RETORNAR LA VRAM
int gpu::mostrarVram() {
	return vram;
}

//RETORNAR LA GENERACION
string gpu::mostrarGeneracion() {
	return generacion;
}

//GENERAR TARJETA ALEATORIA
void gpu::generarTarjeta() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "GeForce RTX 4090";
			marca = "NVIDIA";
			precio = 1599;
			nucleos = 16384;
			ventiladores = 3;
			vram = 24;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 2:
			nombre = "GeForce RTX 4080 Super";
			marca = "NVIDIA";
			precio = 999;
			nucleos = 10240;
			ventiladores = 3;
			vram = 16;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 3:
			nombre = "Radeon RX 7900 XTX";
			marca = "AMD";
			precio = 899;
			nucleos = 6144;
			ventiladores = 3;
			vram = 24;
			generacion = "RDNA 3";
			break;
		case 4:
			nombre = "GeForce RTX 4070 Ti Super";
			marca = "NVIDIA";
			precio = 799;
			nucleos = 8448;
			ventiladores = 2;
			vram = 16;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 5:
			nombre = "Radeon RX 7900 XT";
			marca = "AMD";
			precio = 749;
			nucleos = 5376;
			ventiladores = 3;
			vram = 20;
			generacion = "RDNA 3";
			break;
		case 6:
			nombre = "GeForce RTX 4070 Super";
			marca = "NVIDIA";
			precio = 599;
			nucleos = 7168;
			ventiladores = 2;
			vram = 12;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 7:
			nombre = "Radeon RX 7800 XT";
			marca = "AMD";
			precio = 499;
			nucleos = 3840;
			ventiladores = 2;
			vram = 16;
			generacion = "RDNA 3";
			break;
		case 8:
			nombre = "GeForce RTX 4060 Ti";
			marca = "NVIDIA";
			precio = 399;
			nucleos = 4352;
			ventiladores = 2;
			vram = 8;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 9:
			nombre = "Radeon RX 7700 XT";
			marca = "AMD";
			precio = 449;
			nucleos = 3456;
			ventiladores = 2;
			vram = 12;
			generacion = "RDNA 3";
			break;
		case 10:
			nombre = "GeForce RTX 4060";
			marca = "NVIDIA";
			precio = 299;
			nucleos = 3072;
			ventiladores = 2;
			vram = 8;
			generacion = "Ada Lovelace (40 Series)";
			break;
		case 11:
			nombre = "Radeon RX 7600 XT";
			marca = "AMD";
			precio = 329;
			nucleos = 2048;
			ventiladores = 2;
			vram = 16;
			generacion = "RDNA 3";
			break;
		case 12:
			nombre = "GeForce RTX 3070 Ti";
			marca = "NVIDIA";
			precio = 599;
			nucleos = 6144;
			ventiladores = 2;
			vram = 8;
			generacion = "Ampere (30 Series)";
			break;
		case 13:
			nombre = "Radeon RX 6750 XT";
			marca = "AMD";
			precio = 349;
			nucleos = 2560;
			ventiladores = 2;
			vram = 12;
			generacion = "RDNA 2";
			break;
		case 14:
			nombre = "GeForce RTX 3060 Ti";
			marca = "NVIDIA";
			precio = 399;
			nucleos = 4864;
			ventiladores = 2;
			vram = 8;
			generacion = "Ampere (30 Series)";
			break;
		case 15:
			nombre = "Radeon RX 6600 XT";
			marca = "AMD";
			precio = 279;
			nucleos = 2048;
			ventiladores = 2;
			vram = 8;
			generacion = "RDNA 2";
			break;
	}
}