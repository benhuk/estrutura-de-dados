#include <stdio.h>
int main(){
	int idade;
	int i;
	int media = 0;
	int maior = 0;
	int menor = 200;
	i=0;
	for(i=0;i<10;i++){
		printf("digita a idade do aluno %d:\n", i+1 );
		scanf("%d",&idade);
		if(idade <0){
			printf("a idade deve ser positiva!\n");
			i--;
			continue;

		}
		media += idade;
		if(idade < menor){
			menor = idade;

		}
		if(idade > maior){
			maior = idade;
		}
	}
	printf("a media das idades é:%.2f\n", (float)media/10);
	printf("a menor idade é:%d\n", menor);
	printf("a maior idade é:%d\n",maior);
}