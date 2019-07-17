//
//  Error.\n"},h
//  PolynomialCalculator
//
//  Created by Diego, Rodrigo & Pablo.\n"},
//  Copyright © 2019 Code4Business.\n"}, All rights reserved.\n"},
//

#ifndef Error_h
#define Error_h

#include <stdio.h>
#include "String.h"

typedef enum {
    FORMATO_POLINOMIO_INCORRECTO,
    STRING_ALFANUMERICO,
    STRING_ALFANUMERICO1,
    STRING_ALFANUMERICO2,
    STRING_ALFANUMERICO3,
    CANTIDAD_PARAMETROS,
    NOMBRE_INCORRECTO,
    POLINOMIO_EXISTENTE,
    COEFICIENTE_CERO,
    FALTA_NOMBRE,
    POLINOMIO_NO_EXISTENTE,
    POLINOMIO_NO_EXISTENTE_SUMA1,
    POLINOMIO_NO_EXISTENTE_SUMA2,
    POLINOMIO_NO_EXISTENTE_SUMA,
    POLINOMIO_NO_EXISTENTE_PRODUCTO1,
    POLINOMIO_NO_EXISTENTE_PRODUCTO2,
    POLINOMIO_NO_EXISTENTE_PRODUCTO,
    COEFICIENTE_NUMERICOS,
    CANTIDAD_PARAMETROS_MULTILICACION,
    CANTIDAD_PARAMETROS_SUMA,
    VALOR_PARA_EVALUAR,
    RESULTADO_EVALUAR_ERROR,
    RESULTADO_EVALUAR_CORRECTO,
    POLINOMIO_NO_EXISTENTE_EN_MEMORIA,
    FORMATO_ARCHIVO_INCORRECTO,
    NOMBRE_EXTENSION_INCORRECTO,
    EXISTE_ARCHIVO,
    NO_EXISTE_ARCHIVO,
    COMANDO_INGRESADO_NO_EXISTE,
    COMANDO_ABORTADO,
    RESPUESTA_INCORRECTA
} Error;

typedef struct { Error value; char * descripcion; } Mensaje;

const Mensaje listaErrores[] = {
    {FORMATO_POLINOMIO_INCORRECTO, "El formato del nombre del polinomio no es correcto.\n"},
    {STRING_ALFANUMERICO, "El nombre del Polinomio debe ser alfanumerico.\n"},
    {STRING_ALFANUMERICO1, "El nombre del Polinomio del primer parametro debe ser alfanumerico.\n"},
    {CANTIDAD_PARAMETROS, "Cantidad incorrecta de parametros.\n"},
    {NOMBRE_INCORRECTO, "El formato del nombre del polinomio no es correcto.\n"},
    {POLINOMIO_EXISTENTE, "El polinomio a ser creado ya existe.\n"},
    {COEFICIENTE_CERO, "El primer coeficiente no puede ser cero.\n"},
    {FALTA_NOMBRE, "Cantidad de parametros incorrecta.\n"},
    {POLINOMIO_NO_EXISTENTE, "Polinomio ingresado no existe en el ABB.\n"},
    {POLINOMIO_NO_EXISTENTE_SUMA1, "El nombre del primer polinomio de la suma no existe.\n"},
    {POLINOMIO_NO_EXISTENTE_SUMA2, "El nombre del segundo polinomio de la suma no existe.\n"},
    {POLINOMIO_NO_EXISTENTE_SUMA, "Ninguno de los nombres ingresados para la suma existen.\n"},
    {POLINOMIO_NO_EXISTENTE_PRODUCTO1, "El nombre del primer polinomio del producto no existe.\n"},
    {POLINOMIO_NO_EXISTENTE_PRODUCTO2, "El nombre del segundo polinomio del producto no existe.\n"},
    {POLINOMIO_NO_EXISTENTE_PRODUCTO, "Ninguno de los nombres ingresados para el producto existen.\n"},
    {COEFICIENTE_NUMERICOS, "Los coeficientes del polinomio tiene que ser numeros.\n"},
    {CANTIDAD_PARAMETROS_MULTILICACION, "La multiplicacion debe tener 3 parametros.\n"},
    {CANTIDAD_PARAMETROS_SUMA, "La suma debe tener 3 parametros.\n"},
    {VALOR_PARA_EVALUAR, "El valor a evaluar debe ser numerico.\n"},
    {RESULTADO_EVALUAR_ERROR, "No es raiz.\n"},
    {RESULTADO_EVALUAR_CORRECTO, "Si es raiz.\n"},
    {POLINOMIO_NO_EXISTENTE_EN_MEMORIA, "No existe ningun polinomio en memoria.\n"},
    {FORMATO_ARCHIVO_INCORRECTO, "El formato del nombre del archivo no es correcto.\n"},
    {NOMBRE_EXTENSION_INCORRECTO, "El nombre o la extension no es correcto.\n"},
    {EXISTE_ARCHIVO, "Desea sobreescribir el archivo? Digite S o N\n"},
    {NO_EXISTE_ARCHIVO, "No existe un archivo en el disco con el nombre ingresado.\n"},
    {COMANDO_INGRESADO_NO_EXISTE, "El comando ingresado es incorrecto.\n"},
    {COMANDO_ABORTADO, "Comando abortado.\n"},
    {RESPUESTA_INCORRECTA, "Su respuesta no fue la correcta. Comando abortado.\n"}

};

char* mostrarError(Error error);

#endif /* Error_h */
