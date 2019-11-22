#include <stdio.h>
#include <stdlib.h>
#include "complejo.h"
#include <math.h>

complejo *Complejo(float re, float im){
	complejo *resc = malloc(sizeof(complejo));
	resc->re= re;
	resc->im= im;
    return resc;

}

void destruyeComplejo(complejo *c){
	free(c);
}

complejo *sumaComplejo(complejo *c1, complejo *c2){
	complejo *resc=malloc(sizeof(complejo));
	resc->re= c1->re + c2->re;
	resc->im= c1->im + c2->im;
    return resc;
}

complejo *restaComplejo(complejo *c1, complejo *c2){
	complejo *resc=malloc(sizeof(complejo));
	resc->re= c1->re - c2->re;
	resc->im= c1->im - c2->im;
    return resc;
}

complejo *multiplicaComplejo(complejo *c1, complejo *c2){
	complejo *resc=malloc(sizeof(complejo));
	resc->re= (c1->re * c2->re) - (c1->im * c2->im);
	resc->im= (c1->re * c2->im) + (c2->re * c1->im);
    return resc;
}

void representacionpolarComplejo(complejo *c){
	float convertidor = 57.2958;                  //el resultado de la función arctan2 en C nos la da en radianes
	float a = (c->re * c->re) + (c->im * c->im);  // "convertidor" la convierte a grados sexagesimal
	float modulo = sqrt(a);
	float angulo = convertidor*atan2(c->im,c->re);
    printf("( %.2f, %.2f grad)", modulo, angulo);
}

void despliegaComplejo(complejo *c){
   printf("(%.2f,%.2fi)", c->re, c->im);
}


