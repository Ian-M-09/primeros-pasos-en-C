#include "cadena.h"

void leecad (tcad cad,int tam){
	int i;
	char c;
	c=getchar();
	while (i<tam-1 && c!=EOF && c!='\n'){
		cad[i]=c;
		c=getchar();
		i++;
	}cad[i]='\0';
	while (c!=EOF && c!='\n'){
		c=getchar ();
	}
}
	
void scancad (tcad cad){
	leecad(cad,TM);
}
