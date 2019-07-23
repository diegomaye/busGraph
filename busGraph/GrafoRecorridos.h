//
//  GrafoRecorridos.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Grafo, con representacion Matriz de Adyacencia.
//

#ifndef GrafoRecorridos_h
#define GrafoRecorridos_h

#include <stdio.h>
#include "HashCiudades.h"

typedef int GrafoRecorridos[CANT_CIUDADES][CANT_CIUDADES];

void crearGrafoRecorridos(GrafoRecorridos &grafoRecorridos);
Boolean perteneceArista(GrafoRecorridos grafoRecorridos , int vert1, int vert2);
void insertarArista(GrafoRecorridos &grafoRecorridos, int vert1,int vert2);
Boolean existeTramo(GrafoRecorridos grafoRecorridos, Ciudad uno, Ciudad dos);

void cargarDatosAristaEnGrafo(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades);

#endif /* GrafoRecorridos_h */
