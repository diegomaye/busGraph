//
//  Parser.cpp
//  PolynomialCalculator
//
//  Created by Diego, Rodrigo & Pablo.
//

#include "Menu.h"

void imprimirMenu(int &opcion){
    printf("Elija lo que desea realizar\n");
    printf("1. Registrar una Ciudad\n");
    printf("2. Registrar una Ruta\n");
    printf("3. Buscar recorrido entre ciudades\n");
    printf("4. Registar Linea\n");
    printf("5. Listar lineas\n");
    printf("6. Registar Parada\n");
    printf("7. Listar Paradas\n");
    printf("8. Salir\n");
    printf("opcion: ");
    scanf("%d",&opcion);
}

void cargarCiudad(HashCiudades &hashCiudades){
    for(int i=0; i<CANT_CIUDADES; i++)
        cargarDatosCiudadEnHash(hashCiudades);

}

void agregarRuta(GrafoRecorridos &grafoRecorridos){
    cargarDatosAristaEnGrafo(grafoRecorridos);
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
        Ciudad ciudad = Find(ciudades, nombreCiudad);
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
