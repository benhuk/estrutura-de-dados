#include <stdio.h>
#include <stdlib.h>
int *aloca(int n);
void inicializa(int *v, int n);
void imprime(int *v,int n);
void liberamemoria(int **p);
int main(){
	int *p = NULL, tam;
	printf("informe o tamanho\n");
	scanf("%d",&tam);
	p = aloca(tam);
	inicializa(p,tam);
	imprime(p,tam);
	//free(p);
	//p=NULL;
	liberamemoria(&p);
	return 0;
}

int *aloca(int n){
	int *pv=NULL;
	pv = (int *) malloc(n*sizeof(int));
	return pv;
}

void inicializa(int *v, int n){
	int i, valor;
	if(v==NULL) return;
	for(i=0;i < n;i++){
		//*(v+i) = valor*2*i;
		scanf("%d", &valor);
		*(v+i) = valor;
	}
}
void imprime(int *v,int n){
	int i;
	if(v==NULL) return;
	for(i=0;i< n;i++){
		printf("indice de vetor[%d] - endereco [%x] - valor %d\n",i,v+i,*(v+i));
	}
}
void liberamemoria(int **p){
	free(*p);
	*p=NULL;

}