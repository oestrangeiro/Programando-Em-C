#include <stdio.h>

int main(void){

	char letra, letra2;
	
	printf("insira uma letra do teclado: ");
	scanf("%c", &letra);
	printf("insira outra letra: ");
	scanf("%c", &letra2);
	printf("1a letra digitada: %c", letra);
	printf("2a letra digitada: %c", letra2);

	// PROBLEMA NO BUFFER (ASSUNTO A SER ESTUDADO NO PROXIMO EXERCICIO)

	// printf("Insira uma letra: ");
	// letra = getchar();
	// printf("letra digitada: '%c'\n", letra);
	 
	return 0;
}
