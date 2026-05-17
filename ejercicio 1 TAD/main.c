# include <stdio.h>
# include "operaciones.h"


int main () {
	imaginario a,b,c,d;
	int r;
	a=ingreso();
	b=ingreso();
	do{
		menu();
		scanf("%d",&r);
		switch(r){
			case 0:
				printf("SALIENDO DEL PROGRAMA");
			break;
			case 1:
				c= suma_imaginarios(a,b);
				mostrar(c);
			break;
			case 2:
				c= resta_imaginarios(a,b);
				mostrar(c);
			break;
			case 3:
				c= producto_imaginario(a,b);
				mostrar(c);
			break;			
			case 4:
				c= division_imaginario (a,b);
				mostrar(c);
			break;
			default:
				printf("\n opcion no valida");
		}
	}while(r!=0);

}
void menu (){
	printf("\n 						MENU");
	printf("\n [0], 		salir del programa");
	printf("\n [1], realizar y mostrar la suma de dos complejos");
	printf("\n [2], realizar y mostrar la resta de dos complejos");
	printf("\n [3], realizar y mostrar la multiplicacion de dos complejos");
	printf("\n [4], realizar y mostrar la resta de dos complejos");
	printf("\n ingrese su eleccion: ");
}
