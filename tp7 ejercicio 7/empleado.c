#include "empleado.h"

templeado carga(){
	templeado aux;
	
	printf("\n ingrese el nombre");
	scancad(aux.nombre);
	printf("\n ingrese el apellido");
	scancad(aux.apellido);
	printf("\n ingrese el dni");
	scanf("%ld",&aux.dni);
	printf("\n ingrese el celular");
	scanf("%ld",&aux.celular);
	printf("\n ingrese la fecha de alta");
	scanf("%ld",&aux.fecha);
	printf("\n ingrese el turno \n [1],turno mañana\n [2], turno tarde,\n [3],turno noche");
	scanf("%d",&aux.turno);
return aux;	
}

void muestra_empleado(templeado emp){
	printf("\n el nombre y apellido del empleado son: %s, %s",emp.nombre,emp.apellido);
	printf("\n el dni y el celular son: %ld, %ld",emp.dni,emp.celular);
	printf("\n la fecha de alta es: %ld", emp.fecha);
	if (emp.turno==1){
		printf("\n el turno es el de la maniana");
	}else
		if (emp.turno==2){
			printf("\n el turno es el de la tarde");
		}else{
			printf("\n el turno es el de la noche");
		}
}
int cpmregxdni(templeado a,long dni ){
	if (a.dni>dni){
		return 1;
	}else
		if(a.dni==dni){
			return 0;
		}else -1;
}
int cpmregxreg (templeado a,templeado b){
	if (a.dni>b.dni){
		return 1;
	}else{
		if (a.dni==b.dni)
			return 0;
		else 
			return-1;
	}
}
int cpmturno(templeado a,int turno){
	return (a.turno==turno);
}
long returndni(templeado a){
	return a.dni;
}
int returnturno(templeado a){
	return a.turno;
}







