#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Projeto da aula 02

int main(int argc, char *argv[]) {
	
	int numero;  // Isto � uma vari�vel
	
	printf("Digite um numero:\n" );  // Imprime a frase na tela
	scanf("%d",&numero);  // L� o n�mero que o usu�rio digita
	getchar();  // O comando "getchar" limpa o buffer do teclado
	
	printf("O numero e igual a: %d \n\n", numero);  // Exibe o n�mero armazanado na vari�vel 
	
	system("pause");
	return 0;
}
