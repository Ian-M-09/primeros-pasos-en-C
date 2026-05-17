#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "cadena.h"

typedef struct {
	tcad nombre,apellido;
	long dni,celular,fecha;
	int turno;
}templeado;

templeado carga ();
void muestra_empleado(templeado);
int cpmregxdni(templeado a,long dni );
int cpmregxreg (templeado a,templeado b);
int cpmturno(templeado a,int turno);
long returndni(templeado a);
int returnturno(templeado a);
#endif
