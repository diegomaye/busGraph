//
//  Parada.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Parada_h
#define Parada_h

#include <stdio.h>
#include "String.h"

typedef struct{
    int numeroParada;
    String nombreCiudad;
} Parada;

void cargarDatosParada(Parada &p, int numeroParada, String nombreCiudad);
void mostrarDatosParada(Parada p);


#endif /* Parada_h */
