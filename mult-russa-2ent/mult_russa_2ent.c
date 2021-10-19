#include <stdio.h>
#include <stdlib.h>

/* Objetivo: Escreva uma fun��o recursiva que permita fazer a multiplica��o � russa de 2 entradas.
*            A Multiplica��o russa consiste em:
* (a) Escrever os n�meros A e B, que se deseja multiplicar na parte superior das colunas.
* (b) Dividir A por 2, sucessivamente, ignorando o resto at� chegar � unidade, escrever os resultados da coluna A.
* (c) Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados sucessivos na coluna B.
* (d) Somar todos os n�meros da coluna B que estejam ao lado de um n�mero �mpar da coluna A.
*                              Exemplo: 27 * 82
*                          -------------------------------
*                          | A | B  | Parcelas para soma |
*                          |27 | 82 |       82           |
*                          |13 |164 |       164          |
*                          | 6 |328 |        -           |  soma = 82 + 164 + 656 + 1312;
*                          | 3 |656 |       656          |
*                          | 1 |1312|       1312         |
*                          -------------------------------
*                                  soma = 2214
*/

int a,
    b,
    soma,
    resultado;

int multRussa(int a, int b);
int interna(int a, int b, int soma);

int main()
{
    printf("*************************************\n");
    printf("* Multiplicacao russa de 2 entradas *\n");
    printf("*************************************\n");

    printf("Insira 2 numeros inteiros para fazer o calculo:\n");
    printf("A: ");
    fflush(stdout);
    scanf(" %d", &a);
    printf("B: ");
    fflush(stdout);
    scanf(" %d", &b);
    printf("A = %d, B = %d\n\n", a, b);
    fflush(stdout);

    resultado = multRussa(a, b);
    printf("resultado = %d\n\n", resultado);
    fflush(stdout);

    system("PAUSE");
    return 0;
}

int multRussa(int A, int B)
{
    int interna(int A, int B, int soma)
    {
        if (A == 0) return soma;
        if (A % 2 != 0) soma += B;
        B = B * 2;
        return interna(A / 2, B, soma);
    }
    int soma = 0;
    interna(A, B, soma);
}
