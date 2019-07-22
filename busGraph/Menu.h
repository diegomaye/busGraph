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
#include "HashCiudades.h"
#include "ABBLineas.h"

//Menu
const int NINGUNA = -1;
const int REGISTRAR_CIUDADES = 1;
const int REGISTRAR_RUTAS = 2;
const int BUSCAR_RECORRIDOS = 3;
const int REGISTRAR_LINEA = 4;
const int LISTAR_LINEAS = 5;
const int REGISTRAR_PARADA = 6;
const int LISTAR_PARADAS = 7;
const int OPCION_SALIDA = 8;

//Look&Feel
const int ROW_SIZE = 80;

void cargarCiudad(HashCiudades &hashCiudades);

void agregarRuta(GrafoRecorridos &grafoRecorridos);

void agregarLinea(ABBLineas &arbolLineas, HashCiudades hashCiudades);

void buscarRecorrido(GrafoRecorridos &grafoRecorridos);

void listarLineas(ABBLineas arbolLineas);

void registrarParada(GrafoRecorridos &grafoRecorridos, ABBLineas &arbolLineas);

void listarParadas(ABBLineas arbolLineas);

void imprimirMenu(int &opcion);

void printLinea();

#endif /* Parser_h */
