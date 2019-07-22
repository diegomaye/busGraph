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
#include "HashCiudades.h"

#include <stdio.h>

typedef int GrafoRecorridos[CANT_CIUDADES][CANT_CIUDADES];

void crearGrafoRecorridos(GrafoRecorridos &grafoRecorridos);
Boolean PerteneceArista(GrafoRecorridos grafoRecorridos , int vert1, int vert2);
void InsertarArista(GrafoRecorridos &grafoRecorridos, int vert1,int vert2);
Boolean existeTramo(GrafoRecorridos grafoRecorridos, Ciudad uno, Ciudad dos);


#endif /* GrafoRecorridos_h */
