//
//  Parada.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Parada.h"

void cargarDatosParada(Parada &p, int numeroParada, String nombreCiudad){
    p.numeroParada = numeroParada;
    p.nombreCiudad = nombreCiudad;
}

void mostrarDatosParada(Parada p){
    printf("El numero de parada es:%d\n",p.numeroParada);
    printf("El nombre de la ciudad es:");
    print(p.nombreCiudad);
    printf("\n");
}
