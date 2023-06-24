#include <stdio.h>


int main(void){
	
	//	Introdução ao uso de ponteiros

	int x = 10;
	printf("O valor de x = 10\n");
	
	int *pointer;
	pointer = &x; //	O ponteiro aponta para o endereço de memória da variavel x
	printf("\nO endereço de x = %i\n", pointer);

	int y = 20;
	*pointer = y;

	printf("Os valores de x e y agora são, respectivamente: '%i' e '%i'\n", x, y);
	 
	return 0;
}
