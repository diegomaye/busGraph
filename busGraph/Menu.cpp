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
    printf("4. Listar lineas\n");
    printf("5. Registar Parada\n");
    printf("6. Listar Paradas\n");
    printf("7. Salir\n");
    printf("opcion: ");
    scanf("%d",&opcion);
}

void cargarCiudad(GrafoRecorridos &grafoRecorridos){
    
}

void agregarRuta(GrafoRecorridos &grafoRecorridos){
    
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
