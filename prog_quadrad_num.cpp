#include <stdio.h>
float calcular(){
	float num;
	printf("\n\n Digite um numero: ");
	scanf("%f", &num);
	return num*num;
}														//Todo programa começa na função main; na linha 11 a função calcular() é chamada;
														// O programa pula para a linha 2; Após executar todos os comandos volta para a linha 11 onde
														//o resultado é armezenado;
int main() {
	float resultado = 0;
	resultado = calcular();
	printf("\n A pontencia do numero digitado = %.2f ", resultado);
	return 0;
}
