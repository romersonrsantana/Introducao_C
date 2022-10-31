#include <stdio.h>
int somar(int a, int b){
return a + b;	
}



int main() {
	int result;
	int test;								// Passagem de parâmetros por valor;
	result = somar(10,15);
	printf("\n Resultado da soma = %d", result);
	test = somar(28, 16);
	printf("\n\n Resultado da soma = %d", test);
	return 0;
}
