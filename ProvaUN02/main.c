#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	int resp;
	
	do{
		
	int barris = 0, total = 0, acervo = 0, qtb = 0;
	float dolar = 0, conversao = 0, vt = 0, vb = 0;
	
		do {
		
			printf("Quantos barris você gostaria? ");
			scanf("%d", &barris);
		
			if(barris < 0 ){
			
				printf("Quantidade inválida\n");
				total = total;
			}else{
				total = total + barris;
			}
		
		} while (barris < 0 || barris > 0);
	
		printf("\nO total de barris é: %d\n", total);
		
		do{
	
		printf("\nDigite o valor do barril em dólar: \n");
		scanf("%f", &vb);
	
			if(vb < 1){
				
				printf("Valor inválido");
				
			}
	
		} while (vb < 1);
	
		do{
	
		printf("\nDigite o valor médio do dolar em reais: ");
		scanf("%f", &dolar);
	
			if(dolar < 1){
				
				printf("Valor inválido");
				
			}
			
		} while (dolar < 1);
	
		vt = acervo * vb;
	
		conversao = vt * dolar;
	
		printf("\nO valor final dos barris ficará em reais %.3f R$\n", conversao);
	
		enum resp{
		
			true = 1, false = 0
		
		};
	
		typedef enum resp bool;
	
			printf("Quer enecerrar o programa? (1 - Sim / 0 - Não)\n");
			scanf("%i", &resp);
		
			system("cls");
	
	}while(resp == 1);
	
	printf("O programa foi encerrado !");
	
	system("pause");
	
	return 0;
}

