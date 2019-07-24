//
//  Linea.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Linea.h"

void cargarDatosLinea(Linea &linea, String parada, int ciudad){
    linea.codigoLinea = parada;
    linea.codigoOrigen = ciudad;
    linea.codigoDestino = ciudad;
}

void DarCodigoLinea(Linea linea, String &nombre){
    strcop(nombre, linea.codigoLinea);
}

void mostrarDatosLinea(Linea linea)
{
    printf("El codigo de linea es: \n");
    print(linea.codigoLinea);
    printf("La ciudad de origen es:%d\n",linea.codigoOrigen);
    printf("La ciudad de destino es destino es:%d\n",linea.codigoDestino);
}
