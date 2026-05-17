#include "TAD_ListaCliente.h"

int retorna_tam(TLista L){
	return L.tam;
}
TLista inicializa(){
	TLista aux;
	aux.tam=0;
	return aux;
}
void carga_rec(TVector L, int tam){ /*COMPLETAR*/
	int i;
	RCliente agr;
	i=1;
	if(tam>=i){
		agr=cargar_cliente();
		L[tam]=agr;
		carga_rec(L,tam-1);
	}
}
TLista cargar_clientes(){ 
	TLista L;
	printf("\nIngrese la cantidad de elementos: ");
	scanf("%d", &L.tam);
	carga_rec(L.cli, L.tam);
	return L;
}
int busq_sec_rec(TVector A, int N, long DNI){/*COMPLETAR*/ /*retorna -1 si no lo encuentra sino retorna la posicion*/
	if(N>=1){
		if(A[N].dni==DNI){
			return N;
		}
		else{
			return busq_sec_rec(A,N-1,DNI);
		}
	}
	else{
		return -1;
	}
}
void agrega_cliente(TLista *L){ 
	int pos;
	RCliente nvo;
	nvo= cargar_cliente();
	pos= busq_sec_rec(L->cli, L->tam, retorna_DNI(nvo));
	if (pos==-1) {
		L->tam++;
		L->cli[L->tam]= nvo;
		printf("\nSe agrego exitosamente el nuevo cliente");
	}
	else printf("\nEl cliente ya esta cargado");
}

void elimina_rec(TVector A, int N, int pos){ /*COMPLETAR*/
	if(pos<N){
		A[pos].dni=A[pos+1].dni;
		A[pos].saldo=A[pos+1].saldo;
		strcpy(A[pos].ape,A[pos+1].ape);
		strcpy(A[pos].nom,A[pos+1].nom);
		elimina_rec(A,N,pos+1);
	}
}
void elimina_cliente(TLista *A){ 
	int pos;
	long DNI;
	printf("\nIngrese el DNI del cliente a eliminar: ");
	scanf("%ld", &DNI);
	pos= busq_sec_rec(A->cli, A->tam, DNI);
	if (pos!=-1) {
		elimina_rec(A->cli, A->tam, pos);
		printf("\nSe elimino exitosamente el cliente");
		A->tam--;
	}
	else printf("\nEl cliente no se encuentra");
}
void modifica_cliente(TLista *A){ 
	int pos;
	long DNI;
	printf("\nIngrese el DNI del cliente a modificar: ");
	scanf("%ld", &DNI);
	pos= busq_sec_rec(A->cli, A->tam, DNI);
	if (pos!=-1) modifica(&A->cli[pos]);
	else printf("\nEl cliente no se encuentra");
}
void mostrar_rec(TVector A, int tam){ /*COMPLETAR*/
	if(tam>=1){
		printf("\nDNI:%ld.",A[tam].dni);
		printf("\nSaldo:%f.",A[tam].saldo);
		printf("\nApellido:%s.",A[tam].ape);
		printf("\nNombre:%s.",A[tam].nom);
		mostrar_rec(A,tam-1);
	}
}
void mostrar_clientes(TLista A){
	mostrar_rec(A.cli, A.tam);
}
void genera_rec(TVector A, int N, TVector D, int *M){/*COMPLETAR*/
	if(N>=1){
		if(A[N].saldo<0){
			(*M)++;
			strcpy(D[*M].nom,A[N].nom);
			strcpy(D[*M].ape,A[N].ape);
			D[*M].saldo=A[N].saldo;
			D[*M].dni=A[N].dni;
		}
		genera_rec(A,N-1,D,M);
	}
}
void genera_deudor(TLista A, TLista *D){
	*D=inicializa();
	genera_rec(A.cli, A.tam, D->cli, &D->tam);
}

void mezcla(TVector A,int ini, int m, int fin){
	int i,j,k,t;
	TVector aux; 
	k= 0;
	i= ini;
	j= m+1;
	while (i<=m && j<=fin){
		k++;
		if (retornasaldo(A[i])>retornasaldo(A[j])){
			aux[k]=A[i];
			i++;
		}
		else{
			aux[k]=A[j];
			j++;
		}
	}
	for(t=i;t<=m;t++){
		k++;
		aux[k]=A[t];
	}
	for(t=j;t<=fin;t++){
		k++;
		aux[k]=A[t];
	}
	for(t=1;t<=k;t++)
		A[ini+t-1]=aux[t];
}
		
void m_sort(TVector A, int ini, int fin) {/*COMPLETAR*/
	int m;
	if(ini<fin){
		m=(ini+fin)/2;
		m_sort(A,ini,m);
		m_sort(A,m+1,fin);
		mezcla(A,ini,m,fin);
	}
}

int busq_binaria_recu (int ini,int fin, long bus, TVector vec){/*NUEVO*/
	int med;
	med=(ini+fin)/2;
	if (ini<=fin){
		if(bus==vec[med].dni){
			return med;
		}else 
			if(bus<vec[med].dni){ 
				return busq_binaria_recu(ini,fin,bus,vec);
			}else
				return busq_binaria_recu(ini,fin,bus,vec);
	}else return -1;
}
void busq(TLista a){
	int i,b;
	RCliente c;
	long buscado;
	printf("\n ingrese el dni buscado: ");
	fflush(stdin);
	scanf("%ld",&buscado);
	i=1;
	b=busq_binaria_recu(i,a.tam,buscado,a.cli);
	if (b!=-1)
		mostrardni(c,b);
}
void q_sort (int ini, int fin, TVector lis){/*NUEVO*/
	int izq,der,med;
	RCliente piv;
	med=(ini+fin)/2;
	if(ini<fin){	
		piv.dni=lis[ini].dni;
		izq=ini;
		der=fin;
		while(izq<der){
			while (der>izq && lis[der].dni>piv.dni){
				der--;
			}if(der>izq){
				lis[izq]=lis[der];
				izq++;
			}
			while(izq<der && lis[izq].dni<piv.dni){
				izq++;
			}if (izq<der){
				lis[der].dni=lis[izq].dni;
				der--;
			}
		}
		lis[der].dni=piv.dni;
		med=der;
		q_sort(ini,med-1,lis);
		q_sort (med+1,fin,lis);
	}
}
void parame_qsort(TLista *a){
	int ini,fin;
	ini=1;
	fin=a->tam;
	q_sort(ini,fin,a->cli);
}
void ordena_clientes(TLista *D){  
	int ini,fin;
	ini=1;
	fin=D->tam;
	m_sort(D->cli, ini, fin);
}
