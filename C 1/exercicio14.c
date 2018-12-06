#include <stdio.h>
#include <stdlib.h>

void main() {

	float saldo;

	do {
		printf("Saldo medio:");
		scanf("%f",&saldo);
		if(saldo<0)
			printf("Programa nao suporta creditos negativos\n\n");
	} while(saldo<0);

	printf("\n\n\n");

	if(saldo>600)
		printf("Saldo medio: %.2f\nValor do cedito: %.2f\n",saldo,saldo*0.40);
	else if(saldo>400)
			printf("Saldo medio: %.2f\nValor do cedito: %.2f\n",saldo,saldo*0.30);
		else if(saldo>200)
				printf("Saldo medio: %.2f\nValor do cedito: %.2f\n",saldo,saldo*0.20);
			else printf("Saldo medio: %.2f\nValor do cedito: 0.00\n",saldo);






	//	printf("Hello World\n");
	//system("PAUSE");

}
