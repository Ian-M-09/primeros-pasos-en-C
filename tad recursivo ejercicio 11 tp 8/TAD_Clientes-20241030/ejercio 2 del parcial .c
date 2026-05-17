#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 30

typedef char tcad[N];
typedef tcad lista[N];

void leecad(tcad,int);
void carga_lista(int,lista);
void mostrar(int, lista);
void compara_lista(int, lista);
void ordenar_lista(int,lista,int);
int random(int,int);
int mayor(int, lista);

int main() {
	int tam=0;
	srand (time(NULL));
	printf("\n ingrese el tamaño: ");
	scanf("%d",&tam);

	return 0;
}
void carga_lista (int tam,lista paises){
	int i;
	for (i=0;i<=tam;i++){
		printf("\n ingrese el pais: ");
		leecad(paises[i],tam);
	}
}
void mostrar (int tam, lista paises){
	int i;
	for (i=0;i<=tam;i++){
		printf("\n los paise son paises[%d]",i,paises[i]);
	}
}
int random (int may){
	int i,az;
	for (i=0;i<=may;i++){
		az=rand();
	}
return az;
}
void ordenar_lista (int tam, lista paises,int az){
	int i,j;
	lista aux;
	for (i=0;i<tam;i++){
		for(j=i+1;j<tam-1;j++){
			if (strlen(paises[i])==az){
				strcpy(paises[0],aux);
				srtcpy(paises[i],paises[0]);
				strcpy(aux,paises[i]);
			}
		}
	}
}
int mayor (int tam,lista paises){
	lista may;
	int i;
	for(i=0;i<=tam;i++){
		carga_lista(tam,paises);
		if(strlen(paises[i])>az)
			strcpy(paises[i],may);
	}
return may;
}
void leecad(tcad cad,int tam){
	int i;
	char c;
	i=0;
	c=getchar ();
	while (c!=EOF && c!='\n'&& i<tam-1){
	i++;
	c=getchar ();
	}
	cad[i]='\n';
	while (c!=EOF && c!='\n'){
		c=getchar ();
	}
}












