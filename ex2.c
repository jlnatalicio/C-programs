#include <stdio.h>

/* Exerc�cio 2:  Fa�a uma fun��o recursiva que calcule e retorne o fatorial de um n�mero inteiro N.
*  OBS.: O fatorial de um n�mero inteiro e positivo �n�, representado por �n!� � obtido a partir da
*        multiplica��o de todos os seus antecessores at� o n�mero um, cuja express�o gen�rica �
*        n! = n . (n � 1). (n � 2). (n � 3) ... 2,1.
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
