#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int dia;
	
	do {
		printf("Dia da semana:");
		scanf("%d",&dia);
		if(dia>7 || dia<1)
			printf("Numero invalido\n\n");
	} while(dia>7 || dia<1);
	
	switch(dia) {
		case 1:
			printf("Domingo");break;
		case 2:
			printf("Segunda-feira");break;
		case 3:
			printf("Terca-feira");break;
		case 4:
			printf("Quarta-feira");break;
		case 5:
			printf("Quinta-feira");break;
		case 6:
			printf("Sexta-feira");break;
		case 7:
			printf("Sabado");break;
		default:
			printf("Parabens, partiu o meu programa");
	}
	

		
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");
	
}
