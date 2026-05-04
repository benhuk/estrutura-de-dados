#include <stdlib.h>
#include <stdio.h>

int *aloca(int tamanho);
void armazena(int *p, int tamanho);
void exibe(int *p, int tamanho);
void desaloca(int **vetor);

int main(){
    int *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, n1,n2,n3,n4;
    printf("atendimentos 1:");
    scanf("%d",&n1);
    printf("atendimentos 2:");
    scanf("%d",&n2);
    printf("atendimentos 3:");
    scanf("%d",&n3);
    printf("atendimentos 4:");
    scanf("%d",&n4);
    v1 = aloca(n1);
    v2 = aloca(n2);
    v3 = aloca(n3);
    v4 = aloca(n4);

    armazena(v1,n1);
    armazena(v2,n2);
    armazena(v3,n3);
    armazena(v4,n4);

    exibe(v1,n1);
    exibe(v2,n2);
    exibe(v3,n3);
    exibe(v4,n4);

    desaloca(&v1);
    desaloca(&v2);
    desaloca(&v3);
    desaloca(&v4);
}
int *aloca(int tamanho){
    int *p = NULL;
    p = (int *)malloc(sizeof(int)*tamanho);
    return p;
}
void armazena(int *p, int tamanho){
    int i, valor;
    for(i=0;i<tamanho;i++){
        scanf("%d",&valor);
        if(valor < 1 || valor > 4){
            i--;
            printf("valor invalido\n");
        }else{
            *(p+i) = valor;
        }

    }
}
void exibe(int *p, int tamanho){
    int a=0,b=0,c=0,d=0,i;
    for(i=0;i<tamanho;i++){
        if(*(p+i) == 1){
            a++;
        }else if(*(p+i) == 2){
            b++;
        }else if(*(p+i) == 3){
            c++;
        }else{
            d++;
        }
    }
    printf("excelente: %d\n",a);
    printf("bom: %d\n",b);
    printf("regular: %d\n",c);
    printf("ruim: %d\n",d);
}
void desaloca(int **vetor){
    free(*vetor);
    *vetor = NULL;
}