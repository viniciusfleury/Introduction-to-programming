/*2) Faça um programa que leia o 3 valores de uma equação e segundo grau e 
* imprima a o delta.
*/
#include <stdio.h>
#include <math.h>

int main(){
	float delta, a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	delta = sqrt(pow(b,2) - (4*a*c));
	
	printf("%.2f\n", delta);
	return 0;
}
