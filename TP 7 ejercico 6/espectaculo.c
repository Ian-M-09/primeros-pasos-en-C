# include "espectaculo.h"
# include "listaespectaculo.h"
tespectaculo carga (){
	tespectaculo aux;
	fflush(stdin);
	printf("\n ingrese el nombre del espectaculo");
	scancad(aux.nombre);
	fflush(stdin);
	printf("\n ingrese el codigo de sala");
	scanf("%d",&aux.sala);
	fflush(stdin);
	printf("\n ingrese el codigo del espectaculo");
	scanf("%d",&aux.codigo);
	fflush(stdin);
	printf("\n ingrese la hora de inicio");
	scanf("%d",&aux.hora_ini);
	fflush(stdin);
	printf("\n ingrese la hora de salida");
	scanf("%d",&aux.hora_fin);
	fflush(stdin);
	printf("\n ingrese la fecha de inicio");
	scanf("%ld",&aux.fecha_ini);
	fflush(stdin);
	printf("\n ingrese la fecha de salida");
	scanf("%ld",&aux.fecha_fin);
	fflush(stdin);
	return aux;
	
}

void muestrauno(tespectaculo esp){
	
	printf("\n el nombre del especataculo es: %s",esp.nombre);
	printf("\n el codigo de sala es: %d",esp.sala);
	printf("\n el codigo del espectaculo es: %d",esp.codigo);
	printf("\n la hora de inicio es: %d",esp.hora_ini);
	printf("\n la hora de salida es: %d",esp.hora_fin);
	printf("\n la fecha de inicio es: %ld",esp.fecha_ini);
	printf("\n la fecha de salida es: %ld",esp.fecha_fin);
}
void leenuevafechainicio(tespectaculo *a){
	
	a->fecha_ini=retornanuevafechainicio();
}	
void leenuevafechafin(tespectaculo *a){
	a->fecha_fin=retornanuevafechafin();
}
void leenuevahoraini(tespectaculo *a){
	a->hora_ini=retornanuevahorainicio();
}
void leenuevahorafin (tespectaculo *a){
	a->hora_fin=retornanuevahorafin();
}
int retornacodigo(tespectaculo a){
	return a.codigo;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
