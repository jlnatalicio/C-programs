#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int opcao, valor;
	
	printf("Conversor de Bases Numericas v1.0\n\n");
	
	printf("1: decimal para hexadecimal\n");
	printf("2: hexadecimal para decimal\n");
	printf("Informe a opcao: ");
	scanf("%d", &opcao);
	fflush(stdin);
	
	if (opcao == 1)
	{
		printf("Informe o valor decimal: ");
		scanf("%d", &valor);
		fflush(stdin);
		
		printf("%d em decimal e igual a %x em hexadecimal!\n", valor, valor);
	}
	else if (opcao == 2)
	{
		printf("Informe o valor hexadecimal: ");
		scanf("%d", &valor);
		fflush(stdin);
		
		printf("%x em hexadecimal e igual a %d em decimal!\n", valor, valor);
	}
	else printf("Opcao invalida.\n");
	
	printf("\nPressione uma tecla para continuar...");
	getchar();
	return 0;
}
