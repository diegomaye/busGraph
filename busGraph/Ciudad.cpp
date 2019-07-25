//
//  Ciudad.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Ciudad.h"

void cargarDatosCiudad(Ciudad &ciudad, String nombre, int indice)
{
    ciudad.nombre = nombre;
    ciudad.codigo = indice;
}

void mostrarDatosCiudad(Ciudad ciudad)
{
    printf("El nombre de la ciudad es: ");
    print(ciudad.nombre);
    printf("\nEl codigo de la ciudad es:%d", ciudad.codigo);
}

int DarCodigo(Ciudad ciudad){
    return ciudad.codigo;
}

void DarNombre(Ciudad ciudad, String &nombre){
    nombre = ciudad.nombre;
}
