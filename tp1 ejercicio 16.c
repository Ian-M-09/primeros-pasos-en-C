#include <stdio.h>
int main() {
int numeroK,i,pd;
do{
printf("ingrese el numero de 2 cifras: ");
scanf("%d",&numeroK);
}while (numeroK<10 || numeroK>99);
for (i=2;i<=numeroK-1;i++){ /*determinacion de primos*/
 pd=2;
   while (pd<=i/2&&i%pd!=0){
   pd=pd+1;}
   if(pd> i/2)
   printf("\n el numero es primo y antecede a numeroK: %d",i);
}
return 0;
}
