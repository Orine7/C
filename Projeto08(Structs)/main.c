#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	struct contato{
		
		char nome[60];
		long int numero;
		int ddd;
		char email[100];
		
	};
	
	typedef struct contato Agenda;
	int i, qtd;
	char resposta="S";
	
	do{
		
		printf("Digite o número de contatos que deseja resgistrar: ");
		scanf ("%d", &qtd);
		
		Agenda dados[qtd];
		
		if (qtd > 100){
			
			printf("Não é permitido colocar mais que 100 contatos nessa agenda");
			return 0;
			
		}
		
		for( i=0; i< qtd; i++){
			
			printf("Digite o nome do contato: ");
			scanf("%s", &dados[i].nome);
			
			printf("Digite o numero do contato: ");
			scanf("%ld", &dados[i].numero);
			
			printf("Digite o DDD do número: ");
			scanf("%d", &dados[i].ddd);
			
			printf("Digite o e-mail do contato: ");
			scanf("%s", &dados[i].email);
			
		}
		
		system("cls");
		
		printf("----------- Relatório de contatos ----------- \n\n");
		
		
		fflush(stdin);
		printf("Deseja executar o programa novamente? ");
		printf("1 - SIM / 0 - NÃO \n");
		resposta=getc(stdin);
		
		system("cls");		
		
		
	}while(resposta=='1');	
	
		Agenda dados[qtd];
	
		for(i=0; i <qtd; i++){
			
			printf("----------- Relatório de contatos ----------- \n\n");
			
			printf("Nome do contato: %s\n",dados[i].nome);
			printf("Número do contato: %ld\n",dados[i].numero);
			printf("DDD do contato: %d\n",dados[i].ddd);
			printf("E-mail do aluno: %s\n",dados[i].email);
			
			printf("\n\n");
			
		}
	
	printf("Programa encerrado...");
	
	system("pause");
	
	return 0;
}
