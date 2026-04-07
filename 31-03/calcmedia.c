#include<stdio.h>

void calcMedia(float *arry, int n, float *resultado);
void preencher(float *v,int t);

int main(){
	int tam,i;
	printf("informe o tamanho:");
	
	scanf("%d",&tam);
	float vetor[tam],resultado;
	preencher(vetor,tam);
	calcMedia(vetor,tam,&resultado);
	printf("%d",resultado);
}

void preencher(float *v,int t){
	int i;
	for(i=0;i<t;i++){
		printf("informe valor [%d]\n memoria: %x\n",i,v+i);
		scanf("%f",v+i);
	}
}
void calcMedia(float *arry, int n, float *resultado){
	int i;
	float soma =0;
	for(i=0;i<n;i++){
		soma = soma+ *(arry+i);
	}
	*resultado = soma/n;
}