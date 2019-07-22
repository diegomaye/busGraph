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

int H(HashCiudades Hash_Ciudades);


///Primitivas
void Make(HashCiudades &Hash_Ciudades);
Boolean Member(HashCiudades Hash_Ciudades,String nombreCiudad);
void Insert(HashCiudades &Hash_Ciudades,Ciudad c);
Ciudad Find(HashCiudades Hash_Ciudades, String nombreCiudad);


#endif /* HashCiudades_h */
