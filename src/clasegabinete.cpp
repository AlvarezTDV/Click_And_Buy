#include "../include/clasegabinete.h"
#include "../include/superclasecomponente.h"
#include "../include/funciones.h"

#include <string>
using namespace std;

//CONSTRUCTOR DEL GABINETE
gabinete::gabinete():componente() {
	tamanio = "";
	material = "";
}

//RETORNAR TAMAÑO DEL GABINETE
string gabinete::mostrarTamanio() {
	return tamanio;
}

//RETORNAR EL MATERIAL
string gabinete::mostrarMaterial() {
	return material;
}

//GENERAR GABINETE ALEATORIO
void gabinete::generarGabinete() {
	int num = NumRandom(1, 15);
	switch (num) {
		case 1:
			nombre = "4000D Airflow";
			marca = "Corsair";
			precio = 99;
			tamanio = "ATX";
			material = "Acero y vidrio templado";
			break;
		case 2:
			nombre = "H510 Elite";
			marca = "NZXT";
			precio = 149;
			tamanio = "ATX";
			material = "Acero y vidrio templado";
			break;
		case 3:
			nombre = "Fractal Design Define 7";
			marca = "Fractal Design";
			precio = 169;
			tamanio = "ATX";
			material = "Acero con paneles de amortiguacion";
			break;
		case 4:
			nombre = "MasterBox TD500 Mesh";
			marca = "Cooler Master";
			precio = 89;
			tamanio = "ATX";
			material = "Acero y malla frontal";
			break;
		case 5:
			nombre = "Pure Base 500DX";
			marca = "be quiet!";
			precio = 109;
			tamanio = "ATX";
			material = "Acero y vidrio templado";
			break;
		case 6:
			nombre = "Node 202";
			marca = "Fractal Design";
			precio = 129;
			tamanio = "Mini-ITX";
			material = "Aluminio";
			break;
		case 7:
			nombre = "Core V21";
			marca = "Thermaltake";
			precio = 79;
			tamanio = "Micro-ATX";
			material = "Acero y acrilico";
			break;
		case 8:
			nombre = "Meshify C";
			marca = "Fractal Design";
			precio = 89;
			tamanio = "ATX";
			material = "Acero y malla frontal";
			break;
		case 9:
			nombre = "Crystal Series 680X RGB";
			marca = "Corsair";
			precio = 249;
			tamanio = "ATX";
			material = "Aluminio y vidrio templado";
			break;
		case 10:
			nombre = "Versa H18";
			marca = "Thermaltake";
			precio = 39;
			tamanio = "Micro-ATX";
			material = "Acero";
			break;
		case 11:
			nombre = "H210i";
			marca = "NZXT";
			precio = 109;
			tamanio = "Mini-ITX";
			material = "Acero y vidrio templado";
			break;
		case 12:
			nombre = "Silent Base 802";
			marca = "be quiet!";
			precio = 149;
			tamanio = "ATX";
			material = "Acero con paneles de amortiguacion";
			break;
		case 13:
			nombre = "MasterBox Q300L";
			marca = "Cooler Master";
			precio = 49;
			tamanio = "Mini-ITX";
			material = "Acero y acrilico";
			break;
		case 14:
			nombre = "Lancool II Mesh";
			marca = "Lian Li";
			precio = 119;
			tamanio = "ATX";
			material = "Acero y malla frontal";
			break;
		case 15:
			nombre = "View 71 TG RGB";
			marca = "Thermaltake";
			precio = 199;
			tamanio = "ATX";
			material = "Acero y vidrio templado";
			break;
	}
}