//
//  Parser.h
//  PolynomialCalculator
//
//  Created by Diego, Rodrigo & Pablo.
//

#ifndef Parser_h
#define Parser_h

#include "Error.h"
#include "GrafoRecorridos.h"
#include "ABBLineas.h"

//Menu
const int NINGUNA = -1;
const int REGISTRAR_CIUDADES = 1;
const int REGISTRAR_RUTAS = 2;
const int BUSCAR_RECORRIDOS = 3;
const int LISTAR_LINEAS = 4;
const int REGISTRAR_PARADA = 5;
const int LISTAR_PARADAS = 6;
const int OPCION_SALIDA = 7;

//Look&Feel
const int ROW_SIZE = 80;

void cargarCiudad(GrafoRecorridos &grafoRecorridos);

void agregarRuta(GrafoRecorridos &grafoRecorridos);

void buscarRecorrido(GrafoRecorridos &grafoRecorridos);

void listarLineas(ABBLineas arbolLineas);

void registrarParada(GrafoRecorridos &grafoRecorridos, ABBLineas &arbolLineas);

void listarParadas(ABBLineas arbolLineas);

void imprimirMenu(int &opcion);

void printLinea();

#endif /* Parser_h */
