#ifndef TRCOMPLEJO_H
#define TRCOMPLEJO_H
#include <math.h>
#include <stdio.h>
typedef struct{
	float r,i;	
}RI;
RI suma(RI,RI);
RI resta(RI,RI);
RI multiplicacion(RI,RI);
RI division(RI,RI);
void printeada(RI);
#endif
