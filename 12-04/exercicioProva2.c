/*
Exercício: Relatório de Suporte Técnico

Ao final do expediente, o supervisor de um call center de suporte de TI precisa relatar o desempenho diário de seus três analistas de atendimento.
 Para cada chamado finalizado, ele deve registrar o status de resolução daquele problema (1 – Resolvido de imediato; 2 – Resolvido após consulta;
  3 – Escalonado para nível superior; 4 – Não resolvido). Ao final, deve ser emitido um relatório diário para cada analista, informando: o total de chamados
   resolvidos de imediato, resolvidos após consulta, escalonados e não resolvidos.

Atenção:

    O supervisor deve informar o número de chamados que cada um dos três analistas atendeu no dia.

    Considere que o supervisor irá cadastrar as informações de apenas um dia de operação. Não esqueça de emitir o relatório final sumarizando os chamados de cada analista.

    Você deve alocar dinamicamente o(s) vetor(es) para armazenar as informações dos status dos chamados de cada analista. Lembre-se que toda alocação dinâmica realizada precisa ser liberada na memória. Antes de o programa finalizar, certifique-se de desalocar tudo o que foi alocado.

Exemplo de entrada hipotética na memória (Status dos chamados):
Analista 1: 1 2 1 1 4 3 .... .... 1 2
Analista 2: 3 2 4 1 2 3 .... .... 4 1
Analista 3: 1 1 2 2 4 3 .... .... 2 1

Lembre-se (Códigos de Status):
1 – Resolvido de imediato
2 – Resolvido após consulta
3 – Escalonado (nível superior)
4 – Não resolvido

*/
#include <stdio.h>
#include <stdlib.h>
void desaloca(int **vetor);
void exibe(int *v, int tamanho);
void registra(int *vetor, int tamanho);
int *aloca(int tamanho);

int main(){
	int *s1 = NULL, *s2 = NULL, *s3 = NULL, n1,n2,n3;
	printf("informe o número de atendimentos do 1:");
	scanf("%d",&n1);
	printf("informe o número de atendimentos do 2:");
	scanf("%d",&n2);
	printf("informe o número de atendimentos do 3:");
	scanf("%d",&n3);

	s1 = aloca(n1);
	s2 = aloca(n2);
	s3 = aloca(n3);
	printf("----------------");
	registra(s1,n1);
	printf("----------------");
	registra(s2,n2);
	printf("----------------");
	registra(s3,n3);
	printf("----------------");
	exibe(s1,n1);
	printf("----------------");
	exibe(s2,n2);
	printf("----------------");
	exibe(s3,n3);
	printf("----------------");
	desaloca(&s1);
	desaloca(&s2);
	desaloca(&s3);
	return 0;

}

int *aloca(int tamanho){
	int *p = NULL;
	p = (int*)malloc(sizeof(int)*tamanho);
	if(p != NULL){
		return p;
	}else{
		printf("erro ao alocar vetor\n");
		return NULL;
	}
}

void registra(int *vetor, int tamanho){
	int i, valor;
	for(i=0;i<tamanho;i++){
		
		scanf("%d",&valor);
		if(valor <1 || valor> 4){
			i--;
			printf("nota invalida");
		}else{
			*(vetor+i) = valor;
		}
	}
}
void exibe(int *v, int tamanho){
	int i, a =0 ,b = 0 ,c = 0,d = 0;
	for(i=0;i<tamanho;i++){
		if(*(v+i) == 1){
			a++;
		}
		if(*(v+i) == 2){
			b++;
		}
		if(*(v+i) == 3){
			c++;
		}
		if(*(v+i) == 4){	
			d++;
		}
	}
	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
	printf("%d", d);	
}
void desaloca(int **vetor){
	free(*vetor);
	*vetor = NULL;
}