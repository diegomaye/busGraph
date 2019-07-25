//
//  Parser.cpp
//  PolynomialCalculator
//
//  Created by Diego, Rodrigo & Pablo.
//

#include "Menu.h"

void imprimirMenu(int &opcion){
    printf("Elija lo que desea realizar\n");
    printf("1. Registrar una Ruta\n");
    printf("2. Buscar Recorrido\n");
    printf("3. Registar Linea\n");
    printf("4. Listar Lineas\n");
    printf("5. Registar Parada\n");
    printf("6. Listar Paradas\n");
    printf("7. Salir\n");
    printf("opcion: ");
    scanf("%d",&opcion);
}

void cargarLasCiudades(HashCiudades &hashCiudades){
    for(int i=0; i<CANT_CIUDADES; i++)
        cargarDatosCiudadEnHash(hashCiudades, i);
}

void agregarRuta(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades){
    cargarDatosAristaEnGrafo(grafoRecorridos, ciudades);
}

void agregarLinea(ABBLineas &arbolLineas, HashCiudades ciudades){
    String nombreCiudad;
    strcrear(nombreCiudad);
    String parada;
    strcrear(parada);
    printf("Ingrese codigo linea:");
    scan(parada);
    if(!esAlfanumerico(parada))
    {
        printf("ERROR: El codigo no es alfanumerico\n");
    }
    else
    {
        printf("Ingrese parada para la linea:");
        scan(nombreCiudad);
        if(memberHash(ciudades, nombreCiudad) == TRUE){
            Ciudad ciudad = findHash(ciudades, nombreCiudad);
            String nombreCiudad;
            strcrear(nombreCiudad);
            DarNombre(ciudad, nombreCiudad);
            cargarDatosArbolLineas(arbolLineas, parada, nombreCiudad);
            printf("LINEA INGRESADA CORRECTAMENTE\n");
        }
        else{
            printf("ERROR: La ciudad no existe\n");
        }
    }
}

void buscarRecorrido(GrafoRecorridos &grafoRecorridos, HashCiudades ciudades){
    String origen;
    strcrear(origen);
    printf("Ingrese ciudad de Origen:");
    scan(origen);
    if(memberHash(ciudades, origen) == TRUE){
        String destino;
        strcrear(destino);
        printf("Ingrese ciudad de Destino:");
        scan(destino);
        if(memberHash(ciudades, destino) == TRUE){
            Ciudad ciudadOrigen = findHash(ciudades, origen);
            int codigoOrigen = ciudadOrigen.codigo;
            Ciudad ciudadDestino = findHash(ciudades, destino);
            int codigoDestino = ciudadDestino.codigo;
            if(existeTramo(grafoRecorridos, codigoOrigen, codigoDestino) == TRUE){
                printf("Existe una secuencia de tramos que una ");
                print(origen);
                printf(" con ");
                print(destino);
                printEnter();
            }
            else{
                printf("No existe una secuencia de tramos que una ");
                print(origen);
                printf(" con ");
                print(destino);
                printEnter();
            }
        }
        else{
            printf("ERROR: La ciudad no de destino no existe\n");
        }
    }
    else{
        printf("ERROR: La ciudad no de origen no existe\n");
    }
    
}

void listarLineas(ABBLineas arbolLineas){
    listarABB(arbolLineas);
}

void registrarParada(ABBLineas &arbolLineas, HashCiudades ciudades){
    String codigoLinea;
    strcrear(codigoLinea);
    
    String parada;
    strcrear(parada);
    
    printf("Ingrese codigo de linea:");
    scan(codigoLinea);
    if(memberABB(arbolLineas, codigoLinea) == FALSE){
        printf("ERROR: La linea no existe\n");
    }
    else {
        printf("Ingrese ciudad de la parada:");
        scan(parada);
        
        if(memberHash(ciudades, parada) == FALSE){
            printf("ERROR: La ciudad no existe\n");
        }
        else
        {
            Linea linea = findABB(arbolLineas, codigoLinea);
            int numeroParada = 0;
            Parada instanciaParada;
            Ciudad ciudad = findHash(ciudades, parada);
            String nombreCiudad;
            strcrear(nombreCiudad);
            DarNombre(ciudad, nombreCiudad);
            cargarDatosParada(instanciaParada, numeroParada, nombreCiudad);
            instertarParada(linea, instanciaParada);
            printf("PARADA REGISTRADA CORRECTAMENTE\n");
        }
    }
    
}

void listarParadas(ABBLineas arbolLineas, HashCiudades ciudades){
    String codigoLinea;
    strcrear(codigoLinea);
    
    printf("Ingrese codigo de linea:");
    scan(codigoLinea);
    if(memberABB(arbolLineas, codigoLinea) == FALSE){
        printf("ERROR: La linea no existe\n");
    }
    else {
        Linea linea = findABB(arbolLineas, codigoLinea);
        listarLPPF(linea.paradas);
        printf("PARADAS LISTADAS CORRECTAMENTE\n");
    }
}

void printLinea(){
    for (int i= 0; i < ROW_SIZE; i++)
        printf("*");
    printf("\n");
}
