//	O LAÇO DO-WHILE EXECUTA O BLOCO DE CODIGO PELO MENOS UMA VEZ

#include <stdio.h>

int main(void){

	int sensorPorta = 0;

	do{
		if(sensorPorta == 0){
			printf("Porta está fechada!\n");
		}else{
			printf("Porta está aberta!\n");
		}
	}while(sensorPorta == 1);
	
	return 0;
} 
