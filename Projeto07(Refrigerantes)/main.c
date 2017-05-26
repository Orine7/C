#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	char refri[5][50];
	
	printf("Bem vindo, para começar digite os refrigerantes que deseja cadastrar: \n");
	
	system("pause");
	
	for(i=0; i<5; i++){
		
		printf("Digite o nome do refrigerante que deseja cadastrar: \n", i+1);
		scanf("%s", refri[i]);
		
	}
	
	system("cls");   //Limpar a tela
	
	printf("Agora vote em um dos refrigerantes cadastrados: \n");
	
	for(i=0; i<5; i++){
		
		printf("%s\t",refri[i]);
		printf("Código: %d\t", i+1);
		printf("\n");
		
	}
	
	int votos[5]={0,0,0,0,0};
	int cod;
	
	printf("Digite o código do refrigerante votado: ");
	scanf("%d",&cod);
	
	while(cod!=0){
		
		votos[cod-1]++;
		printf("Digite o código do refrigerante votado: ");
		scanf("%d",&cod);
		
	}
	

	//Variavel de contagem local (Contagem de votos)
	
	for(cod=0; cod<5; cod++){
		
		if( cod < 5 ){
			
			if( votos[cod] > votos[cod + 1] ){
				
			printf("maior = \n", cod);
				
			} else{
				
				printf("menor = \n", cod + 1);
				
			}
			
		}
		
	}
	
	system("pause");
	
	return 0;
	
}
