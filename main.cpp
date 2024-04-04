#include<iostream>
#include<string.h>
#include<stdlib.h>

void menuInicio() {
    std::cout << "!Bienvenido al Menu de Gestion¡" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "1) Generar evento." << std::endl;
    std::cout << "2) Registrar asistentes." << std::endl;
    std::cout << "3) Consultar lista de asistentes." << std::endl;
    std::cout << "4) Imprimir informe." << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Ingrese su opcion: ";
}


int main(){

    menuInicio();
    return 0;
}