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

const int CANT_CIUDADES = 3;

typedef struct nodoL{
    Ciudad info;
    nodoL * sig;
} nodo;

typedef nodo* lista;

typedef lista HashCiudades[CANT_CIUDADES];

void makeHash(HashCiudades &ciudades);
void crearLista(lista &ciudades);

Boolean memberHash(HashCiudades ciudades,String nombreCiudad);
Boolean perteneceLista(lista cubeta, String clave);
void insert(HashCiudades &ciudades,Ciudad ciudad);
void insFront(lista &cubeta, Ciudad ciudad);
Ciudad findHash(HashCiudades ciudades, String nombreCiudad);
Ciudad buscarLista(lista cubeta, String clave);

void cargarDatosCiudadEnHash(HashCiudades &ciudades, int indice);

int h(String clave);

#endif /* HashCiudades_h */
