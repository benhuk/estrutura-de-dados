/*
4. Sejam duas variáveis inteiras int a e int b declaradas na função int main(). Apresente um procedimento
em C capaz de trocar o valor de a pelo seu quadrado e o valor de b pelo seu fatorial. Apresente as
suposições que julgar necessário
*/

#include<stdio.h>
void trocaab(int *a,int *b){
	int i, valor = 1;
	*a = (*a)*(*a);
	for(i=1;i<=*b;i++){
		valor = valor*i;
	}
	*b = valor;
}
int main(){
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b)
	trocaab(&a,&b);
	printf("%d,%d\n", a,b );
}