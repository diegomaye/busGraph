//
//  HashCiudades.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Hash
//

#include "HashCiudades.h"

int H(HashCiudades Hash_Ciudades)
{
    int disp=0;
    for(int i=0; i<CANT_CIUDADES; i++)
    {

    }


}

void Insert(HashCiudades &Hash_Ciudades,Ciudad c)
{
    int clave = darCodigoCiudad(c);
    int cubeta = H(clave);
    cargarDatosCiudad(H[cubeta],c);
}
