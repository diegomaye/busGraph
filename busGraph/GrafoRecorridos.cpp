//
//  GrafoRecorridos.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Grafo, con representacion Matriz de Adyacencia.
//

#include "GrafoRecorridos.h"

void crearGrafoRecorridos(GrafoRecorridos &grafoRecorridos){
    for (int i=0; i<CANT_CIUDADES; i++)
        for (int j=0; j<CANT_CIUDADES; j++)
            grafoRecorridos[i][j]=0;
}

Boolean perteneceArista(GrafoRecorridos grafoRecorridos , int vert1, int vert2){
    Boolean pertenece=FALSE;
    if(grafoRecorridos[vert1][vert2]==1)
        pertenece=TRUE;
    return pertenece;

}


void insertarArista(GrafoRecorridos &grafoRecorridos, int vert1, int vert2){
    grafoRecorridos[vert1][vert2]=1;
        if (vert1 != vert2)
            grafoRecorridos[vert2][vert1]=1;
}

Boolean existeTramo(GrafoRecorridos grafoRecorridos, Ciudad uno, Ciudad dos){
    return TRUE;
}

void cargarDatosAristaEnGrafo(GrafoRecorridos &grafoRecorridos){
    int origenVertice;
    int destinoVertice;
    String origen;
    String destino;
    printf("Nombre ciudad origen:");
    strcrear(origen);
    scan(origen);
    printf("Nombre ciudad destino:");
    strcrear(destino);
    scan(destino);
    int dispOrigen=h(origen);
    origenVertice=dispOrigen;
    int dispDestino=h(destino);
    destinoVertice=dispDestino;
    insertarArista(grafoRecorridos, origenVertice,destinoVertice);
}
