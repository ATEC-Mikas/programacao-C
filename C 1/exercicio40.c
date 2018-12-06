#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {


	int num;
	
	printf("Digite o numero: ");
	scanf("%d",&num);
	
	if(num%3!=0) {
		printf("Nao e multiplo,");
	}
	else {
		printf("E multiplo de 3, Algarismo das unidades: ");
		switch(num%10) {
			case 0:
				printf("zero");
				break;
			case 1:
				printf("um");
				break;
			case 2:
				printf("dois");
				break;
			case 3:
				printf("tres");
				break;
			case 4:
				printf("quatro");
				break;
			case 5:
				printf("cinco");
				break;
			case 6:
				printf("seis");
				break;
			case 7:
				printf("sete");
				break;
			case 8:
				printf("oito");
				break;
			case 9:
				printf("nove");
				break;
			default:
				printf("ERRO\n\nParabens, partiu o meu programa.");
		}
	}
		
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
