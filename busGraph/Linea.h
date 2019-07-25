//
//  Linea.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Linea_h
#define Linea_h

#include <stdio.h>
#include "LPPFParadas.h"

typedef struct{
    LPPFParadas paradas;
    int cantidadParadas;
    String codigoLinea;
    String ciudadOrigen;
    String ciudadDestino;
} Linea;

void cargarDatosLinea(Linea &linea, String parada, String ciudad);
void mostrarDatosLinea(Linea linea);
void instertarParada(Linea &linea, Parada parada);

void DarCodigoLinea(Linea linea, String &nombre);

#endif /* Linea_h */
