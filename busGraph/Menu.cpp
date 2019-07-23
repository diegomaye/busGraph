//
//  Parser.cpp
//  PolynomialCalculator
//
//  Created by Diego, Rodrigo & Pablo.
//

#include "Menu.h"

void imprimirMenu(int &opcion){
    printf("Elija lo que desea realizar\n");
    printf("1. Registrar una Ruta\n");
    printf("2. Buscar recorrido entre ciudades\n");
    printf("3. Registar Linea\n");
    printf("4. Listar lineas\n");
    printf("5. Registar Parada\n");
    printf("6. Listar Paradas\n");
    printf("7. Salir\n");
    printf("opcion: ");
    scanf("%d",&opcion);
}

void cargarLasCiudades(HashCiudades &hashCiudades){
    for(int i=0; i<CANT_CIUDADES; i++)
        cargarDatosCiudadEnHash(hashCiudades, i);
}

void agregarRuta(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades){
    cargarDatosAristaEnGrafo(grafoRecorridos, ciudades);
}

void agregarLinea(ABBLineas &arbolLineas, HashCiudades ciudades){
    String nombreCiudad;
    strcrear(nombreCiudad);
    String parada;
    strcrear(parada);
    printf("Ingrese codigo linea:");
    scan(parada);
    printf("Ingrese parada para la linea:");
    scan(nombreCiudad);
    if(member(ciudades, nombreCiudad)==TRUE){
        Ciudad ciudad = find(ciudades, nombreCiudad);
        cargarDatosArbolLineas(arbolLineas, parada, DarCodigo(ciudad));
    }

}

void buscarRecorrido(GrafoRecorridos &grafoRecorridos){

}

void listarLineas(ABBLineas arbolLineas){

}

void registrarParada(GrafoRecorridos &grafoRecorridos, ABBLineas &arbolLineas){

}

void listarParadas(ABBLineas arbolLineas){

}

void printLinea(){
    for (int i= 0; i < ROW_SIZE; i++)
        printf("*");
    printf("\n");
}
