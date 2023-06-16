#include <stdio.h>
#include <math.h>

int main (void){
	double volumeCubo = 0.0;
	double arestaCubo = 0.0;

	printf("Este programa calcula o volume de um cubo de dimensões quaisquer\n");
	printf("É necessário que o usuário informe o tamanho da aresta do cubo:\n");
	scanf("%lf", &arestaCubo);
	printf("Valor informado: %.2lf\n", arestaCubo);
	// V = a³
	volumeCubo = pow(arestaCubo, 3);
	printf("O volume do cubo é: %.2lf U.M\n", volumeCubo);
	
	return 0;
}
