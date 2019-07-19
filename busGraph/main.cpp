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
    crearGrafoRecorridos(grafoRecorridos);
    ABBLineas arbolLineas;
    crearABBLineas(arbolLineas);
    Boolean salirSistema = FALSE;
    printf("///////////////////////////////////////////////////////////\n");
    printf("Bienvenido a busGraph, app para el manejo de lineas de transporte");
    printf("urbano.");
    printf("\n");
    printf("///////////////////////////////////////////////////////////\n");
    
    while(opcion != OPCION_SALIDA){
        switch (opcion) {
            case REGISTRAR_CIUDADES:
                printLinea();
                printf("Ingrese codigo y nombre de ciudad\n");
                printLinea();
                cargarCiudad(grafoRecorridos);
                opcion = NINGUNA;
                printf("CIUDAD CARGADA CORRECTAMENTE\n");
                printLinea();
                break;
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
