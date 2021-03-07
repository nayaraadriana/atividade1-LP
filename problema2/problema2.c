#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char vogais[] = {'a', 'e', 'i', 'o' , 'u' , 'A', 'E', 'I', 'O', 'U'};
    char frase[20];
    int quantidade = 0;

    printf("Digite uma frase: ");
    scanf("%s", frase);

    for (int i = 0; i < strlen(frase); i++){

        for (int j = 0; j < strlen(vogais); j++){

            if ( vogais[j] == frase[i] ) {

                quantidade = quantidade+1 ;
            }
            
        }

    }

    if (quantidade == 0) {
        printf("Frase sem vogais");

    } else {

        printf("Foram encontradas %i vogais", quantidade);

    }

}