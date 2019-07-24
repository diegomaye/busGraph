//
//  LPPFParadas.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  (Secuenca) LPPF - Lista con Puntero al Principio y al Final
//

#ifndef LPPFParadas_h
#define LPPFParadas_h

#include <stdio.h>
#include "Parada.h"

typedef struct nodo_parada {
    Parada parada;
    nodo_parada * sig;
} NodoParada;

typedef struct  {
    NodoParada * primerParada;
    NodoParada * ultimaParada;
} LPPFParadas;

void crearLPPFParadas(LPPFParadas &lppfParadas);
void insertarLPPFParada(LPPFParadas &lppfParadas, Parada parada);
void listarLPPF(LPPFParadas lppfParadas);

#endif /* LPPFParadas_h */
