#include <stdio.h>

int main() {
    // 1. Declarar variáveis e ponteiros
    int inteiro = 10;
    float real = 5.5;

    int *p_inteiro;
    float *p_real;

    // 2. Associar as variáveis aos ponteiros
    p_inteiro = &inteiro;
    p_real = &real;

    // 3. Imprimir valores antes da modificação
    printf("--- Valores Iniciais ---\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);

    // 4. Modificar os valores usando os ponteiros
    *p_inteiro = 25;
    *p_real = 12.80;

    // 5. Imprimir valores após a modificação
    printf("\n--- Valores Após Modificação (via ponteiros) ---\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);

    return 0;
}