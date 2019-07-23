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

void cargarDatosCiudad(Ciudad &c);
void mostrarDatosCiudad(Ciudad c);

///<<<<<<< HEAD
///=======
int DarCodigo(Ciudad c);
String DarNombre(Ciudad c);
///>>>>>>> de2bf106f40b78f3b24bbbcc58eedfa1cb77a977
#endif /* Ciudad_h */
