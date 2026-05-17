# include "operaciones.h"
# include <stdio.h>
# include <stdlib.h>

imaginario ingreso (){
	imaginario nvo;
	printf("\n ingrese parte real: ");
	scanf("%f",&nvo.num);
	printf("\n ingrese parte imaginaria: ");
	scanf("%f",&nvo.ima);
return nvo;
}

imaginario suma_imaginarios(imaginario A,imaginario B){
/* sumo la parte entera y la parte imaginaria accediendo a los campos correspondientes*/
	imaginario resu_suma;
	resu_suma.num=A.num+B.num;
	resu_suma.ima=A.ima+B.ima;
/*el resultado tambien debe aceder a los campos porque ahi va a quedar el valor de la operacion*/
return resu_suma;
}
imaginario resta_imaginarios (imaginario A,imaginario B){
	imaginario resu_resta;
	resu_resta.num=A.num+B.num;
	resu_resta.ima=A.ima+B.ima;
	
return resu_resta;
}
imaginario producto_imaginario(imaginario A,imaginario B){
	imaginario resu_producto;
	resu_producto.num=A.num*B.num;
	resu_producto.ima=A.ima*B.ima;
	
return resu_producto;
}
imaginario division_imaginario(imaginario A,imaginario B){
	imaginario resu_division;
	resu_division.num=A.num/B.num;
	resu_division.ima=A.ima/B.ima;
return resu_division;
}
void mostrar (imaginario A){
	
	printf("\n el resultado es %f,%f",A.num,A.ima);

}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
