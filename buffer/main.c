#include <stdio.h>
#include <stdio_ext.h>


int main(void){

	char letra, letra2;
	
	printf("insira uma letra do teclado: ");
	scanf("%c", &letra);
	__fpurge(stdin);	//Limpando o buffer
	printf("insira outra letra: ");
	scanf("%c", &letra2);
	__fpurge(stdin);
	
	printf("as letras digitadas foram: '%c' e '%c'", letra, letra2);

	return 0;
}
	
