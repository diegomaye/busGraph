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
    int codigoLinea;
    int codigoOrigen;
    int codigoDestino;
} Linea;

#endif /* Linea_h */
