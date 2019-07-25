//
//  Linea.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#include "Linea.h"

void cargarDatosLinea(Linea &linea, String parada, String ciudad){
    strcrear(linea.codigoLinea);
    linea.codigoLinea = parada;
    strcrear(linea.ciudadOrigen);
    strcop(linea.ciudadOrigen, ciudad);
    strcrear(linea.ciudadDestino);
    strcop(linea.ciudadDestino, ciudad);
    crearLPPFParadas(linea.paradas);
    linea.cantidadParadas = 1;
}

void DarCodigoLinea(Linea linea, String &nombre){
    strcop(nombre, linea.codigoLinea);
}

void mostrarDatosLinea(Linea linea)
{
    printf("El codigo de linea es:");
    print(linea.codigoLinea);
    printEnter();
    printf("La ciudad de origen es:");
    print(linea.ciudadOrigen);
    printEnter();
    printf("La ciudad de destino es destino es:");
    print(linea.ciudadDestino);
    printEnter();
    printf("Cantidad de paradas:%d", linea.cantidadParadas);
    printEnter();
}

void instertarParada(Linea &linea, Parada parada){
    linea.ciudadDestino = parada.nombreCiudad;
    linea.cantidadParadas++;
    insertarLPPFParada(linea.paradas, parada);
}
