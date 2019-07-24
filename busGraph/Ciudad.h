//
//  Ciudad.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Ciudad_h
#define Ciudad_h

#include <stdio.h>
#include "String.h"

typedef struct{
    String nombre;
    int codigo;
} Ciudad;

void cargarDatosCiudad(Ciudad &ciudad, int indice);
void mostrarDatosCiudad(Ciudad ciudad);

int DarCodigo(Ciudad c);
void DarNombre(Ciudad c,String &clave);

#endif /* Ciudad_h */
