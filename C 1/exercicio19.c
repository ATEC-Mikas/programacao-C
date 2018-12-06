#include <stdio.h>
#include <stdlib.h>

void main() {

	int contador=0;
	float num,soma=0;
	
	do {
		printf("Introduza um numero: ");
		scanf("%f",&num);
		if(num==0)
			printf("O primeiro numero nao pode ser 0");
	} while(num==0);
	
	while(num!=0) {
		contador++;
		soma+=num;
		printf("Introduza um numero: ");
		scanf("%f",&num);
	}
	
	printf("Terminou a leitura.\nForam lido %d numero(s)\nSoma: %.2f\nMedia: %.2f",contador,soma,soma/contador);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
