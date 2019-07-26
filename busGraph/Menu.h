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
const int REGISTRAR_RUTAS = 1;
const int BUSCAR_RECORRIDOS = 2;
const int REGISTRAR_LINEA = 3;
const int LISTAR_LINEAS = 4;
const int REGISTRAR_PARADA = 5;
const int LISTAR_PARADAS = 6;
const int OPCION_SALIDA = 7;

//Look&Feel
const int ROW_SIZE = 80;

void cargarLasCiudades(HashCiudades &hashCiudades);

void agregarRuta(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades);

void agregarLinea(ABBLineas &arbolLineas, HashCiudades hashCiudades);

void buscarRecorrido(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades);

void listarLineas(ABBLineas arbolLineas);

void registrarParada(ABBLineas &arbolLineas, GrafoRecorridos grafoRecorridos, HashCiudades ciudades);

void listarParadas(ABBLineas arbolLineas, HashCiudades ciudades);

void imprimirMenu(int &opcion);

void printLinea();

#endif /* Parser_h */
