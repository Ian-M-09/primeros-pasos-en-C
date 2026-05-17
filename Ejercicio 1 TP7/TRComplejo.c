#include "TRComplejo.h"
RI suma(RI a,RI b){
	RI sumat;
	sumat.r=(a.r+b.r);
	sumat.i=(a.i+b.i);
	return sumat;
}
RI resta(RI a,RI b){
	RI restat;
	restat.r=(a.r-b.r);
	restat.i=(a.i-b.i);
	return restat;
}
RI multiplicacion(RI a,RI b){
	RI multiplicaciont;
	multiplicaciont.r=(a.r*b.r)-(a.i*b.i);
	multiplicaciont.i=(a.r*b.i)+(a.i*b.r);
	return multiplicaciont;
}
RI division(RI a,RI b){
	RI divisiont;
	float divisor;
	divisor=(pow(b.r,2))+(pow(b.i,2));
	if(divisor==0)
	{
		printf("\nDividiendo entre 0...");
		divisiont.r=0;
		divisiont.i=0;
	}else
	{
		divisiont.r=((a.r*b.r)+(a.i*b.i))/divisor;
		divisiont.i=((a.r*b.i)-(a.i*b.r))/divisor;
	}
	return divisiont;
}
void printeada(RI resultado){
	printf("\nResultado de la operacion:\nParte Real:%f.\nParte Imaginaria:%f",resultado.r,resultado.i);
}
