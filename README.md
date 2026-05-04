# Estrutura de Dados I

Repositório com exercícios, listas e códigos de apoio da disciplina **Estrutura de Dados I** da UTFPR, Campus Ponta Grossa.

O material está organizado por data/pasta, o que facilita acompanhar a evolução das aulas e dos exercícios práticos.

## Estrutura

| Pasta | Conteúdo |
|-------|----------|
| `17-03/` | Aula 01 e exercícios iniciais com strings |
| `18-03/` | Exercícios introdutórios e cálculo de média de idade |
| `23-03/` | Biblioteca auxiliar (`bib.h` / `bib.c`) e testes |
| `24-03/` | Estruturas e funções relacionadas a RH |
| `31-03/` | Exercícios sobre ponteiros, vetores e funções |
| `1-04/` | Exercícios sobre alocação e manipulação de memória |
| `03-04/` | Listas e exercícios de apoio |
| `04-05/` | Exercícios da data correspondente |
| `6-04/` | Exercício complementar |
| `7-04/` | Exercício de prova |
| `12-04/` | Exercício de prova 2 |
| `leetcode/` | Soluções de exercícios do LeetCode |

## Exemplos de arquivos

- `17-03/aula01.c` - testes com strings, leitura, comparação e arrays de strings.
- `17-03/exercicio_string.c` - lista de exercícios sobre manipulação de strings.
- `23-03/bib.c` e `23-03/bib.h` - funções auxiliares reutilizáveis.
- `31-03/*.c` - exercícios sobre ponteiros, vetores e troca de valores.

## Como compilar

Use `gcc` para compilar o arquivo desejado:

```bash
gcc 17-03/aula01.c -o aula01
gcc 17-03/exercicio_string.c -o exercicio_string
gcc 23-03/testebib.c 23-03/bib.c -o testebib
```

Alguns arquivos têm espaço no nome. Nesse caso, use aspas:

```bash
gcc "24-03/funcao 5.c" -o funcao5
```

## Requisitos

- Compilador C compatível com `gcc`
- Ambiente para executar programas em linha de comando

## Observação

Este repositório reúne material acadêmico e exercícios em andamento. Alguns arquivos podem conter rascunhos, testes ou implementações parciais.
