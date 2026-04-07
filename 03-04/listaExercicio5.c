/*5. Supondo que na linha 04 do codigo abaixo seja atribuído o valor 0x949b008 a p, qual o valor resultante
das impressões das linhas 05 e 06?
Explique como a execução se comportará em cada caso.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
*p=(int *) malloc(2*sizeof(int));
printf("%p\n",p+1);
printf("%p\n",(char*)p+1);
return 0; }