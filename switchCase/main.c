#include <stdio.h>
#include <stdio_ext.h>

int main(void){

	int escMenu = 0;

	printf("\t\t------------------------\n");
	printf("\t\t---MENU PADARIA MASSA BOA---\n");
	printf("\t\t------------------------\n");
	
	printf("(1) ESTOQUE\n");
	printf("(2) VENDA\n");
	printf("(3) COMPRA\n");
	scanf("%i", &escMenu);
	__fpurge(stdin);
	
	switch(escMenu){
		case 1:
			printf("'Estoque' SELECIONADO! PRESSIONE QUALQUER TECLA PARA PROSSEGUIR");
			break;
			
		case 2:
			printf("'Venda' SELECIONADO! PRESSIONE QUALQUER TECLA PARA PROSSEGUIR");
			break;
			
		case 3:
			printf("'Compra' SELECIONADO! PRESSIONE QUALQUER TECLA PARA PROSSEGUIR");
			break;
		
		default:
			printf("Lamento, mas sua escolha não é válida! Tente novamente\n");
		
	}
	
		
	return 0;	
}
