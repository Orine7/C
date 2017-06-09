#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao, valor;
	
	printf("Converter: \n");
	printf("1: Decimal para hexadecimal: \n");
	printf("2: Hexadecimal para decimal: \n");
	
	printf("\nInforme a sua opção: ");
	scanf("%d", &opcao);
	getchar();
	
	switch(opcao){
		
		case 1:
			
			printf("\nInforme o valor em Decimal: ");
			scanf("%d", &valor);
			getchar();
			
			printf("%d em hexadecimal e: %x", valor, valor);
				
			break;
				
		case 2:
			
			printf("\nInforme o valor em Hexadecimal: ");
			scanf("%x", &valor);
			getchar();
			
			printf("%x em decimal e: %d", valor, valor);
			
			break;
			
		default:
		
		printf("\nOpção inválida\n");
				
	}
	
	system("pause");
	return 0;
}
