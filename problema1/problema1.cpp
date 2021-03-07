#include <stdio.h>
#include <stdlib.h>

int main () 
{
    // declaração de variaveis "simples"
    int tamanhoLista;
    int size , insertIten;
    // Requisita que o usuário insira o tamanho da lista
    printf("Digite o tamanho da lista: \n ");
    // Recebe e armazena em tamanhoLista o tamanho da lista
    scanf ("%d", &tamanhoLista);
    // Apenas uma exibição do tamanho do array
    printf("O tamanho da lista é: %d \n", tamanhoLista);
    // Define o tamanho do array que será percorrido
    // Uma curiosidade, se declarar numeros[tamanhoLista] no inicio do escopo, o sistema não entende qual será o tamanho da lista pois tamanhoLista ainda não foi preenchido
    // por isso declaramos apenas depois de tamanhoLista ter sido preenchido
    int numeros[tamanhoLista];
    // Percorre o array preenchendo os vetores, size será o contador que irá medir o tamanho da lista
    for (size = 0; size < tamanhoLista; size++)
    {
        // Gerei apenas uma lista de inserção de valores
        printf("%d - Insira um novo número: \n", size);
        // insert item foi apenas para gerar uma variavel didatica para o grupo... 
        // não existe uma necessidade real do uso dela podendo o scanf receber o array diretamente 
        // seria algo assim: scanf("%d", &numeros[size]);
        scanf("%d", &insertIten);
        // Monta o array numeros[tamanhoLista] onde números é a variavél e tamanho lista é o indice do array (no caso o valor recebido de tamanho lista)
        // ou seja, se tamanho lista for 3, numeros[tamanhoLista] será um vetor de 3 indices
        numeros[size] = insertIten;
    }

    // Resgata o tamanho do array novamente porém depois dos indices terem sido preenchidos
    int n = sizeof(numeros)/sizeof(numeros[0]);
    // Apenas um debug para saber se o tamanho está correto
    printf("O tamanho do array é %d \n  ", n);
    // Para ficar mais fácil de entender, declarei a variavél maior valor neste ponto
    int maiorValor, menorValor;
    // armazena o primeiro valor do array em menorValor para fins de comparação 
    maiorValor = numeros[0];
     // realiza um novo loop desta vez para capturar os valores utilizados no array e tentar retirar o maior valor
    for (size_t i = 0; i < n; i++)
    {
        // Percorrendo o array, irá procurar pelo maior valor e então a variavel maiorValor será alterado ficando com o maior valor do array
        if(maiorValor < numeros[i]){
            maiorValor = numeros[i];
        }
    }
    // armazena o primeiro valor do array em menorValor para fins de comparação
    menorValor  = numeros[0];
     // realiza um novo loop desta vez para capturar os valores utilizados no array e tentar retirar o menor valor
    for (size_t i = 0; i < n; i++)
    {
        // Percorrendo o array, irá procurar pelo maior valor e então a variavel menorValor será alterado ficando com o menor valor do array
        if(menorValor > numeros[i]){
            menorValor = numeros[i];
        }
    }
    printf("O maior valor do array é: %d, e o menor valor é: %d \n", maiorValor, menorValor);
    // Declara uma variavél que receba a somatória dos valores do array
    double total;
    // Percorre o array somando os valores ao total
    for (size_t i = 0; i < n; i++)
    {
        total += numeros[i];
    }
    //  Calcula a média dos valores do array
    printf("A média é: %f", (total / tamanhoLista));
    // finaliza o programa
    return (0);
}