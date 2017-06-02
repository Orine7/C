#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	struct aluno{
		
		char nome[50];
		long int matricula;
		int idade;
		
	};
	
	typedef struct aluno Turma;
	int i,qtd;
	char resposta='S';
	
	do{	
	
		printf("Digite a quantidade de alunos que deseja: ");
		scanf("%d",&qtd);
		
		Turma dados[qtd];
			
		
		for(i=0;i<qtd;i++){
			
			printf("Digite o nome do aluno: ");
			scanf("%s",&dados[i].nome);
			
			printf("Digite a matrícula do aluno: ");
			scanf("%ld",&dados[i].matricula);
			
			printf("Digite a idade do aluno: ");
			scanf("%d",&dados[i].idade);
			
		}
		
		system("cls");
		
		printf("------------Relatório de alunos------------\n\n");
		
		for(i=0;i<qtd;i++){
			
			printf("Nome do aluno: %s\n",dados[i].nome);
			printf("Matrícula do aluno: %ld\n",dados[i].matricula);
			printf("Idade do aluno: %d\n",dados[i].idade);
			printf("\n\n");
			
		}
		
		fflush(stdin);
		printf("Deseja executar o programa novamente? ");
		resposta=getc(stdin);
		
		system("cls");		
		
		
	}while(resposta=='S');	
	
	printf("Programa encerrado...");

	return 0;
}
