#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a;
	
	printf ("Digite um numero de um canal de tv:\n");
	scanf ("%d", &a);
	
	if (a==2) {
		printf ("SBT");
	
	}else if (a==4){	
		printf ("BAND");
	
	}else if (a==6){	
		printf ("REDETV!");
	
	}else if (a==9){	
		printf ("RECORD");
	
	}else if (a==13){	
		printf ("GLOBO");
	
	}else {
		printf ("Canal Invalido");
	}
		
	
	return 0;
}
