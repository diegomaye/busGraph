//
//  Lineas.hpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//

#ifndef Lineas_h
#define Lineas_h

#include <stdio.h>

struct nodo{
    int nro;
    struct nodo *izq, *der;
};

typedef struct nodo *Lineas;

#endif /* Lineas_h */
