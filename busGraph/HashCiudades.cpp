//
//  HashCiudades.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#include "HashCiudades.h"

///<<<<<<< HEAD
///=======
void make(HashCiudades &ciudades){
    int i;
    for (i=0; i<CANT_CIUDADES; i++)
        crearLista(ciudades[i]);
}

void crearLista(lista ciudad){
    ciudad = NULL;
}

Boolean member(HashCiudades ciudades, String clave) {
    int cubeta = h(clave);
    if(cubeta < CANT_CIUDADES){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Ciudad Find(HashCiudades ciudades, String clave) {
    int cubeta = h(clave);
    return ciudades[cubeta] -> info;
}

void Insert(HashCiudades &ciudades, Ciudad ciudad) {
    String nombre = DarNombre(ciudad);
    int cubeta = h(nombre);
    insFront(ciudades[cubeta], ciudad);
}

void insFront(lista &L, Ciudad ciudad){
    lista aux = new nodo;
    aux -> info = ciudad;
    aux -> sig = L;
    L = aux;
}

int h(String clave){
    int i, dispercion, length;
    dispercion = 0;
    length = strlar(clave);
    for(i=0; i<length; i++){
        dispercion += clave[i];
        dispercion = dispercion % CANT_CIUDADES;
    }
    return dispercion;
}

void cargarDatosCiudadEnHash(HashCiudades &ciudades){
    Ciudad ciudad;
    cargarDatosCiudad(ciudad);
    Insert(ciudades, ciudad);
}
///>>>>>>> de2bf106f40b78f3b24bbbcc58eedfa1cb77a977
