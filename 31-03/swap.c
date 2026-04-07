#include <stdio.h>

void swap(int *x, int *y) {
    int troca;
    troca = *x;
    *x = *y;
    *y = troca;
}

int main() {
    int valor = 10, valor1 = 15;

    printf("Antes: valor = %d, valor1 = %d\n", valor, valor1);

    swap(&valor, &valor1);

    printf("Depois: valor = %d, valor1 = %d\n", valor, valor1);

    return 0;
}
```

**Saída:**
```
Antes: valor = 10, valor1 = 15
Depois: valor = 15, valor1 = 10