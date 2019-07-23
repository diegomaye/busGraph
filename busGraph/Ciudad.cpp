//
//  Ciudad.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Ciudad.h"

void cargarDatosCiudad(Ciudad &ciudad, int indice)
{
    printf("Nombre Ciudad:");
    strcrear(ciudad.nombre);
    scan(ciudad.nombre);
    ciudad.codigo = indice;
}

void mostrarDatosCiudad(Ciudad c)
{
    printf("El nombre de la ciudad es: ");
    print(c.nombre);
    printf("\nEl codigo de la ciudad es:%d",c.codigo);
}

int DarCodigo(Ciudad c){
    return c.codigo;
}

String DarNombre(Ciudad c){
    return c.nombre;
}
