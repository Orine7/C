#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a , b, c, d, e;
	scanf("%i",&e);
	
	if((e>=0)&&(e<=47)) {
		
		while (e>0) {
			
				c=0;
				d=1;
				
			for( a = 0 ; a < e ; a++ ){
				
			b = c + d;
			
			if (a > 0) {
				
			printf (" ");
			
			}
			
			printf("%d", c);
			
			c = d;
			d = b;
			
			}
			
			printf("\n");
			
			scanf("%i", &e);	
			
		}
		
	}
	
}
