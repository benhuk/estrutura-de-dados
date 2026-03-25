#include<stdio.h>
#include "bib.h"

int main(){
	int num,num1,fat,pot,fibbonaci;

	printf("informe um número:\n");
	scanf("%d",&num);
	fat = fatorial(num);
	printf("%d\n",fat);
	printf("informe um numero para a base e outro para o expoente:");
	scanf("%d",&num);
	scanf("%d",&num1);
	pot = potencia(num,num1);
	printf("pot: %d\n",pot);
	printf("fibbonaci:\n");
	scanf("%d",&num);
	fibbonaci = somaFibonnaci(num);
	printf("%d",fibbonaci);
}
