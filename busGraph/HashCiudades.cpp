//
//  HashCiudades.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#include "HashCiudades.h"

void makeHash(HashCiudades &ciudades){
    int i;
    for (i=0; i<CANT_CIUDADES; i++)
        crearLista(ciudades[i]);
}

void crearLista(lista &ciudades){
    ciudades = NULL;
}

Boolean memberHash(HashCiudades ciudades, String clave) {
    int cubeta = h(clave);
    if(ciudades[cubeta] != NULL && ciudades[cubeta] -> info.nombre != NULL){
        return perteneceLista(ciudades[cubeta], clave);
    }
    else{
        return FALSE;
    }
}

Boolean perteneceLista(lista cubeta, String clave){
    Ciudad ciudad = cubeta -> info;
    String claveCiudad;
    strcrear(claveCiudad);
    DarNombre(ciudad,claveCiudad);
    if(streq(claveCiudad, clave)){
        return TRUE;
    }
    else if(cubeta -> sig == NULL){
        return FALSE;
    }
    else {
        return perteneceLista(cubeta -> sig, clave);
    }
}

/*PRECONDICION: La ciudad se enceuntra en el Hash (evaluar previament e con member)*/
Ciudad findHash(HashCiudades ciudades, String clave) {
    int cubeta = h(clave);
    return buscarLista(ciudades[cubeta], clave);
}

Ciudad buscarLista(lista cubeta, String clave){
    Ciudad ciudad = cubeta -> info;
    String claveCiudad;
    strcrear(claveCiudad);
    DarNombre(ciudad, claveCiudad);
    if(streq(claveCiudad, clave)){
        return ciudad;
    }
    else {
        return buscarLista(cubeta -> sig, clave);
    }
}

void insert(HashCiudades &ciudades, Ciudad ciudad) {
    String nombre;
    strcrear(nombre);
    DarNombre(ciudad, nombre);
    int cubeta = h(nombre);
    insFront(ciudades[cubeta], ciudad);
}

void insFront(lista &cubeta, Ciudad ciudad){
    lista aux = new nodo();
    aux -> info = ciudad;
    aux -> sig = cubeta;
    cubeta = aux;
}

int h(String clave){
    int i, dispercion, length;
    dispercion = 0;
    length = strlar(clave);
    for(i=0; i<length; i++){
        dispercion += clave[i];
    }
    dispercion = dispercion % CANT_CIUDADES;
    return dispercion;
}

void cargarDatosCiudadEnHash(HashCiudades &ciudades, int indice){
    Ciudad ciudad;
    String nombre;
    strcrear(nombre);
    Boolean esta = FALSE;
    do{
        printf("Nombre Ciudad:");
        scan(nombre);
        esta = memberHash(ciudades, nombre);
        if(esta == TRUE){
            printf("ERROR: ya existe una ciudad con este nombre:");
            print(nombre);
            printEnter();
        }
    } while (esta == TRUE);
    cargarDatosCiudad(ciudad, nombre, indice);
    insert(ciudades, ciudad);
}
