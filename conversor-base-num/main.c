#include <stdio.h>
#include <stdlib.h>

int main()
{
      int opcao, valor;
      int program_is_running = 1;
      
      printf("Conversor de Bases Numericas v2.0\n\n");
      fflush(stdout);
      
      while (program_is_running)
      {
            printf("Selecione uma das opcoes abaixo:\n");
            fflush(stdout);
            printf("1: decimal para hexadecimal\n");
            fflush(stdout);
            printf("2: hexadecimal para decimal\n");
            fflush(stdout);
            printf("3: fechar programa\n");
            fflush(stdout);
            printf("Informe a opcao: ");
            fflush(stdout);
            scanf(" %d", &opcao);
            
            if (opcao == 1)
            {
                  printf("Informe o valor decimal: ");
                  fflush(stdout);
                  scanf(" %d", &valor);
                  
                  printf("%d em decimal e igual a %x em hexadecimal!\n\n", valor, valor);
                  fflush(stdout);
            }
            else if (opcao == 2)
            {
                  printf("Informe o valor hexadecimal: ");
                  fflush(stdout);
                  scanf(" %x", &valor);
                  
                  printf("%x em hexadecimal e igual a %d em decimal!\n\n", valor, valor);
                  fflush(stdout);
            }
            else if (opcao == 3)
            {
                  printf("Finalizando programa...\n");
                  fflush(stdout);
                  program_is_running = 0;
            }
            else
            {
                  printf("Opcao invalida.\n\n");
                  fflush(stdout);
            }
      }
	
      system("PAUSE");
      return 0;
}
