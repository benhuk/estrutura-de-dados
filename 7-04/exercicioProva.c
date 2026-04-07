#include <stdio.h>
#include <stdlib.h>

int* cadastrarAtendimentos(int quantidade);

void gerarRelatorio(int *votos, int quantidade);

void liberarMemoria(int **votos);



int main() {

    int n1, n2, n3, n4;
    
    int *vendedor1 = NULL;
    int *vendedor2 = NULL;
    int *vendedor3 = NULL;
    int *vendedor4 = NULL;

    // 1. Leitura das quantidades de atendimentos
    printf("indique a quantidade de atendimentos para o parceiro 1:\n");
    scanf("%d",&n1);
    printf("indique a quantidade de atendimentos para o parceiro 2:\n");
    scanf("%d",&n2);
    printf("indique a quantidade de atendimentos para o parceiro 3:\n");
    scanf("%d",&n3);
    printf("indique a quantidade de atendimentos para o parceiro 4:\n");
    scanf("%d",&n4);

    vendedor1 = cadastrarAtendimentos(n1);
    vendedor2 = cadastrarAtendimentos(n2);
    vendedor3 = cadastrarAtendimentos(n3);
    vendedor4 = cadastrarAtendimentos(n4);

    gerarRelatorio(vendedor1, n1);
    gerarRelatorio(vendedor2, n2);
    gerarRelatorio(vendedor3, n3);
    gerarRelatorio(vendedor4, n4);
    
    liberarMemoria(&vendedor1);
    liberarMemoria(&vendedor2);
    liberarMemoria(&vendedor3);
    liberarMemoria(&vendedor4);  

    return 0;
}
int* cadastrarAtendimentos(int quantidade){
    int *p = NULL;
    int i;
    int nota;
    p = (int *)malloc(sizeof(int)*quantidade);
    if(p == NULL){
        printf("erro ao alocar memoria\n");
        return NULL;
    }
    for(i=0;i<quantidade;i++){
        printf("Digite a nota do cliente %d (1-Exc, 2-Bom, 3-Reg, 4-Ruim): ", i + 1);
        scanf("%d", &nota);
        if(nota >=1 && nota <=4){
            *(p+i) = nota;
        }
        else{
            printf("nota invalida!\n");
            i--;
        }
    }
    return p;
}
void gerarRelatorio(int *votos, int quantidade){
    int i;
    int qtdexcelente = 0, qtdbom = 0 , qtdregular = 0 ,qtdruim = 0;
    printf("\n----------------\n");
    for(i=0;i<quantidade;i++){

        printf("votos %d:%d\n",i,*(votos+i));
    }
        for(i=0;i<quantidade;i++){
            if(*(votos+i) == 1){
                qtdexcelente++;
            }else
            if(*(votos+i) == 2){
                qtdbom++;
            }else
            if(*(votos+i) == 3){
                qtdregular++;
            }else
            if(*(votos+i) == 4){
                qtdruim++;
            }       
    }
    printf("\n----------------\n");
    printf("excelente: %d\n", qtdexcelente);
    printf("bom: %d\n", qtdbom);
    printf("regular: %d\n", qtdregular);
    printf("ruim: %d\n", qtdruim);
}
void liberarMemoria(int **votos){
    free(*votos);
    *votos = NULL;
}