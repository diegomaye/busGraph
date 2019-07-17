//
//  Ciudades.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Ciudades_h
#define Ciudades_h

#include <stdio.h>
#include "Ciudad.h"
#include "Recorridos.h"

typedef struct nodoL{
    Ciudad info;
    nodoL * sig;
} nodo;

typedef nodo* lista;

typedef lista Ciudades[CANT_CIUDADES];

#endif /* Ciudades_h */
