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
    String codigoLinea;
    int codigoOrigen;
    int codigoDestino;
} Linea;

void cargarDatosLinea(Linea &linea, String parada, int ciudad);
void mostrarDatosLinea(Linea linea);

void DarCodigoLinea(Linea linea, String &nombre);

#endif /* Linea_h */
