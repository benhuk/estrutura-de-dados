#include<stdio.h>
#include <math.h>
typedef struct{
	float X;
	float Y;
} numeros;
float calcula(numeros *p1, numeros *p2){
	return sqrt((p2->X - p1->X)*(p2->X - p1->X)+(p2->Y - p1->Y)*(p2->Y - p1->Y));
}

int main(){
	float numero1 = 5;
	float numero2 = 10;
	float numero3 = 3;
	float numero4 = 8;
	float resultado;
	numeros p1;
	numeros p2;

	p1.X = numero1;
	p1.Y = numero2;
	p2.X = numero3;
	p2.Y = numero4;
	resultado = calcula(&p1, &p2);
	printf("Distancia: %.2f\n", resultado);
	return 0;
}