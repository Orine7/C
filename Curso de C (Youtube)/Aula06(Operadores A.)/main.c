 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 0, b = 0, c = 0, d = 0;
	
	a++;    // a = 0 + 1
	
	b--;    // b = 0 - 1
	
	c = 1;  // c = 1  
	
	c += a; // c = c + a = 2
	
	d -= c; // d = d - c = -2
	
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	
	system("pause");
	return 0;
}
