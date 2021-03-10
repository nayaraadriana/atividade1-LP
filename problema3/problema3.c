#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int tamanhoLista = 0;
    int ocorrencias = 0;
    int size, insertIten, chave;
    int numeros[tamanhoLista];
    
    printf("Digite uma chave de busca: \n ");
    scanf ("%d", &chave);

    printf("Digite o tamanho da lista: \n ");
    scanf ("%d", &tamanhoLista);

    printf("O tamanho da lista é: %d \n", tamanhoLista);

    for (size = 0; size < tamanhoLista; size++){
        printf("Insira um novo número: ");
        scanf("%d", &insertIten);
        
        numeros[size] = insertIten;
    }

    printf("\n A lista ficou assim: ");

    if (tamanhoLista == 0){
        printf("Vazia! \n\n");
    }

    for (int i = 0; i < tamanhoLista; i++){
        printf("%i | ", numeros[i]);
    
    }

    for (int i = 0; i < tamanhoLista; i++){

        if (numeros[i] == chave) {
            ocorrencias = ocorrencias + 1 ;
        }
        
    }

    if (ocorrencias > 0) {
        printf("\n\n A chave apareceu %i vezes", ocorrencias);
    } else {
        printf("\n\n Chave nao encontrada");
    }

    printf("\n\nForam realizadas %i comparações", tamanhoLista);  
    
}