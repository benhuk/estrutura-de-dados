#include<stdlib.h>
#include <stdio.h>

int main(){
	void *pp;
	int p2 =10;
	pp = &p2;
//	printf("endereco: %d\n", *pp); //erro
	printf("endereco: %d\n", *(int*)pp); //cast
}