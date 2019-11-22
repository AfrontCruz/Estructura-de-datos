#include <stdlib.h>
#include <stdio.h>
#include "colas.h"

void leer_archivo(cola *a)
{

    char aux = '0';
    int numero = 0;
    FILE *archivo;


    archivo = fopen("Archivo.txt","r");
    
    do
    {
    	aux = getc(archivo);
		//printf("El char es %c\n",aux);	
    	if(aux == ' ' || aux == EOF)
		{
		       a = Queue(a, numero);
			   numero = 0;
		}
		
		else
		{
    	       numero = (numero*10) + (aux - 48);
        }
        
	}while(aux != EOF);
	

    fclose(archivo);
}
