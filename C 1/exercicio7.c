#include <stdio.h>
#include <stdlib.h>

void main() {
	
	float valor,dado;
	
	
	printf("Digite o valor a pagar:");
	scanf("%f",&valor);
	
	printf("Digite o valor dado:");
	scanf("%f",&dado);
		
	printf("\nTroco a dar: %.2f euros",(dado-valor)*0.90);
	
	//	printf("Hello World\n");
	// system("PAUSE");
	
}
