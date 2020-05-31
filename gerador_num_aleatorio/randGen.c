/*
* Data: 30/05/2020
* Desenvolvido por: José L. Natalício
* Objetivo do programa - criar 15 numeros inteiros aleatórios diferentes, entre 1 e 25
*/

#include <stdio.h>
#include <stdlib.h> // necessário para utilizar as funções rand() e srand()
#include <time.h> // necessário para usar a função time()

// função jaExiste: função criada para saber se, num determindo vetor[tamanhoVetor], já existe o valor
int jaExiste (int vetor[], int tamanhoVetor, int valor) {
    for (int a = 0; a < tamanhoVetor; a++) {
        if (vetor[a] == valor) return 1;
    }
    return 0;
}

int main () {

    int numero[15], numeroAux, indice;

    srand(time(NULL));                            // inicializa o gerador de números pseudo-aleatórios,
                                                  // com base no tempo

    for (int i = 0; i < 15; i++) {
        numeroAux = rand() % 25 + 1;              // gera um número aleatório, entre 1 e 25
        while (jaExiste(numero, 15, numeroAux)) { /* enquanto o número gerado já existir no vetor numero[]... */
            numeroAux = rand() % 25 + 1;          /*  gerar outro número aleatório                            */
        }
        numero[i] = numeroAux;                    // armazenar número gerado no vetor numero[]
    }

    // Imprimir os números gerador na tela
    for (int j = 0; j < 15; j++) {
        printf("Numero %i: %i\n", j, numero[j]);
    }

    return 0;
}