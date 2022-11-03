// 4) Faça um programa que separe o inteiro do decimal
#include <stdio.h>

int main(){
	float sal, x;
	
	scanf("%f", &sal);	
	x = sal - (int)sal;
	printf("%d\n", (int)sal);
	printf("%.2f\n", x);
	
	return 0;
}
