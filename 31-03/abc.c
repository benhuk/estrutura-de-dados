#include<stdio.h>

int main(){
	char str[]= "abc\0", *c=str;
	int tam = 4;
	int i;
	for(i=0;i<tam;i++){
		printf("****************");
		printf("\n%c %x\n",*c,c );
		printf("****************");
		c++;
	}
}