//
//  ABBLineas.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Tipo Arbol Binario de Busqueda
//

#include "ABBLineas.h"

void MakeABB(ABBLineas &arbolLineas)
{
    arbolLineas=NULL;
}

void insertABB(ABBLineas &arbolLineas, Linea linea)
{
    if (arbolLineas == NULL)
    {
        arbolLineas = new NodoLinea;
        arbolLineas-> info = linea;
        arbolLineas-> hizq = NULL;
        arbolLineas-> hder = NULL;
    }
    else
    {
        String codigoLinea;
        String codigoLineaArbol;
        strcrear(codigoLinea);
        strcrear(codigoLineaArbol);
        DarCodigo(linea, codigoLinea);
        Linea linea2 = arbolLineas -> info;
        DarCodigo(linea2, codigoLineaArbol);
        if (strmen(codigoLinea, codigoLineaArbol))
            insertABB(arbolLineas->hizq, linea);
        else
            insertABB(arbolLineas->hder, linea);
    }
}

void cargarDatosArbolLineas(ABBLineas &arbolLineas, String parada, int ciudad){
    Linea linea;
    cargarDatosLinea(linea, parada, ciudad);
    insertABB(arbolLineas, linea);
}
