#include <stdio.h>
#include "complejo.h"


int main(void){
	complejo *a = Complejo(4,4);
	complejo *b = Complejo(6,2);

    complejo *res2 = multiplicaComplejo(a,b);

    printf("\n");
	despliegaComplejo(res2);
    printf("\n");
    representacionpolarComplejo(res2);
    printf("\n");


    destruyeComplejo(a);
    destruyeComplejo(b);
    destruyeComplejo(res2);

	return 0;
}
