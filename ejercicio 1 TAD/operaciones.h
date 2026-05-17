#ifndef OPERACIONES_H
#define OPERACIONES_H

typedef struct{
	float num, ima;
}imaginario;

imaginario ingreso (); //crear imaginario

imaginario suma_imaginarios(imaginario,imaginario);
imaginario resta_imaginarios (imaginario,imaginario);
imaginario producto_imaginario(imaginario,imaginario);
imaginario division_imaginario(imaginario,imaginario);
void mostrar(imaginario);
#endif
