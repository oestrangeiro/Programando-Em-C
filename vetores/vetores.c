#include <stdio.h>
#include <stdio_ext.h>

int main(void){

//	INTRODUÇÃO AO ESTUDO DE ESTRUTRA DE DADOS: VETORES
//	Declaração básica de vetores:
//	tipo nomeDoVetor[tamanhoVetor]
	
	int numeros[3], indice;
	
	for(indice = 0; indice <= 2; indice++){
		printf("ENTRE COM O NUMERO %d: ", indice+1);
		scanf("%d", &numeros[indice]);
		__fpurge(stdin);
	}
	
	for(indice = 0; indice <= 2; indice++){
		printf("\nNUMERO %d -- VALOR == %d\n", indice+1, numeros[indice]);
	}

	return 0;
}
