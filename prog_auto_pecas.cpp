#include <stdio.h>
#include <stdlib.h>

struct listaProd{
	int codigo;
	char produto[30];
	struct listaProd* prox;
};
typedef struct listaProd Produtos;
Produtos* inicializar (void){
	return NULL;
}

	Produtos* inserir (Produto * 1, int i, char* nprod;){
		Produtos* novo = (Produtos*) malloc(sizeof(Produtos));
		 
		 novo -> codigo = i;
		 novo -> produto = nprod;
		 novo -> prox = 1;
		 
		 return novo;
	}
	
Produtos* retira (Produtos* 1, int v){
	Produtos* ant = NULL;
	Produtos* p = 1;
	while (p != NULL && p -> codigo != v){
		ant = p;
		p = p -> prox;
	}
	if (p== NULL)
		return 1;
	if (ant == NULL){
		1 = p -> prox;
	} else {
		ant -> prox = p -> prox;
	}
	return 1;
}
Produtos* busca(Produtos* 1, int v){
	Produtos* p;
	for (p = 1; p != NULL; p = p -> prox){
		if (p -> codigo == v)
			return p;
	}
			return NULL;
}
int main() {
	
	int cont, codprod;
	char nprod[30];
	
	Produtos* listaProdutos;
	listaProdutos = inicializar();
	
	for(cont = 0; cont < 3; cont++){
		printf("\n Informe o codigo do Produto: ");
		scanf("%d", &codprod);
		
		printf("\n Informe o nome do Produto: \n");
		scanf("%d", &nprod);
		
		listaProdutos = inserir(listaProdutos, codprod, nprod);
	}
	printf("\n Lista Produtos: \n");
	imprimir(listaProdutos);
	
	printf("\n Informe o codigo do produto para pesquisa: ");
	scanf("%d", &codpro);
		if(busca(listaProdutos, codprod) == NULL){
			printf("\n\n Produto nao encontrado \n");
		}else{
			printf("\n\n Produto encontrado\n");
		}
		printf("\n"); system ("PAUSE");
	return 0;
}
