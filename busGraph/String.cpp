//
//  String.cpp
//  Obligatorio2-P2
//
//  Created by diegomaye on 11/23/18.
//  Copyright © 2018 Diego Maye. All rights reserved.
//

#include "String.h"

void strcrear(String &s)
{
    s = new char[1];
    s[0]=VACIO;
}

void strdestruir(String &s)
{
    delete [] s;
    s=NULL;
}

int strlar(String s)
{
    int i=0;
    while(s[i] != VACIO)
        i++;
    return i;
}

void strcop(String &s1,String s2)
{
    int largo=strlar(s2);
    strdestruir(s1);
    s1= new char[largo+1];
    int i=0;
    while(s2[i] != VACIO)
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]=VACIO;
}

void scan(String &s)
{
    String aux;
    aux = new char[MAX];
    int i=0;
    char c;
    fflush(stdin);
#ifdef LINUX_KEY_WORD
    scanf(" %c",&c);
#elif WINDOWS_KEY_WORD
    scanf("%c",&c);
#else
    scanf(" %c",&c);
#endif
    while(c != ENTER && i<MAX-1)
    {
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i]=VACIO;
    strcop(s, aux);
    strdestruir(aux);
}

void strcon(String &s1,String s2)
{
    String aux;
    int cant=0;
    int i=0;
    int j=0;

    cant=strlar(s1)+strlar(s2)+1;

    aux= new char[cant];

    while(i<MAX-1 && s1[i] != VACIO)
    {
        aux[i]=s1[i];
        i++;
    }
    while(i<MAX-1 && s2[j] != VACIO)
    {
        aux[i]=s2[j];
        i++;
        j++;
    }
    aux[i]=VACIO;

    strdestruir(s1);
    s1=aux;
}

void strswp(String &s1,String &s2)
{
    String aux;

    aux=s1;
    s1=s2;
    s2=aux;
}

void print(String s)
{
    int i=0;
    while(s[i]!= VACIO)
    {
        printf("%c",s[i]);
        i++;
    }
}

void printIn(String s, int espacio)
{
    int i=0;
    while(s[i]!= VACIO)
    {
        printf("%c",s[i]);
        i++;
    }
    printSpaces(espacio - i);
}

void printSpaces(int espacio)
{
    int i;
    for(i = 0; i<espacio; i++)
        printf(" ");
}

void printEnter()
{
    printf("%c",ENTER);
}


Boolean strmen(String s1,String s2)
{
    Boolean resu;
    int i=0;
    while((s1[i]==s2[i]) && (s1[i] != VACIO) && (s2[i] != VACIO))
    {
        if(s1[i]==s2[i])
            i++;
        else
            resu=FALSE;
    }
    if(s1[i] < s2[i]){
        resu=TRUE;
    }
    else {
        resu=FALSE;
    }

    return resu;
}

Boolean strreq(String s1,String s2)
{
    Boolean resu;
    int i=0;

    while((s1[i]==s2[i]) && (s1[i] != VACIO) && (s2[i] != VACIO))
    {
        if(s1[i]==s2[i])
            i++;
        else
            resu=FALSE;
    }
    if(s1[i]==s2[i])
        resu=TRUE;
    else
        resu=FALSE;

    return resu;
}

void toString(String s, FILE * f){
    int i=0;
    while (s[i] != VACIO) {
        fwrite (&s[i], sizeof(char), 1, f);
        i++;
    }
    fwrite (&s[i], sizeof(char), 1, f);
}

void fromString(String &s, FILE * f){
    int i=0;
    String aux;
    aux = new char[MAX];
    fread (&aux[i], sizeof(char), 1, f);
    while (!feof(f) && (aux[i] != VACIO)) {
        i++;
        fread (&aux[i], sizeof(char), 1, f);
    }
    strcop (s, aux);
    delete [] aux;
}
Boolean esAlfanumerico(String s)
{
    int i = 0;
    Boolean resultado = TRUE;
    if (strlar(s) == 0)
        resultado = FALSE;
    else {
        while(s[i] != VACIO && resultado)
        {
            if(((s[i] >= 'a')&&(s[i]<='z'))||((s[i] >= 'A')&&(s[i]<='Z'))||((s[i]>='0')&&(s[i]<='9')))
             {
                i++;
             }
            else
            {
                resultado = FALSE;
            }
        }
    }

    return resultado;
}

Boolean esNumerico(String s) // TODO: VERIFICAR TAMBIEN QUE PUEDA SER UN NUMERO NEGATIVOtr
{
    int i = 0;
    Boolean resultado=TRUE;
    if (s[i] == '-')
        i = 1;
    else if (s[i] == '+')
        i = 1;
    if (s[i] == VACIO)
        resultado = FALSE;
    while(s[i]!=VACIO && resultado)
    {
        if((s[i]>='0') && (s[i]<='9'))
            i++;
        else
            resultado=FALSE;
    }
    return resultado;
}

int convertirANumero(String s)
{
    int num=atoi(s);
    return num;

}

Boolean cantidadPuntosEnString(String s)
{
    Boolean cumplePuntos;
    int total=0;
    int i=0;
    while(s[i] != VACIO)
    {
        if(s[i] == '.')
        {
            total=total+1;
            i++;
        }
        else
            i++;
    }
    if(total==1)
        cumplePuntos=TRUE;
    else
        cumplePuntos=FALSE;

    return cumplePuntos;
}

Boolean validarExtension(String nombreArchivo)
{
    Boolean resultado = FALSE;
    String nombre = new char[MAX];
    int i = 0;
    if(cantidadPuntosEnString(nombreArchivo))
    {
        while (nombreArchivo[i]!='.' && nombreArchivo[i]!=VACIO) {
        nombre[i] = nombreArchivo[i];
        i++;
        }
        nombre[i] = VACIO;
        if (esAlfanumerico(nombre)) {
            int largo = strlar(nombreArchivo);
            String ext = new char[5];
            int j = 0;
            int k = largo - 4;
            while (nombreArchivo[k]!=VACIO) {
                ext[j] = nombreArchivo[k];
                j++;
                k++;
            }
            ext[j] = VACIO;
            String txt = new char[5];
            txt[0] = '.';
            txt[1] = 't';
            txt[2] = 'x';
            txt[3] = 't';
            txt[4] = VACIO;
            if (strreq(ext, txt)) {
                strcon(nombre, ext);
                if (strreq(nombreArchivo, nombre)) {
                    resultado = TRUE;
                }
            }
        }
    }
    return resultado;
}

