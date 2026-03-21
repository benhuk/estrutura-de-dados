#include <stdio.h>
#include <string.h>
/*
 * UTFPR - Campus Ponta Grossa
 * Bacharelado em Ciência da Computação
 * Disciplina: Estrutura de Dados I
 * Lista de Exercícios nº 1 – Strings
 */

/* ============================================================
 * Ex 01 - Leia uma string e a imprima.
 * ============================================================ */
void ex01() {
    char nome[7];
    printf("informe seu nome:\n");
    fgets(nome,7,stdin);
    printf("seu nome é:%s",nome);
}

/* ============================================================
 * Ex 02 - Calcule o comprimento de uma string (sem usar strlen).
 * ============================================================ */
void ex02() {
    int i=0;
    char str[1000];
    printf("digite uma string de até 1000 caracteres:\n");
    fgets(str,1000,stdin);
    while(str[i] != '\0'){
        i++;
    }
    printf("tamanho da string:%d\n",i-1);
}

/* ============================================================
 * Ex 03 - Compare duas strings (sem usar strcmp).
 * ============================================================ */
void ex03() {
    int i = 0;
    char str[1000];
    char str2[1000];
    printf("digite a primeira string:\n");
    fgets(str,1000,stdin);
    printf("digite a segunda string:\n");
    fgets(str2,1000,stdin);
    while(str[i] != '\0' || str2[i] !='\0'){
        if(str[i] != str2[i]){
            printf("strings não iguais.\n");
            return;
        }
        i++;
    }
    printf("strings são iguais.");
    
}

/* ============================================================
 * Ex 04 - Leia um nome e imprima as 4 primeiras letras.
 * ============================================================ */
void ex04() {
    int i = 0;
    char nome[1000];
    char buffer[1000];
    printf("digite um nome:\n");
    fgets(nome,1000,stdin);
    while(i<4 && nome[i] != '\0' && nome[i] != '\n'){
        buffer[i] = nome[i];
        i++;
    }
    buffer[i] = '\n';
    printf("%s",buffer);
}

/* ============================================================
 * Ex 05 - Digite um nome, calcule e retorne quantas letras ele tem.
 * ============================================================ */
void ex05() {
    int tamanho;
    char nome[1000];
    printf("digite um nome:");
    fgets(nome,1000,stdin);
    tamanho = strlen(nome)-1;
    printf("tamanho:%d\n",tamanho);
}

/* ============================================================
 * Ex 06 - Ler nome, sexo e idade. Se sexo feminino e idade < 25,
 *         imprimir nome e "ACEITA", caso contrário "NÃO ACEITA".
 * ============================================================ */
void ex06() {
    char nome[100];
    char sexo;
    int tamanho;
    int idade;
    printf("digite seu nome:");
    fgets(nome,100,stdin);
    printf("<F> para femino e <M> para masculino");
    scanf("%c", &sexo);
    printf("digite sua idade:");
    scanf("%d",&idade);
    tamanho = strlen(nome);
    if(idade < 25 && (sexo == 'F' || sexo == 'f')){
        printf("%s, ACEITA!",nome);
    }else{
        printf("NAO ACEITA!");
    }

}

/* ============================================================
 * Ex 07 - Conte o número de '1's que aparecem em uma string.
 *         Exemplo: 0011001 → 3
 * ============================================================ */
void ex07() {
    int tamanho;
    int i;
    int contador =0;
    char nome[1000];
    fgets(nome,1000,stdin);
    tamanho = strlen(nome);
    for(i=0;i<tamanho;i++){
        if(nome[i] == '1'){
            contador++;
        }
    }
    printf("%d",contador);
}

/* ============================================================
 * Ex 08 - Substitua as ocorrências do caractere '0' em uma
 *         string pelo caractere '1'.
 * ============================================================ */
void ex08() {
    int tamanho;
    int i;
    char nome[1000];
    fgets(nome,1000,stdin);
    tamanho = strlen(nome);
    for(i=0;i<tamanho;i++){
        if(nome[i] == '0'){
            nome[i] = '1';
        }
    }
}

/* ============================================================
 * Ex 09 - Leia um nome e imprima-o somente se a primeira letra
 *         for 'a' (maiúscula ou minúscula).
 * ============================================================ */
void ex09() {
    char nome[100];
    
    fgets(nome,100,stdin);
    if(nome[0] == 'A' || nome[0] == 'a'){
        printf("%s",nome);
    }
}

/* ============================================================
 * Ex 10 - Receba uma palavra e a imprima de trás-para-frente.
 * ============================================================ */
