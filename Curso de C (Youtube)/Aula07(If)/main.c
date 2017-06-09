#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 5;
	int b = 5;
	
	printf("Digite um valor para A: \n");
	scanf("%d", &a);
	getchar(); // Limpeza do buffer do teclado
	
	printf("Digite um valor para B: \n");
	scanf("%d", &b);
	getchar();
	
	if(a < b){
		
		printf("A menor que B \n\n");
		
	} else if(b < a ){
		
		printf("B menor que A \n\n");
		
	} else{
		
		printf("A e igual a B \n\n");
		
	}
	
	system("pause");
	return 0;
}
