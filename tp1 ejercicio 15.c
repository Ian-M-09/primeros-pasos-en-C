#include <stdio.h>
int main(){
int cantidad, digito,acumuladordepares,numero,i,pares,acumuladordenumero;
float promediodepares;
printf("ingrse cantidad: ");
scanf("%d",&cantidad);
for(i=1;i<=cantidad;i++){
printf("ingrese numero: ");
scanf("%d",&numero);
digito=numero%10;
pares=digito%2==0;
if(pares>0)
acumuladordepares=acumuladordepares+1;
acumuladordenumero=acumuladordenumero+numero;
}promediodepares=acumuladordenumero/acumuladordepares;
printf("el promedio de nuemeros fromados por digitos pares es: %f",promediodepares);
return 0;
}
