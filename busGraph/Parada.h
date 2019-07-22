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
    int codigoCiudad;
    String numeroParada;
} Parada;

void cargarDatosParada(Parada &p);
void mostrarDatosParada(Parada p);


#endif /* Parada_h */
