//
//  Parada.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Parada.h"

void cargarDatosParada(Parada &p)
{
    printf("Ingrese el codigo de la ciudad: ");
    scanf("%d",&p.codigoCiudad);
    printf("\nIngrese el numero de parada: ");
    scanf("%d",&p.numeroParada);
}

void mostrarDatosParada(Parada p)
{
    printf("El codigo de la ciudad es:%d",p.codigoCiudad);
    printf("\nEl numero de la ciudad es:%d",p.numeroParada);

}
