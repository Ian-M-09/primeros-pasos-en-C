#ifndef ESPECTACULO_H
#define ESPECTACULO_H
#include "cadena.h"
typedef struct{
	tcad nombre;
	int codigo,hora_ini,hora_fin,sala;
	long fecha_ini,fecha_fin;
}tespectaculo;

tespectaculo carga();
void muestrauno(tespectaculo);
void leenuevafechainicio(tespectaculo *a);
int retornacodigo(tespectaculo a);
#endif
