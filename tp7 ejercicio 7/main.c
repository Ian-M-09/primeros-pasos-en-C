/* Ejercicio 7: (TAD - Tipo Parcial)  
	Una Agencia de Servicios lleva una lista con los datos de sus empleados. Esta lista cuenta con la 
	siguiente información: DNI, Apellido y Nombre, Fecha de Alta, Turno disponible (mañana, tarde y noche), 
	Celular.  Se necesita un programa que permita administrar más eficientemente la lista, para ello debe 
	poder cargar la lista de empleados (considerando que se conoce la cantidad N de empleados), ordenarla 
	por DNI y posteriormente presentar un menú con las siguientes opciones:  
	Se pide:  
	1. agregar un nuevo empleado.  
	2. Eliminar un empleado.  
	3. Indicar cuál es el turno que tiene mayor cantidad de empleados.  
	4. Dado un turno, mostrar todos sus empleados.  
	a) Presentar los TADs necesarios para resolver el problema, escribiendo la interfaz (los tipos de 
	datos y los prototipos). En este inciso no se solicita escribir la implementación de los módulos.  
	b) Implementar todos módulos necesarios para cargar la lista de empleados y ordenarla según DNI, 
	utilizando el método de Burbuja.   
	c) Implementar la totalidad de los módulos necesarios para resolver el inciso 3.  
	d) Desarrollar completamente el programa principal. */
# include "lista.h"

int main (){
	int r;
	do{ menu();
	switch(r){
		
	}	
	} while();
	
	return 0;
}
void menu(){
	int opt;
	printf("\n[0], salir");
	printf("\n[1], agregar un nuevo empleado");
	printf("\n[2], eliminar un empleado");
	printf("\n[3], indicar cual es el turno con mas empleados");
	printf("\n[4], mostrar empleados segun un turno");
}
