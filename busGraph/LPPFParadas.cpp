//
//  LPPFParadas.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  (Secuenca) LPPF - Lista con Puntero al Principio y al Final
//

#include "LPPFParadas.h"

void crearLPPFParadas(LPPFParadas &lppfParadas) {
    lppfParadas.primerParada = NULL;
    lppfParadas.ultimaParada = NULL;
}

void insertarLPPFParada(LPPFParadas &lppfParadas, Parada parada) {
    NodoParada * nuevo = new NodoParada;
    nuevo -> parada = parada;
    nuevo -> sig = NULL;
    if(lppfParadas.ultimaParada == NULL){
        lppfParadas.ultimaParada = NULL;
        lppfParadas.primerParada = nuevo;
    } else {
        lppfParadas.ultimaParada -> sig= nuevo;
        lppfParadas.ultimaParada = nuevo;
    }
}

void listarLPPF(LPPFParadas lppfParadas){

    while(lppfParadas.primerParada != NULL)
    {
        mostrarDatosParada(lppfParadas.primerParada->parada);
        lppfParadas.primerParada=lppfParadas.primerParada->sig;
    }
}

