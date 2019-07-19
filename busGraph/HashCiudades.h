//
//  HashCiudades.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#ifndef HashCiudades_h
#define HashCiudades_h

#include <stdio.h>
#include "Ciudad.h"

const int CANT_CIUDADES = 50;

typedef struct nodoL{
    Ciudad info;
    nodoL * sig;
} nodo;

typedef nodo* lista;

typedef lista HashCiudades[CANT_CIUDADES];

#endif /* HashCiudades_h */
