#include<iostream>
#include<string.h>
#include<stdlib.h>

int menuInicio() {

    int opcion;

    std::cout << "!Bienvenido al Menu de Gestion¡" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "1) Generar evento." << std::endl;
    std::cout << "2) Registrar asistentes." << std::endl;
    std::cout << "3) Consultar lista de asistentes." << std::endl;
    std::cout << "4) Imprimir informe." << std::endl;
    std::cout << "5) Salir." << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Ingrese su opcion: ";

    std::cin >> opcion;
    return opcion;

    }


int main(){

    int opcion;

    opcion = menuInicio();

    while (opcion!=5){

        if (opcion==1){



        }else if (opcion==2){



        }else if (opcion==3){


            
        }else if (opcion==4){


            
        }else{

            std::cout << "Opcion invalida. Intentelo de nuevo." << std::endl;

        }

    opcion = menuInicio();

    }

    std::cout << "¡Gracias por usar el programa!" << std::endl;

    return 0;
}