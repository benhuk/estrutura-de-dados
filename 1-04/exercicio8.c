/*8. Escreva uma função mm que receba um ponteiro para um vetor inteiro v[0..n-1], o número de
elementos do vetor (n) e os endereços de duas variáveis inteiras, min e Max. Deposite nessas variáveis o
valor de um elemento mínimo e o valor de um elemento máximo do vetor. Escreva também uma função
main que use a função mm*/
void preencher(int *pv, int n){
	int i;
	int valor = 1;
	for(i=0;i<n;i++){
		*(pv+i) = valor*i;
	}
}

void mn(int *pv, int n, int *min, int *max){
	int i=0;
	*min = *(pv+i);
	*max = *(pv+i);
	for(i=0;i<n;i++){
		if(*min > *(pv+i)){
			*min = *(pv+i);
		}
		if(*max < *(pv+i)){
			*max = *(pv+i);
		}
	}
}

int main(){
	int n = 5;
	int *pv = (int *) malloc(n * sizeof(int));
	if(pv == NULL) return 1;
	int minimo, maximo;
	preencher(pv,n);
	mn(pv,n,&minimo,&maximo);
	printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);
    free(pv);
    pv = NULL;
    return 0;
    
}
