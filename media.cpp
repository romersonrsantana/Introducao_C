#include <iostream>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int avalia;
	char letra;
	float media;				//pesquisar sobre o comando fflush e sobre getchar;
	int cont = 0;
	int soma = 0;
		do{
			printf("Digite uma nota para a avaliacao: \n");
			scanf("%d", &avalia);
			fflush(stdin);
			cont++;
			soma = soma + avalia;
			printf("Digite qualquer letra para continuar ou \'s\' para encerrar: \n");
		}
		while(letra = getchar() != 's');
			printf("\n \n Quantidade de avaliacao = %d e soma das notas = %d. \n", cont, soma);
			media = soma/cont;
			system("PAUSE");
			
			
			
		
	return 0;
}
