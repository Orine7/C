#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valorbb1a, valorbb2c, valorbb3p, multbb1a, multbb2c, multbb3p, total ;
	int qntbb1a, qntbb2c, qntbb3p;
	
	//Comentas os printf
	
	printf("Digite o valor do bombom de avelã: \n"); 
	scanf("%f", &valorbb1a);
	
	printf("Digite o valor do bombom de caramelo: \n"); 
	scanf("%f", &valorbb2c);
	
	printf("Digite o valor do bombom de passas: \n"); 
	scanf("%f", &valorbb3p);
	
	printf("Digite a quantidade do bombom de avelã \n"); 
	scanf("%i", &qntbb1a);
	
	printf("Digite a quantidade do bombom de caramelo: \n"); 
	scanf("%i", &qntbb2c);
	
	printf("Digite a quantidade do bombom de passas: \n"); 
	scanf("%i", &qntbb3p);
	
	multbb1a = valorbb1a * qntbb1a;
	multbb2c = valorbb2c * qntbb2c;
	multbb3p = valorbb3p * qntbb3p;
	
	total = multbb1a + multbb2c + multbb3p;
	
	printf("Valor: R$%.2f \n", total);
	
	system("pause");
	return 0;
	
}
