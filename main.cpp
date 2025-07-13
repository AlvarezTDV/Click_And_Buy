#include "include/includes.h"

#include <windows.h>
#include <iostream>
#include <thread>
#include <semaphore.h>
#include <queue>
using namespace std;

int cliente = 1;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int opcion, cantHilo;
	do {
		system("cls");
		cout << endl << endl;
		cout << tab << tab << tab << "   █████████  █████       █████   █████████  █████   ████                          " << endl;
		cout << tab << tab << tab << "  ███░░░░░███░░███       ░░███   ███░░░░░███░░███   ███░                           " << endl;
		cout << tab << tab << tab << " ███     ░░░  ░███        ░███  ███     ░░░  ░███  ███                             " << endl;
		cout << tab << tab << tab << "░███          ░███        ░███ ░███          ░███████                              " << endl;
		cout << tab << tab << tab << "░███          ░███        ░███ ░███          ░███░░███                             " << endl;
		cout << tab << tab << tab << "░░███     ███ ░███      █ ░███ ░░███     ███ ░███ ░░███                            " << endl;
		cout << tab << tab << tab << " ░░█████████  ███████████ █████ ░░█████████  █████ ░░████                          " << endl;
		cout << tab << tab << tab << "  ░░░░░░░░░  ░░░░░░░░░░░ ░░░░░   ░░░░░░░░░  ░░░░░   ░░░░                           " << endl;
		cout << tab << tab << tab << "                                                                                  " << endl;
		cout << tab << tab << "                                                                                  " << endl;
		cout << tab << tab << "                                                                                  " << endl;
		cout << tab << tab << "   █████████   ██████   █████ ██████████      ███████████  █████  █████ █████ █████" << endl;
		cout << tab << tab << "  ███░░░░░███ ░░██████ ░░███ ░░███░░░░███    ░░███░░░░░███░░███  ░░███ ░░███ ░░███ " << endl;
		cout << tab << tab << " ░███    ░███  ░███░███ ░███  ░███   ░░███    ░███    ░███ ░███   ░███  ░░███ ███  " << endl;
		cout << tab << tab << " ░███████████  ░███░░███░███  ░███    ░███    ░██████████  ░███   ░███   ░░█████   " << endl;
		cout << tab << tab << " ░███░░░░░███  ░███ ░░██████  ░███    ░███    ░███░░░░░███ ░███   ░███    ░░███    " << endl;
		cout << tab << tab << " ░███    ░███  ░███  ░░█████  ░███    ███     ░███    ░███ ░███   ░███     ░███    " << endl;
		cout << tab << tab << " █████   █████ █████  ░░█████ ██████████      ███████████  ░░████████      █████   " << endl;
		cout << tab << tab << "░░░░░   ░░░░░ ░░░░░    ░░░░░ ░░░░░░░░░░      ░░░░░░░░░░░    ░░░░░░░░      ░░░░░    " << endl << endl;
		cout << tab << tab << tab << tab << "[1] SIMULAR (3 PRODUCTORES Y 3 CONSUMIDORES)" << endl;
		cout << tab << tab << tab << tab << "[2] VER STOCK" << endl;
		cout << tab << tab << tab << tab << "[3] VER VENTAS" << endl;
		cout << tab << tab << tab << tab << "[4] SALIR DEL PROGRAMA" << endl << endl;
		cout << tab << tab << tab << tab << tab << tab << "OPCION: ";
		cin >> opcion;
		
		switch (opcion) {
			case 1: {
				system("cls");
				cout << tab << tab << "███████╗██╗███╗   ███╗██╗   ██╗██╗      █████╗  ██████╗██╗ ██████╗ ███╗   ██╗" << endl;
				cout << tab << tab << "██╔════╝██║████╗ ████║██║   ██║██║     ██╔══██╗██╔════╝██║██╔═══██╗████╗  ██║" << endl;
				cout << tab << tab << "███████╗██║██╔████╔██║██║   ██║██║     ███████║██║     ██║██║   ██║██╔██╗ ██║" << endl;
				cout << tab << tab << "╚════██║██║██║╚██╔╝██║██║   ██║██║     ██╔══██║██║     ██║██║   ██║██║╚██╗██║" << endl;
				cout << tab << tab << "███████║██║██║ ╚═╝ ██║╚██████╔╝███████╗██║  ██║╚██████╗██║╚██████╔╝██║ ╚████║" << endl;
				cout << tab << tab << "╚══════╝╚═╝╚═╝     ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝" << endl;
				
				//REPETICIONES QUE TENDRA CADA HILO
				cout << endl;
				cout << tab << tab << tab << tab << "CUANTAS REPETICIONES HARA CADA HILO?: ";
				cin >> cantHilo;
				cout << endl;
				
				//SE INICIALIZAN LOS SEMAFOROS
				inicializarSemaforos();
				
				//PRODUCTORES
				thread t1(productor, cantHilo, 1);
				thread t2(productor, cantHilo, 2);
				thread t3(productor, cantHilo, 3);
				
				//CONSUMIDORES
				thread t4(consumidor, cantHilo, ref(cliente));
				thread t5(consumidor, cantHilo, ref(cliente));
				thread t6(consumidor, cantHilo, ref(cliente));
				
				t1.join();
				t2.join();
				t3.join();
			
				t4.join();
				t5.join();
				t6.join();
				
				system("pause");
				break;
			}
			case 2: {
				system("cls");
				cout << tab << tab << tab << tab << "███████╗████████╗ ██████╗  ██████╗██╗  ██╗" << endl;
				cout << tab << tab << tab << tab << "██╔════╝╚══██╔══╝██╔═══██╗██╔════╝██║ ██╔╝" << endl;
				cout << tab << tab << tab << tab << "███████╗   ██║   ██║   ██║██║     █████╔╝ " << endl;
				cout << tab << tab << tab << tab << "╚════██║   ██║   ██║   ██║██║     ██╔═██╗ " << endl;
				cout << tab << tab << tab << tab << "███████║   ██║   ╚██████╔╝╚██████╗██║  ██╗" << endl;
				cout << tab << tab << tab << tab << "╚══════╝   ╚═╝    ╚═════╝  ╚═════╝╚═╝  ╚═╝" << endl << endl;
				
				cout << tab << tab << "░▀█▀░█▀█░█▀▄░▀▀█░█▀▀░▀█▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀█░█▀▀░▀█▀░█▀▀░█▀█░█▀▀" << endl;
				cout << tab << tab << "░░█░░█▀█░█▀▄░░░█░█▀▀░░█░░█▀█░▀▀█░░░█░█░█▀▄░█▀█░█▀▀░░█░░█░░░█▀█░▀▀█" << endl;
				cout << tab << tab << "░░▀░░▀░▀░▀░▀░▀▀░░▀▀▀░░▀░░▀░▀░▀▀▀░░░▀▀▀░▀░▀░▀░▀░▀░░░▀▀▀░▀▀▀░▀░▀░▀▀▀" << endl << endl;
				queue <gpu> temp1 = inventarioGpu;
				int contador1 = 1;
				while (temp1.empty() != true) {
					cout << tab << tab << "TARJETA [" << contador1 << "]:" << endl;
					cout << tab << tab << "NOMBRE: " << temp1.front().mostrarNombre() << endl;
					cout << tab << tab << "MARCA: " << temp1.front().mostrarMarca() << endl;
					cout << tab << tab << "PRECIO: " << temp1.front().mostrarPrecio() << endl;
					cout << tab << tab << "NUCLEOS: " << temp1.front().mostrarNucleos() << endl;
					cout << tab << tab << "VENTILADORES: " << temp1.front().mostrarVentiladores() << endl;
					cout << tab << tab << "VRAM: " << temp1.front().mostrarVram() << endl;
					cout << tab << tab << "GENERACION: " << temp1.front().mostrarGeneracion() << endl << endl;
					temp1.pop();
					contador1++;
				}
				
				cout << tab << tab << "░█▀█░█▀▄░█▀█░█▀▀░█▀▀░█▀▀░█▀█░█▀▄░█▀█░█▀▄░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█▀▀░█▀▄░█░█░█░░░█▀▀░▀▀█░█▀█░█░█░█░█░█▀▄░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀░░░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀" << endl << endl;
				queue<cpu> temp2 = inventarioCpu;
				int contador2 = 1;
				while (temp2.empty() != true) {
				    cout << tab << tab << "PROCESADOR [" << contador2 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp2.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp2.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp2.front().mostrarPrecio() << endl;
				    cout << tab << tab << "NUCLEOS: " << temp2.front().mostrarNucleos() << endl;
				    cout << tab << tab << "HILOS: " << temp2.front().mostrarHilos() << endl;
				    cout << tab << tab << "FRECUENCIA: " << temp2.front().mostrarFrecuencia() << endl;
				    cout << tab << tab << "GENERACION: " << temp2.front().mostrarGeneracion() << endl;
				    cout << tab << tab << "SOCKET: " << temp2.front().mostrarSocket() << endl << endl;
				    temp2.pop();
				    contador2++;
				}
				
				cout << tab << tab << "░█▀▀░█░█░█▀▀░█▀█░▀█▀░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█▀▀░█░█░█▀▀░█░█░░█░░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀░░░▀▀▀░▀▀▀░▀░▀░░▀░░▀▀▀░▀▀▀" << endl << endl;
				queue<psu> temp3 = inventarioPsu;
				int contador3 = 1;
				while (temp3.empty() != true) {
				    cout << tab << tab << "FUENTE [" << contador3 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp3.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp3.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp3.front().mostrarPrecio() << endl;
				    cout << tab << tab << "WATTS: " << temp3.front().mostrarWatts() << endl;
				    cout << tab << tab << "TIENE CERTIFICACION: " << temp3.front().mostrarSiTieneCertificacion() << endl;
				    cout << tab << tab << "CERTIFICACION: " << temp3.front().mostrarCertificacion() << endl;
				    cout << tab << tab << "ES MODULAR: " << temp3.front().mostrarSiEsModular() << endl << endl;
				    temp3.pop();
				    contador3++;
				}
				
				cout << tab << tab << "░█▀▄░█▀█░█▄█" << endl;
				cout << tab << tab << "░█▀▄░█▀█░█░█" << endl;
				cout << tab << tab << "░▀░▀░▀░▀░▀░▀" << endl << endl;
				queue<ram> temp4 = inventarioRam;
				int contador4 = 1;
				while (temp4.empty() != true) {
				    cout << tab << tab << "RAM [" << contador4 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp4.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp4.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp4.front().mostrarPrecio() << endl;
				    cout << tab << tab << "TIPO: " << temp4.front().mostrarTipo() << endl;
				    cout << tab << tab << "CAPACIDAD: " << temp4.front().mostrarCapacidad() << endl;
				    cout << tab << tab << "VELOCIDAD: " << temp4.front().mostrarVelocidad() << endl;
				    cout << tab << tab << "LATENCIA: " << temp4.front().mostrarLatencia() << endl << endl;
				    temp4.pop();
				    contador4++;
				}
				
				cout << tab << tab << "░▀█▀░█▀█░█▀▄░▀▀█░█▀▀░▀█▀░█▀█░█▀▀░░░█▄█░█▀█░█▀▄░█▀▄░█▀▀" << endl;
				cout << tab << tab << "░░█░░█▀█░█▀▄░░░█░█▀▀░░█░░█▀█░▀▀█░░░█░█░█▀█░█░█░█▀▄░█▀▀" << endl;
				cout << tab << tab << "░░▀░░▀░▀░▀░▀░▀▀░░▀▀▀░░▀░░▀░▀░▀▀▀░░░▀░▀░▀░▀░▀▀░░▀░▀░▀▀▀" << endl << endl;
				queue<motherboard> temp5 = inventarioMotherboard;
				int contador5 = 1;
				while (temp5.empty() != true) {
				    cout << tab << tab << "MOTHERBOARD [" << contador5 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp5.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp5.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp5.front().mostrarPrecio() << endl;
				    cout << tab << tab << "FORMATO: " << temp5.front().mostrarFormato() << endl;
				    cout << tab << tab << "CHIPSET: " << temp5.front().mostrarChipset() << endl;
				    cout << tab << tab << "SOCKET CPU: " << temp5.front().mostrarSocketCpu() << endl;
				    cout << tab << tab << "SLOTS RAM: " << temp5.front().mostrarSlotsRam() << endl << endl;
				    temp5.pop();
				    contador5++;
				}
				
				cout << tab << tab << "░█▀▀░█▀▀░█▀▄" << endl;
				cout << tab << tab << "░▀▀█░▀▀█░█░█" << endl;
				cout << tab << tab << "░▀▀▀░▀▀▀░▀▀░" << endl << endl;
				queue<ssd> temp6 = inventarioSsd;
				int contador6 = 1;
				while (temp6.empty() != true) {
				    cout << tab << tab << "SSD [" << contador6 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp6.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp6.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp6.front().mostrarPrecio() << endl;
				    cout << tab << tab << "CAPACIDAD: " << temp6.front().mostrarCapacidad() << endl;
				    cout << tab << tab << "VELOCIDAD LECTURA: " << temp6.front().mostrarVelocidadLectura() << endl;
				    cout << tab << tab << "VELOCIDAD ESCRITURA: " << temp6.front().mostrarVelocidadEscritura() << endl;
				    cout << tab << tab << "PCIE: " << temp6.front().mostrarPcie() << endl << endl;
				    temp6.pop();
				    contador6++;
				}
				
				cout << tab << tab << "░█▀▄░▀█▀░█▀▀░▀█▀░█▀█░█▀█░█▀▄░█▀█░█▀▄░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█░█░░█░░▀▀█░░█░░█▀▀░█▀█░█░█░█░█░█▀▄░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀▀░░▀▀▀░▀▀▀░▀▀▀░▀░░░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀" << endl << endl;
				queue<disipador> temp7 = inventarioDisipador;
				int contador7 = 1;
				while (temp7.empty() != true) {
				    cout << tab << tab << "DISIPADOR [" << contador7 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp7.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp7.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp7.front().mostrarPrecio() << endl;
				    cout << tab << tab << "COMPATIBILIDAD SOCKET: " << temp7.front().mostrarCompatibilidadSocket() << endl;
				    cout << tab << tab << "HEAT PIPES: " << temp7.front().mostrarHeatPipes() << endl << endl;
				    temp7.pop();
				    contador7++;
				}
				
				cout << tab << tab << "░█▀▄░█▀▀░█▀▀░█▀▄░▀█▀░█▀▀░█▀▀░█▀▄░█▀█░█▀▀░▀█▀░█▀█░█▀█░█▀▀░█▀▀░░░█░░░░░" << endl;
				cout << tab << tab << "░█▀▄░█▀▀░█▀▀░█▀▄░░█░░█░█░█▀▀░█▀▄░█▀█░█░░░░█░░█░█░█░█░█▀▀░▀▀█░░░█░░░░░" << endl;
				cout << tab << tab << "░▀░▀░▀▀▀░▀░░░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀▀░▀▀▀░░░▀▀▀░▀░" << endl << endl;
				queue<refrigeracionLiquida> temp8 = inventarioRefrigeracionLiquida;
				int contador8 = 1;
				while (temp8.empty() != true) {
				    cout << tab << tab << "REFRIGERACION LIQUIDA [" << contador8 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp8.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp8.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp8.front().mostrarPrecio() << endl;
				    cout << tab << tab << "COMPATIBILIDAD SOCKET: " << temp8.front().mostrarCompatibilidadSocket() << endl;
				    cout << tab << tab << "NUM VENTILADORES: " << temp8.front().mostrarNumVentiladores() << endl << endl;
				    temp8.pop();
				    contador8++;
				}
				
				cout << tab << tab << "░█▀▀░█▀█░█▀▄░▀█▀░█▀█░█▀▀░▀█▀░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█░█░█▀█░█▀▄░░█░░█░█░█▀▀░░█░░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀░▀▀▀" << endl << endl;
				queue<gabinete> temp9 = inventarioGabinete;
				int contador9 = 1;
				while (temp9.empty() != true) {
				    cout << tab << tab << "GABINETE [" << contador9 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp9.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp9.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp9.front().mostrarPrecio() << endl;
				    cout << tab << tab << "TAMANIO: " << temp9.front().mostrarTamanio() << endl;
				    cout << tab << tab << "MATERIAL: " << temp9.front().mostrarMaterial() << endl << endl;
				    temp9.pop();
				    contador9++;
				}
				system("pause");
				break;
			}
			case 3: {
				system("cls");
				cout << tab << tab << tab << "██╗   ██╗███████╗███╗   ██╗████████╗ █████╗ ███████╗" << endl;
				cout << tab << tab << tab << "██║   ██║██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔════╝" << endl;
				cout << tab << tab << tab << "██║   ██║█████╗  ██╔██╗ ██║   ██║   ███████║███████╗" << endl;
				cout << tab << tab << tab << "╚██╗ ██╔╝██╔══╝  ██║╚██╗██║   ██║   ██╔══██║╚════██║" << endl;
				cout << tab << tab << tab << " ╚████╔╝ ███████╗██║ ╚████║   ██║   ██║  ██║███████║" << endl;
				cout << tab << tab << tab << "  ╚═══╝  ╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚══════╝" << endl << endl;
				
				cout << tab << tab << "░▀█▀░█▀█░█▀▄░▀▀█░█▀▀░▀█▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀█░█▀▀░▀█▀░█▀▀░█▀█░█▀▀" << endl;
				cout << tab << tab << "░░█░░█▀█░█▀▄░░░█░█▀▀░░█░░█▀█░▀▀█░░░█░█░█▀▄░█▀█░█▀▀░░█░░█░░░█▀█░▀▀█" << endl;
				cout << tab << tab << "░░▀░░▀░▀░▀░▀░▀▀░░▀▀▀░░▀░░▀░▀░▀▀▀░░░▀▀▀░▀░▀░▀░▀░▀░░░▀▀▀░▀▀▀░▀░▀░▀▀▀" << endl << endl;
				queue <gpu> temp1 = ventasGpu;
				int contador1 = 1;
				while (temp1.empty() != true) {
				    cout << tab << tab << "TARJETA [" << contador1 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp1.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp1.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp1.front().mostrarPrecio() << endl;
				    cout << tab << tab << "NUCLEOS: " << temp1.front().mostrarNucleos() << endl;
				    cout << tab << tab << "VENTILADORES: " << temp1.front().mostrarVentiladores() << endl;
				    cout << tab << tab << "VRAM: " << temp1.front().mostrarVram() << endl;
				    cout << tab << tab << "GENERACION: " << temp1.front().mostrarGeneracion() << endl << endl;
				    temp1.pop();
				    contador1++;
				}
				
				cout << tab << tab << "░█▀█░█▀▄░█▀█░█▀▀░█▀▀░█▀▀░█▀█░█▀▄░█▀█░█▀▄░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█▀▀░█▀▄░█░█░█░░░█▀▀░▀▀█░█▀█░█░█░█░█░█▀▄░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀░░░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀" << endl << endl;
				queue <cpu> temp2 = ventasCpu;
				int contador2 = 1;
				while (temp2.empty() != true) {
				    cout << tab << tab << "PROCESADOR [" << contador2 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp2.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp2.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp2.front().mostrarPrecio() << endl;
				    cout << tab << tab << "NUCLEOS: " << temp2.front().mostrarNucleos() << endl;
				    cout << tab << tab << "HILOS: " << temp2.front().mostrarHilos() << endl;
				    cout << tab << tab << "FRECUENCIA: " << temp2.front().mostrarFrecuencia() << endl;
				    cout << tab << tab << "GENERACION: " << temp2.front().mostrarGeneracion() << endl;
				    cout << tab << tab << "SOCKET: " << temp2.front().mostrarSocket() << endl << endl;
				    temp2.pop();
				    contador2++;
				}
				
				cout << tab << tab << "░█▀▀░█░█░█▀▀░█▀█░▀█▀░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█▀▀░█░█░█▀▀░█░█░░█░░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀░░░▀▀▀░▀▀▀░▀░▀░░▀░░▀▀▀░▀▀▀" << endl << endl;
				queue <psu> temp3 = ventasPsu;
				int contador3 = 1;
				while (temp3.empty() != true) {
				    cout << tab << tab << "FUENTE [" << contador3 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp3.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp3.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp3.front().mostrarPrecio() << endl;
				    cout << tab << tab << "WATTS: " << temp3.front().mostrarWatts() << endl;
				    cout << tab << tab << "TIENE CERTIFICACION: " << temp3.front().mostrarSiTieneCertificacion() << endl;
				    cout << tab << tab << "CERTIFICACION: " << temp3.front().mostrarCertificacion() << endl;
				    cout << tab << tab << "ES MODULAR: " << temp3.front().mostrarSiEsModular() << endl << endl;
				    temp3.pop();
				    contador3++;
				}
				
				cout << tab << tab << "░█▀▄░█▀█░█▄█" << endl;
				cout << tab << tab << "░█▀▄░█▀█░█░█" << endl;
				cout << tab << tab << "░▀░▀░▀░▀░▀░▀" << endl << endl;
				queue <ram> temp4 = ventasRam;
				int contador4 = 1;
				while (temp4.empty() != true) {
				    cout << tab << tab << "MEMORIA RAM [" << contador4 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp4.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp4.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp4.front().mostrarPrecio() << endl;
				    cout << tab << tab << "TIPO: " << temp4.front().mostrarTipo() << endl;
				    cout << tab << tab << "CAPACIDAD: " << temp4.front().mostrarCapacidad() << endl;
				    cout << tab << tab << "VELOCIDAD: " << temp4.front().mostrarVelocidad() << endl;
				    cout << tab << tab << "LATENCIA: " << temp4.front().mostrarLatencia() << endl << endl;
				    temp4.pop();
				    contador4++;
				}
				
				cout << tab << tab << "░▀█▀░█▀█░█▀▄░▀▀█░█▀▀░▀█▀░█▀█░█▀▀░░░█▄█░█▀█░█▀▄░█▀▄░█▀▀" << endl;
				cout << tab << tab << "░░█░░█▀█░█▀▄░░░█░█▀▀░░█░░█▀█░▀▀█░░░█░█░█▀█░█░█░█▀▄░█▀▀" << endl;
				cout << tab << tab << "░░▀░░▀░▀░▀░▀░▀▀░░▀▀▀░░▀░░▀░▀░▀▀▀░░░▀░▀░▀░▀░▀▀░░▀░▀░▀▀▀" << endl << endl;
				queue <motherboard> temp5 = ventasMotherboard;
				int contador5 = 1;
				while (temp5.empty() != true) {
				    cout << tab << tab << "PLACA MADRE [" << contador5 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp5.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp5.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp5.front().mostrarPrecio() << endl;
				    cout << tab << tab << "FORMATO: " << temp5.front().mostrarFormato() << endl;
				    cout << tab << tab << "CHIPSET: " << temp5.front().mostrarChipset() << endl;
				    cout << tab << tab << "SOCKET CPU: " << temp5.front().mostrarSocketCpu() << endl;
				    cout << tab << tab << "SLOTS RAM: " << temp5.front().mostrarSlotsRam() << endl << endl;
				    temp5.pop();
				    contador5++;
				}
				
				cout << tab << tab << "░█▀▀░█▀▀░█▀▄" << endl;
				cout << tab << tab << "░▀▀█░▀▀█░█░█" << endl;
				cout << tab << tab << "░▀▀▀░▀▀▀░▀▀░" << endl << endl;
				queue <ssd> temp6 = ventasSsd;
				int contador6 = 1;
				while (temp6.empty() != true) {
				    cout << tab << tab << "DISCO SSD [" << contador6 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp6.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp6.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp6.front().mostrarPrecio() << endl;
				    cout << tab << tab << "CAPACIDAD: " << temp6.front().mostrarCapacidad() << endl;
				    cout << tab << tab << "VELOCIDAD LECTURA: " << temp6.front().mostrarVelocidadLectura() << endl;
				    cout << tab << tab << "VELOCIDAD ESCRITURA: " << temp6.front().mostrarVelocidadEscritura() << endl;
				    cout << tab << tab << "PCIE: " << temp6.front().mostrarPcie() << endl << endl;
				    temp6.pop();
				    contador6++;
				}
				
				cout << tab << tab << "░█▀▄░▀█▀░█▀▀░▀█▀░█▀█░█▀█░█▀▄░█▀█░█▀▄░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█░█░░█░░▀▀█░░█░░█▀▀░█▀█░█░█░█░█░█▀▄░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀▀░░▀▀▀░▀▀▀░▀▀▀░▀░░░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀" << endl << endl;
				queue <disipador> temp7 = ventasDisipador;
				int contador7 = 1;
				while (temp7.empty() != true) {
				    cout << tab << tab << "DISIPADOR [" << contador7 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp7.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp7.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp7.front().mostrarPrecio() << endl;
				    cout << tab << tab << "COMPATIBILIDAD SOCKET: " << temp7.front().mostrarCompatibilidadSocket() << endl;
				    cout << tab << tab << "HEAT PIPES: " << temp7.front().mostrarHeatPipes() << endl << endl;
				    temp7.pop();
				    contador7++;
				}
				
				cout << tab << tab << "░█▀▄░█▀▀░█▀▀░█▀▄░▀█▀░█▀▀░█▀▀░█▀▄░█▀█░█▀▀░▀█▀░█▀█░█▀█░█▀▀░█▀▀░░░█░░░░░" << endl;
				cout << tab << tab << "░█▀▄░█▀▀░█▀▀░█▀▄░░█░░█░█░█▀▀░█▀▄░█▀█░█░░░░█░░█░█░█░█░█▀▀░▀▀█░░░█░░░░░" << endl;
				cout << tab << tab << "░▀░▀░▀▀▀░▀░░░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀▀░▀▀▀░░░▀▀▀░▀░" << endl << endl;
				queue <refrigeracionLiquida> temp8 = ventasRefrigeracionLiquida;
				int contador8 = 1;
				while (temp8.empty() != true) {
				    cout << tab << tab << "REFRIGERACION LIQUIDA [" << contador8 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp8.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp8.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp8.front().mostrarPrecio() << endl;
				    cout << tab << tab << "COMPATIBILIDAD SOCKET: " << temp8.front().mostrarCompatibilidadSocket() << endl;
				    cout << tab << tab << "NUM VENTILADORES: " << temp8.front().mostrarNumVentiladores() << endl << endl;
				    temp8.pop();
				    contador8++;
				}
				
				cout << tab << tab << "░█▀▀░█▀█░█▀▄░▀█▀░█▀█░█▀▀░▀█▀░█▀▀░█▀▀" << endl;
				cout << tab << tab << "░█░█░█▀█░█▀▄░░█░░█░█░█▀▀░░█░░█▀▀░▀▀█" << endl;
				cout << tab << tab << "░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀░▀▀▀" << endl << endl;
				queue <gabinete> temp9 = ventasGabinete;
				int contador9 = 1;
				while (temp9.empty() != true) {
				    cout << tab << tab << "GABINETE [" << contador9 << "]:" << endl;
				    cout << tab << tab << "NOMBRE: " << temp9.front().mostrarNombre() << endl;
				    cout << tab << tab << "MARCA: " << temp9.front().mostrarMarca() << endl;
				    cout << tab << tab << "PRECIO: " << temp9.front().mostrarPrecio() << endl;
				    cout << tab << tab << "TAMANIO: " << temp9.front().mostrarTamanio() << endl;
				    cout << tab << tab << "MATERIAL: " << temp9.front().mostrarMaterial() << endl << endl;
				    temp9.pop();
				    contador9++;
				}
				system("pause");
				break;
			}
			case 4: {
				system("cls");
				cout << endl << endl << endl;
				cout << tab << tab << " ██████╗███████╗██████╗ ██████╗  █████╗ ███╗   ██╗██████╗  ██████╗          " << endl;
				cout << tab << tab << "██╔════╝██╔════╝██╔══██╗██╔══██╗██╔══██╗████╗  ██║██╔══██╗██╔═══██╗         " << endl;
				cout << tab << tab << "██║     █████╗  ██████╔╝██████╔╝███████║██╔██╗ ██║██║  ██║██║   ██║         " << endl;
				cout << tab << tab << "██║     ██╔══╝  ██╔══██╗██╔══██╗██╔══██║██║╚██╗██║██║  ██║██║   ██║         " << endl;
				cout << tab << tab << "╚██████╗███████╗██║  ██║██║  ██║██║  ██║██║ ╚████║██████╔╝╚██████╔╝██╗██╗██╗" << endl;
				cout << tab << tab << " ╚═════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝ ╚═╝╚═╝╚═╝" << endl << endl;
				break;
			}
			default: {
				system("cls");
				cout << endl << endl << endl;
				cout << " ██████╗ ██████╗  ██████╗██╗ ██████╗ ███╗   ██╗    ██╗███╗   ██╗██╗   ██╗ █████╗ ██╗     ██╗██████╗  █████╗ " << endl;
				cout << "██╔═══██╗██╔══██╗██╔════╝██║██╔═══██╗████╗  ██║    ██║████╗  ██║██║   ██║██╔══██╗██║     ██║██╔══██╗██╔══██╗" << endl;
				cout << "██║   ██║██████╔╝██║     ██║██║   ██║██╔██╗ ██║    ██║██╔██╗ ██║██║   ██║███████║██║     ██║██║  ██║███████║" << endl;
				cout << "██║   ██║██╔═══╝ ██║     ██║██║   ██║██║╚██╗██║    ██║██║╚██╗██║╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║██╔══██║" << endl;
				cout << "╚██████╔╝██║     ╚██████╗██║╚██████╔╝██║ ╚████║    ██║██║ ╚████║ ╚████╔╝ ██║  ██║███████╗██║██████╔╝██║  ██║" << endl;
				cout << " ╚═════╝ ╚═╝      ╚═════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝    ╚═╝╚═╝  ╚═══╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝ ╚═╝  ╚═╝" << endl << endl;
				system("pause");
				break;
			}
		}
	} while ( opcion != 4);

	return 0;
}