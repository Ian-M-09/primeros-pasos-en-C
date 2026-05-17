#ifndef LISTAESPECTACULO_H
#define LISTAESPECTACULO_H
# include "espectaculo.h" 
# define TMV 200

typedef tespectaculo Vec[TMV];

typedef struct{
	Vec show;
	int tam;
}Lshow;

Lshow cargalis();
void agregar_show(Lshow*);
int retornanuevahorainicio();
int retornanuevahorafin();
long retornanuevafechainicio();
long retornanuevafechafin();
int buscaespectaculo(Lshow lis,int tam);
void muestratodo(Lshow a, int tam);
#endif
/*cargar espectaculo
retornar numero de espectaculo 
modificar la fehca
modificar la hora
buscar un espectaculo para mostrarlo*/
