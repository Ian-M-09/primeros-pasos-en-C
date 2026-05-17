#ifndef LISTA_H
#define LISTA_H
#include "empleado.h"

#define tm 100

typedef templeado vec[tm];
typedef struct{
	vec emp;
	int tam
}tlista;

tlista cargarlista();
void ordenarvburbuja(tlista *);
int busquedabinaria(tlista *,long);
void cargarv (tlista *);
void eliminar (tlista *);
void mostrarturno (int,int,int);
void maxempleados(tlista l);
#endif
