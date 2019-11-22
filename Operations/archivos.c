#include <stdlib.h>
#include <stdio.h>
#include "pilae.h"

void extrar_archivo(pilae *a){
    int num = 0;
    char i = '0';
    FILE *archivo;
    archivo = fopen("archivo.txt", "r");
    while(i != EOF){
            i = fgetc(archivo);

            if(i == '+'){
                    suma(a);
                    i = fgetc(archivo);
            }
            else if(i == '-'){
                    resta(a);
                    i = fgetc(archivo);
            }
            else if(i == '*'){
                    multiplicacion(a);
                    i = fgetc(archivo);
            }
            else if(i == '/'){
                    dividir(a);
                    i = fgetc(archivo);
            }
            else if(i == ' '){
                    a = push(a,num);
                    num = 0;
            }
            else{
                    num = (num*10)+(i-48);
            }
    }
    fclose(archivo);
}
