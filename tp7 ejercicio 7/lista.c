#include "lista.h"

void ordenarvburbuja(tlista *a){
	int i,j;
	templeado aux;
	for (i=1;i<a->tam;i++){
		for(j=a->tam; j>=i;j--){
			if(cpmregxreg(a->emp[j],a->emp[j-1])<0){
				aux=a->emp[j];
				a->emp[j]=a->emp[j-1];
				a->emp[j-1]=aux;
			}
		}
	}
}
void cargarv (tlista *a){
	int i;
	for(i=1;i<=a->tam;i++){
		a->emp[i]=carga();
	}
}
tlista cargarlista(){		
	tlista aux;
	printf("\n ingrese la cantida que desea cargar");
	scanf("%d",&aux.tam);
	cargarv(&aux);
	ordenarvburbuja(&aux);
	return aux;
}
int busquedabinaria(tlista *a,long bus){
	int pos,ini,fin,med;
	ini=1;
	fin=a->tam;
	med=(ini+fin)/2;
	while(ini<=fin && (cpmregxdni(a->emp[med],bus)!=0)){
		if((cpmregxdni(a->emp[med],bus))>0){
			fin=med+1;
		}else 
			ini=med+1;
		med=(ini+fin)/2;
	}
	if(ini>fin)
		pos=ini;
	else
		pos=med*(-1);
	return pos;
}
void correyborra(tlista *a,int pos){
	int i;
	for(i=pos;i<a->tam;i++){
		a->emp[i]=a->emp[i+1];
	}
	a->tam--;
}
void eliminar (tlista * a){
	long dnibus;
	int pos;
	printf("\n ingrese el dni a eliminar");
	scanf("%ld",&dnibus);
	pos=busquedabinaria(a,dnibus);
	if(pos<0){
		pos=pos*(-1);
		correyborra(a,pos);
		printf("\n ELIMINADO");
	}
}
void mostrarturno(int a,int b,int c){
	if(a>b && a>c)
		printf("\n el turno con mas empleados es %d",a);
	else 
		if(b>a&&b>c)
		printf("\n el turno con mas empleados es %d",b);
		else 
			printf("\n el turno con mas empleados es %d",c);
}
void maxempleados(tlista l){
	int cm=0,ct=0,cn=0;
	int turn,i;
	for(i=1;i<=l.tam;i++){
		turn=returnturno(l.emp[i]);
		switch(turn){
		case 1:
			cm++;
		break;
		case 2:
			ct++;
		break;
		case 3:
			cn++;
		break;
		}
	}
	mostrarturno(cm,ct,cn);
}
void mostrar_empleados_turno(tlista a){
	int t,i;
	printf("\n ingrese el turno a mostrar \n[1],mañana\n [2],tarde\n[3],noche");
	for(i=1;i<=a.tam;i++){
		if(cpmturno(a.emp[i],t)){
			muestra_empleado(a.emp[i]);
		}
	}
	
}
