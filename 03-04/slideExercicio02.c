#include <stdio.h>

int main() {
    int a, b;
    int *p1 = NULL, *p2 = NULL;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    // CORRECAO: Atribuímos o endereço ao ponteiro (sem o *)
    p1 = &a;
    p2 = &b;

    if (*p1 > *p2) {
        printf("Maior valor em p1: %d\n", *p1);
        printf("Endereco do maior: %p\n", (void*)p1);
        printf("Endereco do menor: %p\n", (void*)p2);
    } 
    else if (*p2 > *p1) {
        printf("Maior valor em p2: %d\n", *p2);
        printf("Endereco do maior: %p\n", (void*)p2);
        printf("Endereco do menor: %p\n", (void*)p1);
    } 
    else {
        printf("Valores iguais (%d).\n", *p1);
        printf("Endereco de a: %p\n", (void*)p1);
        printf("Endereco de b: %p\n", (void*)p2);
    }

    return 0;
}