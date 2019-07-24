//
//  HashCiudades.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#include "HashCiudades.h"

void make(HashCiudades &ciudades){
    int i;
    for (i=0; i<CANT_CIUDADES; i++)
        crearLista(ciudades[i]);
}

void crearLista(lista ciudades){
    ciudades = NULL;
}
Boolean member(HashCiudades ciudades, String clave) {
    /*int cubeta = h(clave);
    lista aux=ciudades[cubeta];
    if(aux == NULL){
        return FALSE;
    }
    else{
        return perteneceLista(aux, clave);
    }*/
    int cubeta = h(clave);
    return perteneceLista(ciudades[cubeta],clave);

}

Boolean perteneceLista(lista cubeta, String clave){
    /*Ciudad ciudad = cubeta -> info;
    String claveCiudad;
    strcrear(claveCiudad);
    DarNombre(ciudad,claveCiudad);
    if(strreq(claveCiudad,clave)){
        return TRUE;
    }
    else if(cubeta -> sig == NULL){
        return FALSE;
    }
    else {
        return perteneceLista(cubeta -> sig, clave);
    }*/
    Boolean esta=FALSE;
    String aux;
    strcrear(aux);
    while((cubeta!=NULL)&&!esta)
    {
        DarNombre(cubeta->info,aux);
        if(strreq(aux,clave))
        {
            esta=TRUE;
        }
        else
        {
            cubeta=cubeta->sig;
            strdestruir(aux);
        }
    }
    return esta;
}




/*PRECONDICION: La ciudad se enceuntra en el Hash (evaluar previamente con member)*/
Ciudad find(HashCiudades ciudades, String clave) {
    int cubeta = h(clave);
    return buscarLista(ciudades[cubeta], clave);
}

Ciudad buscarLista(lista cubeta, String clave){
    Ciudad ciudad = cubeta -> info;
    String claveCiudad = DarNombre(ciudad);
    if(strreq(claveCiudad, clave)){
        return ciudad;
    }
    else {
        return buscarLista(cubeta -> sig, clave);
    }
}

void insert(HashCiudades &ciudades, Ciudad ciudad) {
    String nombre = DarNombre(ciudad);
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
    cargarDatosCiudad(ciudad, indice);
    insert(ciudades, ciudad);
}
