#include <stdio.h>
int main (){
int i,numero, cantidad,digito,aux, capicua;
printf("\n ingrese cantidad: ");
scanf("%d",&cantidad);
i=1;
capicua=0;
while (i<=cantidad){
printf("\n ingrese el numero: ");
scanf("%d",&numero);
aux=numero;
  while (aux!=0){
  digito=aux%10;
  capicua=(capicua*10)+digito;
  aux=aux/10;}
  i=i+1;
if (numero==capicua)
   printf("\n el numero %d es capicua",numero);
else
if (numero!=capicua)
printf("el numero no es capicua");}
return 0;}
