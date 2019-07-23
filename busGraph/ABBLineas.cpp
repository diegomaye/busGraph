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

/*void insertABB(ABBLineas &arbolLineas, Linea linea)
{
    if (arbolLineas == NULL)
    {
        arbolLineas = new NodoLinea;
        arbolLineas->info = linea;
        arbolLineas->hizq = NULL;
        arbolLineas->hder = NULL;
    }
    else
    {
        if (DarCodigo(linea) < DarCodigo(arbolLineas->info))
            insertABB(arbolLineas->hizq, linea);
        else
            InsertABB(arbolLineas->hder, linea);
    }
}*/

void cargarDatosArbolLineas(ABBLineas &arbolLineas, String parada, int ciudad)
{

}
