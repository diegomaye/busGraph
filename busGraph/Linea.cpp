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

void DarCodigo(Linea &linea, String nombre){
    strcop(nombre, linea.codigoLinea);
}
