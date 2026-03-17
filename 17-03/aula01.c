#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    /*char palavra[10];
    fgets(palavra,10,stdin);
    printf("%s", palavra);
    return 0;*/
    /*

    char salute[]= "ola";
    char nome[80];
    printf("digite seu nome:");
    fgets(nome,80,stdin);
    printf("%s \n", nome +2);
    printf("%s %s\n", salute, nome+5);
    return 0;
    */

    /*
    printf("%d\n",strcmp("A","A"));
    printf("%d\n",strcmp("A","B"));
    printf("%d\n",strcmp("B","A"));
    printf("%d\n",strcmp("C","A"));
    printf("%d\n",strcmp("casas","casa"));
    return 0;
    */

    /*
    int i;
    char alunos[4][100];
    for(i=0;i<4;i++){
        printf("informe o nome do aluno %i:\n",i+1);
        fgets(alunos[i],100,stdin);

    }
    printf("Nome dos alunos:\n");
    for(i=0;i<4;i++){
        printf("%s",alunos[i]);
    }
*/

    int M;
    int N[40]; 


    srand(time(NULL));


    do {
        printf("Digite a quantidade de criancas (M > 0 e M <= 40): ");
        scanf("%d", &M);
        if (M <= 0 || M > 40) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (M <= 0 || M > 40);


    for (int i = 0; i < M; i++) {
        do {
            printf("Digite o tamanho do nome para a crianca %d (entre 3 e 10): ", i + 1);
            scanf("%d", &N[i]);
            if (N[i] < 3 || N[i] > 10) {
                printf("Tamanho invalido! Deve ser entre 3 e 10.\n");
            }
        } while (N[i] < 3 || N[i] > 10);
    }

    printf("\n--- Nomes Gerados ---\n");


    for (int i = 0; i < M; i++) {
        char nome[12]; 

      
        nome[0] = 'A' + (rand() % 26);

      
        for (int j = 1; j < N[i]; j++) {
            nome[j] = 'a' + (rand() % 26);
        }
        
     
        nome[N[i]] = '\0';

       
        printf("Crianca %d: %s\n", i + 1, nome);
    }

    return 0;


}
