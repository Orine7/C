#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao, valor;
	
	printf("Conversor Bases Numericas \n");
	printf("1: Decimal para hexadecimal \n");
	printf("2: Hexadecimal para decimal \n");
	
	printf("\n\nInforme a opcao: ");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		
		printf("\nInformar o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		
		printf("%d em hexadecimal e: %x \n", valor, valor);
		
	} else if(opcao == 2){
		
		printf("\nInformar aao valor em hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		
		printf("%x em decimal e: %d \n", valor, valor);
		
	} else{
		
		printf("\n Sua opção é invalida \n");
		
	}
	
	system("pause");
	return 0;
}
