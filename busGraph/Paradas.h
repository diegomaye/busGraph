//
//  Paradas.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Paradas_h
#define Paradas_h

#include <stdio.h>
#include "Parada.h"

typedef struct nodo_parada {
    Parada parada;
    nodo_parada * sig;
} NodoParada;

typedef struct  {
    NodoParada * primerParada;
    NodoParada * ultimaParada;
} Paradas;

#endif /* Paradas_h */
