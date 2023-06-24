#include <stdio.h>
#include <stdio_ext.h>

//	Exercicio com vetores:
//	Faça um programa em C que peça ao usuário duas notas que ele tirou e mostre a média.
//	Aliás, use somente um vetor para essas três variáveis.


int main(void){

	float notas[3];
	
	printf("\t\t===================================\n");
	printf("\t\t\t--Média com vetores--\n");
	printf("\t\t===================================\n\n");
	
	printf("INSIRA A PRIMEIRA NOTA: ");
	scanf("%f", &notas[0]);
	printf("\nINSIRA A SEGUNDA NOTA: ");
	scanf("%f", &notas[1]);

	notas[2] = (notas[0] + notas[1]) / 2;
	
	printf("\nA MÉDIA DAS NOTAS É: %.2f\n\n", notas[2]);
	
	return 0;
}
