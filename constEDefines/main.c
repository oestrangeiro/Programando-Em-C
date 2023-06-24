/*
	Crie um aplicativo em C que peça ao usuário sua idade,
	e diga se ele já pode dirigir (se tiver 16 anos ou mais),
	se alistar (se tiver 18 anos ou mais)
	e se já pode se aposentar(65 anos ou mais).
	Use constantes: const e #define.
*/

#include <stdio.h>

#define MAIORIDADE 18
const int aposentadoria = 65;
const int motorista = 16; 

int main(void){

	int idade = 0;
	printf("\nDigite sua idade:");
	scanf("%d", &idade);
	
	
	while(idade <= 0){
	//	Verifica se o usuário tenta entrar com uma idade suspeita!
		printf("\nIDADE INVÁLIDA. TENTE NOVAMENTE:\n");
		printf("\nDigite sua idade:");
		scanf("%d", &idade);
		if(idade > 0){
			break;
		}
	}
	
	if(idade >= MAIORIDADE){
		printf("\nO usuário já pode dirigir e se alistar às forças armadas\n");
	}else if((idade < MAIORIDADE) && (idade >= motorista)){
		printf("\nO usuário já pode dirigir, mas ainda não pode se alistar às forças armadas");
	}else{
		printf("O usuário não pode nem dirigir e nem se alistar!\n");
	}
	
	if(idade >= aposentadoria){
		printf("Aposentadoria\n");
	}
	printf("IDADE: %d\n", idade);

	return 0;
}
