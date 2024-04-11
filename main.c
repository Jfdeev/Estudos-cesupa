#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x;
	double seno;
	double cosseno;
	
	printf("Digite x: ");
	scanf("%f", &x);
	
	seno = sin(x);
	cosseno = cos(x);
	
	
	
	
	printf("%f, %f", seno, cosseno);
	
	return 0;
}
