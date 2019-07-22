//
//  HashCiudades.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#include "HashCiudades.h"

void Make(HashCiudades &ciudades){
    int i;
    for (i=0; i<CANT_CIUDADES; i++)
        CrearLista(ciudades[i]);
}

void CrearLista(lista ciudad){
    ciudad = NULL;
}

Boolean Member(HashCiudades ciudades, int clave) {
    int cubeta = h(clave);
    if(cubeta < CANT_CIUDADES){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Ciudad Find(HashCiudades ciudades, int clave) {
    int cubeta = h(clave);
    return ciudades[cubeta] -> info;
}

void Insert(HashCiudades &ciudades, Ciudad ciudad) {
    int clave = DarCodigo(ciudad);
    int cubeta = h(clave);
    InsFront(ciudades[cubeta], ciudad);
}

void InsFront(lista &L, Ciudad ciudad){
    lista aux = new nodo;
    aux -> info = ciudad;
    aux -> sig = L;
    L = aux;
}

int h(int clave){
    return clave - 1;//El codigo de ciudad va a ser el indice del arreglo del hash mas uno por eso la resta
}
