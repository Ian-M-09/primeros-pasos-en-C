#include <stdio.h>

int main() {
int cantidad,cont1=0,acumulador0=0,acumulador1=0,acumulador2=0,acumulador3=0,acumulador4=0,acumulador5=0,acumulador6=0,acumulador7=0,acumulador8=0,acumulador9=0,cont0=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0,i,numero,digito,digito_0,digito_1,digito_2,digito_3,digito_4,digito_5,digito_6,digito_7,digito_8,digito_9;
float promedio_del_0=0,promedio_del_1=0,promedio_del_2=0,promedio_del_3=0,promedio_del_4=0,promedio_del_5=0,promedio_del_6=0,promedio_del_7=0,promedio_del_8=0,promedio_del_9=0;
printf("ingrese cantidad: ");
scanf("%d",&cantidad);
 for (i=1;i<=cantidad;i++){
 printf("ingrese numero: ");
 scanf("%d",&numero);
 digito=numero%10;
  switch(digito){
	 case 0:
      cont0=cont0+1;
	  acumulador0=acumulador0+numero;
      break;
     case 1:
      cont1=cont1+1;
	  acumulador1=acumulador1+numero;
      break;
     case 2:
      cont2=cont2+1;
	  acumulador2=acumulador2+numero;
      break;
     case 3:
      cont3=cont3+1;
	  acumulador3=acumulador3+numero;
      break;
     case 4:
      cont4=cont4+1;
	  acumulador4=acumulador4+numero;
      break;
     case 5:
      cont5=cont5+1;
	  acumulador5=acumulador5+numero;
      break;
     case 6:
      cont6=cont6+1;
	  acumulador6=acumulador6+numero;
      break;
     case 7:
      cont7=cont7+1;
	  acumulador7=acumulador7+numero;
      break;
	 case 8:
      cont8=cont8+1;
	  acumulador8=acumulador8+numero;
       break;
	 case 9:
      cont9=cont9+1;
	  acumulador9=acumulador9+numero;
      break;
  }}
if (cont0>0){
promedio_del_0=acumulador0/cont0;
}else
  if(cont1>0){
   promedio_del_1=acumulador1/cont1;
	}else
	if (cont2>0){
	 promedio_del_2=acumulador2/cont2;
	  }else
	   if(cont3>0){
		promedio_del_3=acumulador3/cont3;
          }else
           if(cont4>0){
            promedio_del_4=acumulador4/cont4;
            }else
             if(cont5>0){
              promedio_del_5=acumulador5/cont5;
              }else
               if(cont6>0){
                promedio_del_6=acumulador6/cont6;
			    }else
                 if(cont7>0){
				  promedio_del_7=acumulador7/cont7;
                  }else
			       if(cont8>0){
                    promedio_del_8=acumulador8/cont8;
                   }else
                    if(cont9>0)
			         promedio_del_9=acumulador9/cont9;
printf("\n el promedio del 0 es: %f",promedio_del_0);
  printf("\n el promedio del 1 es: %f",promedio_del_1);
  printf("\n el promedio del 2 es: %f",promedio_del_2);
  printf("\n el promedio del 3 es: %f",promedio_del_3);
  printf("\n el promedio del 4 es: %f",promedio_del_4);
  printf("\n el promedio del 5 es: %f",promedio_del_5);
  printf("\n el promedio del 6 es: %f",promedio_del_6);
  printf("\n el promedio del 7 es: %f",promedio_del_7);
  printf("\n el promedio del 8 es: %f",promedio_del_8);
  printf("\n el promedio del 9 es: %f",promedio_del_9);
 return 0;
}


