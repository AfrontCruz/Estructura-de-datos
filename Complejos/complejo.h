#ifndef _COMPLEJO_
#define _COMPLEJO_

#include <stdio.h>

typedef struct complejo complejo;

struct complejo{
	float re;
	float im;
};

complejo *Complejo(float re, float im);
complejo *sumaComplejo(complejo *c1, complejo *c2);
complejo *restaComplejo(complejo *c1, complejo *c2);
complejo *multiplicaComplejo(complejo *c1, complejo *c2);
void representacionpolarComplejo(complejo *c);
void destruyeComplejo(complejo *c);
void despliegaComplejo(complejo *c);


#endif
