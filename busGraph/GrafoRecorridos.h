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

#endif /* GrafoRecorridos_h */
