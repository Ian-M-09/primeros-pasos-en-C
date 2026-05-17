/*Ejercicio 6: Una empresa multi-sala de espectáculos nos contrata para que le construyamos un software 
	que permita administrar los espectáculos que ofrece.   
	Para ello en la 1era reunión que mantenemos con el encargado de espectáculos nos comenta los datos 
	que necesita registrar de cada uno de ellos, los cuales son: “Código del espectáculo; Nombre del 
	espectáculo; Fecha de inicio; Fecha de fin; Horario inicio; Horario Fin; Nro. de Sala” También nos explica 
	las acciones a realizar con cada uno de los espectáculos:  
	• Cargar los datos de un espectáculo.  
	• Mostrar los datos de un espectáculo.  
	• Retornar el nro. de sala de un espectáculo.  
	• Modificar la fecha de inicio o fin de un espectáculo.  
	• Modificar la hora de inicio o fin de un espectáculo.  
	Nuestro trabajo consiste en crear los TADs necesarios que permita realizar lo propuesto por nuestro 
	cliente. Luego un programa que utilizando los TADs creados permita administrar una lista de N 
	espectáculos. */ 

# include "listaespectaculo.h"

int main () {
	int opt,tam,b;
	Lshow a;
	do{menu();
		scanf("%d",&opt);
		switch(opt){
		case 0: printf("\n SALIENDO");break;
		case 1:
			agregarshow(a,&tam);
			break;
		case 2: 
			mostrarshow(a,tam); break;
		case 3:
			b=muestracodigo(a,tam);
			break;
		case 4:
			
			
		}
		
	} while(opt!=0);
	
	
}
void menu(){
	printf("\n MENU");
	printf("\n [0], SALIR");
	printf("\n [1], agregar un show");
	printf("\n [2], mostrar los datos de un espectaculo");
	printf("\n [3], devolver el numero de sala de un show");
	printf("\n [4], modificar la fecha");
	printf("\n [5], modificar la hora");
	printf("\n [6], mostrar todo");
}




