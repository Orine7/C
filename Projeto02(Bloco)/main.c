#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Observe a utilização da sintaxe */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	float a, b, c, d, e, p1, p2, area, rf;
	
	c = 2.69;
	d = 3.4;
	e = 1.5;
	
	printf("Bem vindo! Insira todas as medidas em metros para que possamos calcular com precisão \n\n");
	
	printf("Insira o valor da primeira medida interna: \n");
	scanf("%f", &a); //As declarações de leitura se apresentam com " , " e o símbolo & acompanhada da variável
	
	printf("Insira o valor da segunda medida interna: \n");
	scanf("%f", &b);

	area = a * b;
	p1 = a * c;
	p2 = b * c;
	
	rf = (((p1 + p1 + p2 + p2)-d)/e);
	
	printf("Os valores estão corretos ? \n \n");
	printf("Se sim precione enter... \n");
	printf("Se não reinicie o programa. \n\n");
	
	system("pause");
	
	printf("O valor da área é: "); printf("%f \n", area);
	printf("O valor da parede 1 é: "); printf("%f \n", p1);
	printf("O valor da parede 2 é: "); printf("%f \n", p2);
	printf("O resultado final é: "); printf("%f\n", rf);
	
	system("pause");
	
	printf("--------------------Resultados-------------------- \n");
	
	if ( area < 1.2 ){
		
		printf(" A área está Errado \n ");
		
	} else{
		
		if ( area > 1.2 && area < 2){
		
		printf(" A área está correta \n ");
	
		}
	
	}
	
	if( b<0.9 ){
		
			printf("O b está errado \n");
			
		} else{
			
			if( b > 0.9 && b <= 3 ){
				
				printf("O b está correto \n");
			
			}	 
		
		}
		 
	if( b > 3 ){
			
		printf("O b está errado \n");
		
	}
		
	
	system("pause");
	
	return 0;
	
}
