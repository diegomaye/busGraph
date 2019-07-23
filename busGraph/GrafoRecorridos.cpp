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

void cargarDatosAristaEnGrafo(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades){
    String origen;
    String destino;
    printf("Nombre ciudad origen:");
    strcrear(origen);
    scan(origen);
    printf("Nombre ciudad destino:");
    strcrear(destino);
    scan(destino);
    if(member(ciudades, origen)){
        Ciudad ciudadOrigen = find(ciudades, origen);
        int codigoOrigen = DarCodigo(ciudadOrigen);
        if(member(ciudades, destino)){
            Ciudad ciudadDestino = find(ciudades, destino);
            int codigoDestino = DarCodigo(ciudadDestino);
            insertarArista(grafoRecorridos, codigoOrigen, codigoDestino);
            printf("RUTA AGREGADA CORRECTAMENTE\n");
        }
        else{
            printf("NOMBRE CIUDAD DESTINO NO ENCONTRADO\n");
        }
    }
    else{
        printf("NOMBRE CIUDAD ORIGEN NO ENCONTRADO\n");
    }
}

Boolean ExisteTramo(GrafoRecorridos grafoRecorridos, HashCiudades ciudades)
{
    Boolean existe=FALSE;
    Boolean visitado[CANT_CIUDADES];
    ///PASAR LOS NOMBRES STRING A CODiGOS ENTEROS
    ///Estos dos enteros deberian de ser los codigos de la ciudad ingresada
    int ciudadActual;
    int ciudadDos;
    for(int i=0;i<CANT_CIUDADES;i++)
    {
        visitado[i]=FALSE;
    }
    DFS(grafoRecorridos,ciudadActual, ciudadDos, visitado,existe);
    return existe;
}
void DFS(GrafoRecorridos grafoRecorridos, int Ciudadactual, int ciudadDos, Boolean visitado[CANT_CIUDADES], Boolean &existe)
{
    int i=0;
    visitado[Ciudadactual]=TRUE;
    while(i<CANT_CIUDADES && !visitado[ciudadDos])
    {
        if(grafoRecorridos[Ciudadactual][i]==1)
        {
            if(!visitado[i])
                DFS(grafoRecorridos,i,ciudadDos,visitado,existe);
        }
        else
            existe=FALSE;
    }
}

