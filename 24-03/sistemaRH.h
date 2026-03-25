
// 1. Inicializar dados
void inicializarDados(int ids[], float salarios[], int idades[], int desempenhos[], int quantidade);

// 2. Cadastrar funcion�rio
void cadastrarFuncionario(int ids[], float salarios[], int idades[], int desempenhos[],
                          int quantidade, int tamanhoMax,
                          int id, float salario, int idade, int desempenho);

// 3. Listar funcion�rios
void listarFuncionarios(int ids[], float salarios[], int idades[], int desempenhos[], int quantidade);

// 4. Buscar funcion�rio por ID
int buscarFuncionarioPorID(int ids[], int quantidade, int id);

// 5. Atualizar sal�rio
void atualizarSalario(int ids[], float salarios[], int quantidade, int id, float novoSalario);

// 6. Calcular m�dia salarial
float calcularMediaSalarial(float salarios[], int quantidade);

// 7. Encontrar maior sal�rio
float encontrarMaiorSalario(float salarios[], int quantidade);

// 8. Encontrar menor sal�rio
float encontrarMenorSalario(float salarios[], int quantidade);

// 9. Contar sal�rios acima de um valor
int contarSalarioAcima(float salarios[], int quantidade, float valor);

// 10. Aplicar aumento percentual
void aplicarAumento(float salarios[], int quantidade, float percentual);

// 11. Verificar se um ID j� existe
int idExiste(int ids[], int quantidade, int id);

// 12. Contar funcion�rios com desempenho acima de um valor
int contarDesempenhoAcima(int desempenhos[], int quantidade, int valor);

// 13. Calcular m�dia de idade
float calcularMediaIdade(int idades[], int quantidade);

// 14. Filtrar por desempenho m�nimo
int filtrarPorDesempenho(int ids[], float salarios[], int idades[], int desempenhos[],
                        int quantidade, int minimo,
                        int idsRes[], float salariosRes[], int idadesRes[], int desempenhosRes[]);

// 15. Calcular folha de pagamento
float calcularFolhaPagamento(float salarios[], int quantidade);

// 16. Contar funcion�rios por faixa et�ria
int contarPorFaixaEtaria(int idades[], int quantidade, int idadeMin, int idadeMax);

// 17. Encontrar �ndice do melhor desempenho
int encontrarMelhorDesempenho(int desempenhos[], int quantidade);

// 18. Atualizar desempenho
void atualizarDesempenho(int ids[], int desempenhos[], int quantidade, int id, int novoDesempenho);

// 19. Encontrar funcion�rio mais velho (retorna �ndice)
int encontrarMaisVelho(int idades[], int quantidade);

// 20. Copiar dados
void copiarDados(int idsOrig[], float salariosOrig[], int idadesOrig[], int desempenhosOrig[],
                 int idsDest[], float salariosDest[], int idadesDest[], int desempenhosDest[],
                 int quantidade);
