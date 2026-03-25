#include "bib.h"
double fatorial(int n){
	int i = n;
	double fat=1;
	while(i>1){
		fat = fat * i;
		i--;
	}
	return fat;

}
double potencia(double base, int expoente) {
    int i;
    double valor = 1.0; // Inicia em 1, pois é o elemento neutro da multiplicação
    
    for (i = 0; i < expoente; i++) {
        valor = valor * base; // Multiplica o valor atual pela base repetidas vezes
    }
    
    return valor;
}
double somaFibonnaci (int ntermos){
	int soma=1, atual =1, anterior = 1, i=2,novo=0;
	while(i<ntermos){
		soma = soma + atual;
		novo = atual + anterior;
		anterior = atual;
		atual = novo;
	}
	return 
}