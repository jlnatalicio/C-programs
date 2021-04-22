#include <stdio.h>

/* Exercício 2:  Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
*  OBS.: O fatorial de um número inteiro e positivo “n”, representado por “n!” é obtido a partir da
*        multiplicação de todos os seus antecessores até o número um, cuja expressão genérica é
*        n! = n . (n – 1). (n – 2). (n – 3) ... 2,1.
*/

int N,
    fatorial;

int calcularFatorial(int n);

int main()
{
    printf("***************************\n");
    printf("*** Caluladora Fatorial ***\n");
    printf("***************************\n");

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &N);
    fflush(stdin);

    fatorial = calcularFatorial(N);
    printf("\nO fatorial de %d e igual a %d\n\n", N, fatorial);

    return 0;
}

int calcularFatorial(int n)
{
    int fat = 0;
    int mult = 0;

    int loop(int numero, int i, int multiplicacao)
    {
        if (i == 1) multiplicacao = i;
        multiplicacao = multiplicacao * i;
        i++;

        if (i > numero) return multiplicacao;
        else return loop(n, i, multiplicacao);
    }

    fat = loop(n, 1, mult);
    return fat;
}
