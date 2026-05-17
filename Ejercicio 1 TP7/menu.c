#include "menu.h"
void menu(RI a,RI b){
	int choice;
	RI S;
	do{
		printf("\nOpcion:");
		printf("\n0)Apagar.");
		printf("\n1)Sumar.");
		printf("\n2)Restar.");
		printf("\n3)Multiplicar.");
		printf("\n4)Dividir.");
		printf("\nOpcion:");
		fflush(stdin);scanf("%d",&choice);
		switch(choice){
		case 0:printf("\nApagando...");break;
		case 1:S=suma(a,b);printeada(S);break;
		case 2:S=resta(a,b);printeada(S);break;
		case 3:S=multiplicacion(a,b);printeada(S);break;
		case 4:S=division(a,b);printeada(S);break;
		}
	}while(choice!=0);
}
