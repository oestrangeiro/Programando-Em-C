#include <stdio.h>
#define TAM_MATRIZ 3

int main(void){

	int matriz[TAM_MATRIZ][TAM_MATRIZ], linha, coluna;

	// Escrevendo a matriz

	for(linha = 0; linha < TAM_MATRIZ; linha++){
		for(coluna = 0; coluna < TAM_MATRIZ; coluna++){
			printf("\nElemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}

	// Agora escrevendo a matriz na tela

	for(linha = 0; linha < TAM_MATRIZ; linha++){
		for(coluna = 0; coluna < TAM_MATRIZ; coluna++){
			printf("%3d", matriz[linha][coluna]);
			printf("\n");
		}
	}

	return 0;
}
