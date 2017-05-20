#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d, k;
	float r;
	
	scanf("\n%i", &d);
	scanf("%i", &k);
	
	if (k <= (d*100)){
		
		r = (d*90);
		printf("%.2f\n",r);
		
	} else{
		
		r = (d*90)+(12*(k-(d*100)));
		printf("%.2f\n",r);
		
	}
	
	return 0;
}
