/*3) Faça um programa que leia um número real e apresente a sua 
*parte inteira e fracionária de uma forma separada.
*/

	#include <stdio.h>
		
		int main(){
	
			float x;
	
			scanf("%f", &x);
			printf("int: %d\n", (int)x);
			printf("decimal: %f\n", x - (int)x);
	
			return 0;
		}
