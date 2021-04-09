// Objetivo: fazer um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, 
// utilizando as seguintes fórmulas (onde h corresponde à altura):
// • Homens: (72.7 * h) -58 
// • Mulheres: (62.1 * h) - 44.7

#include <stdio.h>

int main() {
	
	float altura;
	float pesoIdeal;
	char sexo;
	
	printf("Por favor insira sua altura e sexo abaixo:\n");
	
	printf("Altura (m): ");
	scanf("%f", &altura);
	fflush(stdin); // util agora, porem tbm não é recomendado usar essa função
	printf("Sexo [M/F]: ");
	sexo = getchar();
	//scanf("%c", &sexo); // não é recomendado usar essa função para variáveis do tipo char ou string!
	
	if (sexo == 'F' || sexo == 'f') {
		printf("%f\n\n", altura);
		pesoIdeal = 62.1 * altura - 44.7;
		printf("caracter digitado: %c\n", sexo);
		printf("%f\n\n", pesoIdeal);
	}
	else if (sexo == 'M' || sexo == 'm') {
		printf("%f\n\n", altura);
		pesoIdeal = 72.7 * altura - 58.0;
		printf("caracter digitado: %c\n", sexo);
		printf("%f\n\n", pesoIdeal);
	}
	
	printf("O peso ideal para uma pessoa com as caracteristicas acima e %.2fkg!\n", pesoIdeal);
	
	system("pause");
	return 0;
}
