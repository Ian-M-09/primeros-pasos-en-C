#include <stdio.h>
int main(){
	float altura1, altura2,altura3,suma,promedio;
	printf("ingrese la altura1: ");
		scanf("%f", &altura1);
	printf("ingrese la altura2: ");
	scanf("%f",&altura2);
	printf("ingrese la altura3: ");
	scanf("%f",&altura3);
	suma=altura1+altura2+altura3;
	promedio=suma/3;
		printf("el promedio es: %f", promedio);
	return 0;
}
