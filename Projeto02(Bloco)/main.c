#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Observe a utiliza��o da sintaxe */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	float a, b, c, d, e, p1, p2, area, rf;
	
	c = 2.69;
	d = 3.4;
	e = 1.5;
	
	printf("Bem vindo! Insira todas as medidas em metros para que possamos calcular com precis�o \n\n");
	
	printf("Insira o valor da primeira medida interna: \n");
	scanf("%f", &a); //As declara��es de leitura se apresentam com " , " e o s�mbolo & acompanhada da vari�vel
	
	printf("Insira o valor da segunda medida interna: \n");
	scanf("%f", &b);

	area = a * b;
	p1 = a * c;
	p2 = b * c;
	
	rf = (((p1 + p1 + p2 + p2)-d)/e);
	
	printf("Os valores est�o corretos ? \n \n");
	printf("Se sim precione enter... \n");
	printf("Se n�o reinicie o programa. \n\n");
	
	system("pause");
	
	printf("O valor da �rea �: "); printf("%f \n", area);
	printf("O valor da parede 1 �: "); printf("%f \n", p1);
	printf("O valor da parede 2 �: "); printf("%f \n", p2);
	printf("O resultado final �: "); printf("%f\n", rf);
	
	system("pause");
	
	printf("--------------------Resultados-------------------- \n");
	
	if ( area < 1.2 ){
		
		printf(" A �rea est� Errado \n ");
		
	} else{
		
		if ( area > 1.2 && area < 2){
		
		printf(" A �rea est� correta \n ");
	
		}
	
	}
	
	if( b<0.9 ){
		
			printf("O b est� errado \n");
			
		} else{
			
			if( b > 0.9 && b <= 3 ){
				
				printf("O b est� correto \n");
			
			}	 
		
		}
		 
	if( b > 3 ){
			
		printf("O b est� errado \n");
		
	}
		
	
	system("pause");
	
	return 0;
	
}
