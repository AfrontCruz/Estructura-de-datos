#include<stdio.h>
#include<stdlib.h>
#include "colas.h"

void archivo() //ESTA FUNCION LEE LOS ARCHIVOS CARACTER A CARACTER Y EN UN VECTOR DINAMICO DE 127 ELEMENTOS
{              //SE LE SUMA EL CARACTER EN ASCII
  int *vector;
  int i = 0, k = 0;
  FILE *a, *frec;

  a = fopen("Archivo.txt","r");
  frec = fopen("Frecuencias.txt","w");
  vector = (int*)calloc(255,sizeof(int));

  while(i != EOF)  //ESTE BUCLE RECORRER EL ARCHIVO HASTA TERMINARLO CARACTER A CARACTER Y SUMA EN EL VECTOR
  {
    i = getc(a);
    if(i > 0)
        vector[i]++;
  }
  vector[10]--; //ESTA RESTA ES DEBIDO A QUE AL FINAL AGREGA UN SALTO DE LINEA POR EL "getc" PERO NO EXISTE COMO TAL
  vector[13] = 0; //EL 13 EN ASCII ES EL RETORNO DE CARRO POR LO TANTO NO SIRVE EL TEXTO ESTA FORMATEADO


  for(i = 0; i < 255; i++) //ESTA PARTE IMPRIMER LOS CARACTERES Y SUS REPETICIONES
    if(vector[i] != 0)
        if(i == '\n')
          fprintf(frec,"Salto de linea: %i\n", vector[i]);
        else if(i == ' ')
          fprintf(frec,"Espacio: %i\n", vector[i]);
        else
          fprintf(frec,"%c: %i\n", i, vector[i]);
    else
        k++;

  fclose(a);
  fclose(frec);
  crear(vector);
}

void mayus()
{
    FILE *original, *copia;
    char nombre[20];
    char copias[20];
    char aux;
    system("dir /B *txt");
    puts("Introduce el nombre del archivo que quieres pasar a mayúsculas:");
    gets(nombre);
    puts("Introduce el nombre del nuevo archivo:");
    gets(copias);
    original = fopen(nombre,"r");
    copia = fopen(copias,"w");
    while(aux != EOF)
    {
        aux = getc(original);
        if(aux > 96 && aux < 123)
            aux = aux - 32;
        if(aux == 'á')
            fprintf(copia,"A");
        else if(aux == 'é')
            fprintf(copia,"E");
        else if(aux == 'í')
            fprintf(copia,"I");
        else if(aux == 'ó')
            fprintf(copia,"O");
        else if(aux == 'ú')
            fprintf(copia,"U");
        else if(aux == 'ü')
            fprintf(copia,"U");
        else if(aux == 'ñ')
            fprintf(copia,"Ñ");
        else if(aux > 0)
            fprintf(copia,"%c",aux);
    }
    fclose(original);
    fclose(copia);
}
