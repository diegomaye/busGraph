//
//  Ciudad.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Ciudad.h"

void cargarDatosCiudad(Ciudad &c)
{
    printf("Nombre Ciudad:");
    strcrear(c.nombre);
    scan(c.nombre);
    printf("Codigo Ciudad:");
    scanf("%d",&c.codigo);
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
