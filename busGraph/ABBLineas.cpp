//
//  ABBLineas.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Tipo Arbol Binario de Busqueda
//

#include "ABBLineas.h"

void makeABB(ABBLineas &arbolLineas)
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
        DarCodigoLinea(linea, codigoLinea);
        Linea linea2 = arbolLineas -> info;
        DarCodigoLinea(linea2, codigoLineaArbol);
        if (strmen(codigoLinea, codigoLineaArbol))
            insertABB(arbolLineas->hizq, linea);
        else if(streq(codigoLinea, codigoLineaArbol)){
            arbolLineas -> info = linea;
        }
        else
            insertABB(arbolLineas->hder, linea);
    }
}

void cargarDatosArbolLineas(ABBLineas &arbolLineas, String parada, String ciudad){
    Linea linea;
    cargarDatosLinea(linea, parada, ciudad);
    insertABB(arbolLineas, linea);
}

void listarABB(ABBLineas arbolLineas)
{
    if (arbolLineas != NULL)
    {
        listarABB(arbolLineas-> hizq);
        mostrarDatosLinea(arbolLineas->info);
        listarABB(arbolLineas-> hder);
    }
}

Boolean memberABB(ABBLineas arbolLineas, String codigo)
{
    if (arbolLineas == NULL)
        return FALSE;
    else
    {
        Linea linea= arbolLineas->info;
        String codigoLinea;
        strcrear(codigoLinea);
        DarCodigoLinea(linea, codigoLinea);
        if (streq(codigo, codigoLinea))
            return TRUE;
        else {
            if (strmen(codigo, codigoLinea))
                return memberABB(arbolLineas->hizq, codigo);
            else
                return memberABB(arbolLineas->hder, codigo);
        }
    }
}

Linea findABB(ABBLineas arbolLineas, String codigo)
{
    Linea linea= arbolLineas->info;
    String codigoLinea;
    strcrear(codigoLinea);
    DarCodigoLinea(linea, codigoLinea);
    if (streq(codigo, codigoLinea))
        return linea;
    else {
        if (strmen(codigo, codigoLinea))
            return findABB(arbolLineas->hizq, codigo);
        else
            return findABB(arbolLineas->hder, codigo);
    }
}
