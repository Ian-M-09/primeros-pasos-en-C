# include "listaespectaculo.h"
void burbuja (Lshow p){
	int i,j;
	tespectaculo aux;
	for(i=0;i<=p.tam-1;i++){
		for (j=p.tam;j>i;j--){
			if(retornacodigo(p.show[j])>retornacodigo(p.show[j+1])){
				aux=p.show[j];
				p.show[j]=p.show[j+1];
				p.show[j+1]=aux;
			}
		}
	}
}
void cargarlista(Lshow *a){
	int i;
	for (i=0;i<=a->tam;i++){/*privado*/
		a->show[i]=carga();
	}
}
Lshow cargalis(){
	Lshow n;
	printf("\n ingrese el tamaño de la lista: ");
	scanf("%d",&n.tam);
	cargarlista(&n);
	return n;
}

void agregarshow(Lshow *a){
	printf("\n ingrese el nuevo empleado");
	a->show=carga();
	burbuja(a);
}
	
int retornanuevahorainicio(){
	int horaini;
	printf("ingrese la nueva hora de inicio");
	scanf("%d",&horaini);
	return horaini;
}
int retornanuevahorafin(){
	int horafin;
	printf("\n ingrese la nueva hora en la que termina el show");
	scanf("%d",&horafin);
	return horafin;
}
long retornanuevafechainicio(){
	long fechaini;
	printf("\n ingrese la nueva fecha de inicio");
	scanf("%ld",&fechaini);
	return fechaini;
}
long retornanuevafechafin(){
	long fechafin;
	printf("\n ingrese la nueva fecha en la que termina el show");
	scanf("%ld",&fechafin);
	return fechafin;
}
int buscaespectaculo(Lshow lis,int tam){
	int ini,fin,med,busc,pos;
	ini=0;fin=tam;med=(ini+fin)/2;
	printf("\n ingrese el codigo de funcion para buscar el espectaculo");
	scanf("%d",&busc);
	while(ini<fin && retornacodigo(lis.show[med])!=busc){
		if(retornacodigo(lis.show[med])>busc){
			fin=med-1;
			med=(ini+fin)/2;
		}else{
			ini =med+1;
			med=(ini+fin)/2;
		}
		if(ini<=fin){
			pos=med;
		}else 
		   pos=-1;
	}
	return pos;
}
int muestracodigo (Lshow a,int tam){
	int ini=0,fin=tam,med=(ini+fin)/2,pos;
	Lshow bus;
	printf("\n ingrese el nombre de la funcion");
	scancad(bus.show);
	while(ini<fin && strcmp(a.show[med],bus.show)!=0){
		if(strcmp(a.show[med],bus.show)>0){
			fin=med-1;
			med=(ini+fin)/2;
		}else {
			ini=med+1;
			med=(ini+fin)/2;
		}
		if (ini<=fin){
			pos=med;
		}else
			pos =-1;
	}if (pos!=-1){
		printf("\n el codigo es %d",retornacodigo(a.show[pos]));
	}
}
void mostrarshow(Lshow a,int tam){
	int pos,i;
	pos=buscaespectaculo(a,pos);
	for(i=0;i<=tam;i++){
		if(i==pos){
			muestrauno(a.show[pos]);
		}
	}
	
}
void muestratodo(Lshow a, int tam){
	int i;
	for(i=0;i<=tam;i++)
		muestrauno(a.show[i]);
}
