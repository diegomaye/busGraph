//
//  main.cpp
//  busGraph
//
//  Created by diegomaye on 7/16/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include <stdio.h>
#include "Menu.h"

int main() {
    int opcion = NINGUNA;

    GrafoRecorridos grafoRecorridos;
    HashCiudades hashCiudades;

    make(hashCiudades);
    ABBLineas arbolLineas;
    MakeABB(arbolLineas);
    printf("///////////////////////////////////////////////////////////\n");
    printf("Bienvenido a busGraph, app para el manejo de lineas de transporte");
    printf("urbano.");
    printf("\n");
    printf("///////////////////////////////////////////////////////////\n");

    printLinea();
                printf("Ingrese codigo y nombre de ciudad\n");
                printLinea();
                cargarCiudad(hashCiudades);
                crearGrafoRecorridos(grafoRecorridos);

                opcion = NINGUNA;
                printf("CIUDADES CARGADAS CORRECTAMENTE\n");
                printLinea();

    while(opcion != OPCION_SALIDA){

        switch (opcion) {
            case REGISTRAR_RUTAS:
                printLinea();
                printf("Ingrese los codigos ciudad para agregar la ruta\n");
                printLinea();
                agregarRuta(grafoRecorridos);
                opcion = NINGUNA;
                printf("RUTA AGREGADA CORRECTAMENTE\n");
                printLinea();
                break;
            case BUSCAR_RECORRIDOS:
                printLinea();
                printf("Ingrese los codigos ciudad para buscar recorrido\n");
                printLinea();
                buscarRecorrido(grafoRecorridos);
                opcion = NINGUNA;
                printLinea();
                break;
            case REGISTRAR_LINEA:
                printLinea();
                printf("Ingrese los datos de la nueva linea\n");
                printLinea();
                agregarLinea(arbolLineas, hashCiudades);
                opcion = NINGUNA;
                printf("LINEA INGRESADA CORRECTAMENTE\n");
                printLinea();
                break;
            case LISTAR_LINEAS:
                printLinea();
                printf("A continuacion se listan todas las lineas del sistema\n");
                printLinea();
                listarLineas(arbolLineas);
                opcion = NINGUNA;
                printf("LINEAS LISTADAS CORRECTAMENTE\n");
                printLinea();
                break;
            case REGISTRAR_PARADA:
                printLinea();
                printf("Registro de Parada\n");
                printLinea();
                registrarParada(grafoRecorridos, arbolLineas);
                opcion = NINGUNA;
                printf("PARADA REGISTRADA CORRECTAMENTE\n");
                printLinea();
                break;
            case LISTAR_PARADAS:
                printLinea();
                printf("Ingresar linea para listar sus paradas\n");
                printLinea();
                listarParadas(arbolLineas);
                opcion = NINGUNA;
                printLinea();
                break;
            default:
                imprimirMenu(opcion);
                break;
        }
    }

}
