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

const int CANT_CIUDADES = 20;

typedef struct nodoL{
    Ciudad info;
    nodoL * sig;
} nodo;

typedef nodo* lista;

typedef lista HashCiudades[CANT_CIUDADES];

void make(HashCiudades &ciudades);
void crearLista(lista ciudades);

Boolean member(HashCiudades ciudades,String nombreCiudad);
void insert(HashCiudades &ciudades,Ciudad ciudad);
void insFront(lista &lista, Ciudad ciudad);
Ciudad find(HashCiudades ciudades, String nombreCiudad);

void cargarDatosCiudadEnHash(HashCiudades &ciudades);

int h(String clave);

#endif /* HashCiudades_h */