void ex10() {
    char palavra[1000];
    int tamanho, i;
    
    printf("Digite uma palavra: ");
    fgets(palavra, 1000, stdin);
    
    tamanho = strlen(palavra);
    
    printf("Palavra invertida: ");

    for(i = tamanho - 1; i >= 0; i--){
        if(palavra[i] != '\n'){
            printf("%c", palavra[i]); 
        }
    }
    printf("\n");
}

/* ============================================================
 * Ex 11 - Receba uma string e a imprima sem as vogais.
 * ============================================================ */
void ex11() {
    int i;
    int j = 0;
    int tamanho;
    char palavra[50];
    char palavrad[50];
  
    fgets(palavra,50,stdin);
    tamanho = strlen(palavra);

    for(i=0;i<tamanho;i++){
        if(palavra[i] != 'a' && palavra[i] != 'A'
            && palavra[i] != 'e' && palavra[i] != 'E'
            && palavra[i] != 'i' && palavra[i] != 'I'
            && palavra[i] != 'o' && palavra[i] != 'O'
            && palavra[i] != 'u' && palavra[i] != 'U'){
            palavrad[j] = palavra[i];
            j++;
        }
        
    }
    palavrad[j] = '\0';
    printf("%s", palavrad);
}

/* ============================================================
 * Ex 12 - Receba uma palavra, calcule quantas vogais (a,e,i,o,u)
 *         ela possui. Em seguida, leia um caractere e substitua
 *         todas as vogais da palavra por esse caractere.
 * ============================================================ */
void ex12() {
    char palavra[50];
    int tamanho;
    int i;
    int qtd = 0;
    char substitutuir;

    fgets(palavra,50,stdin);
    
    scanf(" %c",&substitutuir);
    
    tamanho = strlen(palavra);
    
    for(i=0;i<tamanho;i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'
            || palavra[i] == 'e' || palavra[i] == 'E'
            || palavra[i] == 'i' || palavra[i] == 'I'
            || palavra[i] == 'o' || palavra[i] == 'O'
            || palavra[i] == 'u' || palavra[i] == 'U'){
            qtd++;
            palavra[i] = substitutuir;
                
        }
    }
    printf("%s",palavra);
}

/* ============================================================
 * Ex 13 - Leia uma frase e conte quantos caracteres são espaços
 *         em branco.
 * ============================================================ */
void ex13() {
    
}

/* ============================================================
 * Ex 14 - Leia uma palavra (máx. 50 letras) e some 1 no valor
 *         ASCII de cada caractere. Imprima a string resultante.
 * ============================================================ */
void ex14() {

}

/* ============================================================
 * Ex 15 - Leia uma cadeia de caracteres e converta todos os
 *         caracteres para maiúscula (subtraia 32 dos caracteres
 *         cujo código ASCII está entre 97 e 122).
 * ============================================================ */
void ex15() {

}

/* ============================================================
 * Ex 16 - Converta uma cadeia de caracteres de letras maiúsculas
 *         para letras minúsculas.
 * ============================================================ */
void ex16() {

}

/* ============================================================
 * Ex 17 - Leia um vetor com letras de uma frase (incluindo espaços).
 *         Retire os espaços em branco e escreva o vetor resultante.
 * ============================================================ */
void ex17() {

}

/* ============================================================
 * Ex 18 - Troque todas as ocorrências de uma letra L1 pela letra
 *         L2 em uma string. A string e as letras devem ser
 *         fornecidas pelo usuário.
 * ============================================================ */
void ex18() {

}

/* ============================================================
 * Ex 19 - Leia a idade e o primeiro nome de várias pessoas.
 *         Termine quando uma idade negativa for digitada.
 *         Ao terminar, exiba o nome e a idade das pessoas
 *         mais jovens e mais velhas.
 * ============================================================ */
void ex19() {

}

/* ============================================================
 * Ex 20 - Preencha um vetor com modelos de 5 carros e outro
 *         com o consumo (km/l) de cada um. Calcule e mostre:
 *         (a) o modelo mais econômico;
 *         (b) quantos litros cada carro consome para 1.000 km.
 * ============================================================ */
void ex20() {

}

/* ============================================================
 * Ex 21 - Receba duas frases distintas e imprima-as de forma
 *         invertida, trocando as letras 'A' (maiúscula/minúscula)
 *         por '*'.
 * ============================================================ */
void ex21() {

}

/* ============================================================
 * Ex 22 - Leia o nome e o valor de uma mercadoria. O desconto
 *         para pagamento à vista é de 10%. Exiba o nome,
 *         valor total, valor do desconto e valor à vista.
 * ============================================================ */
