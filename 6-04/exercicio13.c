#include <stdio.h>
#include <stdlib.h>

int *aloca(int n);
void preencher(int *pv, int n);
void separar(int *pv, int **pvpar, int **pvimpar, int tam, int *tampar, int *tamimpar);
void imprimir(int *p, int tamanho);
void desaloca(int **pp);

int main(){
    int *p = NULL, *ppar = NULL, *pimpar = NULL, tamanho, tampar, tamimpar;
    printf("digite o tamanho do vetor:");
    scanf("%d", &tamanho);
    p = aloca(tamanho);

    preencher(p, tamanho);         
    separar(p, &ppar, &pimpar, tamanho, &tampar, &tamimpar);

    printf("-------------------------\n");
    printf("vetor completo:\n");
    imprimir(p, tamanho);          
    printf("\n-------------------------\n");
    printf("vetor par:\n");
    imprimir(ppar, tampar);
    printf("\n-------------------------\n");
    printf("vetor impar:\n");
    imprimir(pimpar, tamimpar);
    printf("\n-------------------------\n");

    desaloca(&p);
    desaloca(&ppar);
    desaloca(&pimpar);

    return 0;                       
}

int *aloca(int n){
    int *p = NULL;
    p = (int *) malloc(sizeof(int) * n);
    return p;
}

void preencher(int *pv, int n){
    int i;
    if(pv){
        for(i = 0; i < n; i++){     //  
            printf("informe o valor: [%d]", i + 1);
            scanf("%d", pv + i);
        }
    }
}

void separar(int *pv, int **pvpar, int **pvimpar, int tam, int *tampar, int *tamimpar){
    int *vp = NULL;
    int *vi = NULL, i, ip = 0, ii = 0;

    vp = (int *)malloc(sizeof(int) * tam); 
    vi = (int *)malloc(sizeof(int) * tam);  

    for(i = 0; i < tam; i++){              
        if(*(pv + i) % 2 == 0){
            *(vp + ip) = *(pv + i);
            ip++;
        } else {
            *(vi + ii) = *(pv + i);
            ii++;
        }
    }
    *pvpar   = vp;
    *pvimpar = vi;
    *tampar  = ip;
    *tamimpar = ii;
}

void imprimir(int *p, int tamanho){
    int i;
    if(p == NULL){
        printf("Vetor vazio!\n");
        return;
    } else {
        for(i = 0; i < tamanho; i++){
            printf("\n%d", *(p + i));
        }
    }
}

void desaloca(int **pp){
    free(*pp);      
    *pp = NULL;     
}