#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero01 = 15;
	
	float numero02 = 22.5;
	
	char caractere = 'w';
	
	printf("%d\n", numero01);
	printf("%.2f\n", numero02); // O ponto e o número após % representa o número de casas que quer apresentar
	printf("%c\n", caractere);
	
	system("pause");
	return 0;
	
}