void ex22() {

}

/* ============================================================
 * Ex 23 - Receba uma string S e inteiros I e J (não-negativos)
 *         e imprima o segmento S[I..J].
 * ============================================================ */
void ex23() {

}

/* ============================================================
 * Ex 24 - Receba uma string S, um caractere C e uma posição I.
 *         Retorne o índice da primeira ocorrência de C em S
 *         a partir da posição I.
 * ============================================================ */
void ex24() {

}

/* ============================================================
 * Ex 25 - Leia duas palavras e diga qual vem primeiro em ordem
 *         alfabética.
 * ============================================================ */
void ex25() {

}

/* ============================================================
 * Ex 26 - Cifra de César (deslocamento de 3 posições).
 *         Receba uma string e retorne a string codificada.
 *         Exemplo: "abc" → "DEF"
 * ============================================================ */
void ex26() {

}

/* ============================================================
 * Ex 27 - Dada uma string, diga se ela é um palíndromo ou não.
 *         Exemplos de palíndromos: "ovo", "arara".
 * ============================================================ */
void ex27() {

}

/* ============================================================
 * Ex 28 - Leia duas strings e verifique se a segunda está
 *         contida no FINAL da primeira.
 * ============================================================ */
void ex28() {

}

/* ============================================================
 * Ex 29 - Leia duas strings (str1, str2) e um inteiro N.
 *         Concatene no máximo N caracteres de str2 ao final
 *         de str1 e termine str1 com '\0'.
 * ============================================================ */
void ex29() {

}

/* ============================================================
 * Ex 30 - Leia duas cadeias A e B. Determine quantas vezes
 *         a cadeia A ocorre dentro da cadeia B.
 * ============================================================ */
void ex30() {

}

/* ============================================================
 * Ex 31 - Menu interativo com as opções:
 *   a) Ler string S1 (máx. 20 caracteres)
 *   b) Imprimir o tamanho de S1
 *   c) Comparar S1 com uma nova string S2
 *   d) Concatenar S1 com S2 e imprimir o resultado
 *   e) Imprimir S1 de forma reversa
 *   f) Contar quantas vezes um caractere aparece em S1
 *   g) Substituir a primeira ocorrência de C1 por C2 em S1
 *   h) Verificar se S2 é substring de S1
 *   i) Retornar uma substring de S1 (posição inicial + tamanho)
 * ============================================================ */
void ex31() {

}

/* ============================================================
 * Ex 32 - Leia uma data no formato "DD/MM/AAAA". Verifique se
 *         as barras estão no lugar certo e se DD, MM e AAAA são
 *         numéricos. Copie dia, mês e ano para 3 variáveis inteiras.
 * ============================================================ */
void ex32() {

}

/* ============================================================
 * Ex 33 - Leia uma tabela com nomes de até 5 alunos (perguntar
 *         se deseja inserir mais). Em seguida, leia um nome (ou
 *         parte dele) e exiba o nome completo e o índice do vetor
 *         onde foi encontrado.
 * ============================================================ */
void ex33() {

}

/* ============================================================
 * Ex 34 - Na sequência de dígitos abaixo, encontre o conjunto
 *         de 5 dígitos consecutivos que gera o maior produto.
 *
 * 73167176531330624919225119674426574742355349194934
 * 96983520312774506326239578318016984801869478851843
 * 85861560789112949495459501737958331952853208805511
 * 12540698747158523863050715693290963295227443043557
 * 66896648950445244523161731856403098711121722383113
 * 62229893423380308135336276614282806444486645238749
 * 30358907296290491560440772390713810515859307960866
 * 70172427121883998797908792274921901699720888093776
 * 65727333001053367881220235421809751254540594752243
 * 52584907711670556013604839586446706324415722155397
 * 53697817977846174064955149290862569321978468622482
 * 83972241375657056057490261407972968652414535100474
 * 82166370484403199890008895243450658541227588666881
 * 16427171479924442928230863465674813919123162824586
 * 17866458359124566529476545682848912883142607690042
 * 24219022671055626321111109370544217506941658960408
 * 07198403850962455444362981230987879927244284909188
 * 84580156166097919133875499200524063689912560717606
 * 05886116467109405077541002256983155200055935729725
 * 71636269561882670428252483600823257530420752963450
 * ============================================================ */
void ex34() {

}

/* ============================================================ */

int main() {
    // Chame aqui a função do exercício que deseja testar:
    //ex01();
    //ex02();
    //ex03();
    //ex04();
    //ex05();
    //ex06();
    //ex07();
    //ex08();
    //ex09();
    //ex10();
    

    return 0;
}