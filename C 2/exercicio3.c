#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int flagvetor=0;
int vetor[10];

void exercicioA() {
	fflush(stdin);
	system("CLS");
	int contador=0,num,i;
	if(flagvetor) {
		for(i=0;i<10;i++) {
			if(vetor[i]<0) {
				contador++;
			}
		}
	}
	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&num);
			if(num<0) {
				contador++;
			}
		}
	}
	
	printf("Existe %d numeros negativos\n\n",contador);
	
	system("pause");
	menu();
}

void exercicioB() {
	fflush(stdin);
	system("CLS");
	int contador=0,soma=0,num,i;
	if(flagvetor) {
		for(i=0;i<10;i++) {
			if(vetor[i]>=0) {
				soma+=vetor[i];
				contador++;
			}
		}
	}
	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&num);
			if(num>=0) {
				soma+=num;
				contador++;
			}
		}
	}
	
	printf("Media dos numeros positivos: %.2f\n\n",(float)soma/contador);
	
	system("pause");
	menu();
}

void exercicioC() {
	fflush(stdin);
	system("CLS");
	int contador=0,soma=0,num,i;
	if(flagvetor) {
		for(i=0;i<10;i++) {
			soma+=vetor[i];
			contador++;
		}
	}
	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&num);
			soma+=num;
			contador++;
		}
	}
	
	printf("Media dos numeros positivos: %.2f\n\n",(float)soma/contador);
	
	system("pause");
	menu();
}

void exercicioD() {
	fflush(stdin);
	system("CLS");
	int contador=0,num,i;
	if(flagvetor) {
		for(i=0;i<10;i++) {
			if(vetor[i]%3==0 || vetor[i]%5==0) {
				contador++;
			}
		}
	}
	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&num);
			if(num%3==0 || num%5==0) {
				contador++;
			}
		}
	}
	
	printf("Ha %d multiplos de 3 e de 5\n\n",contador);
	
	system("pause");
	menu();
}
void exercicioE() {
	fflush(stdin);
	system("CLS");
	int contador35=0,num,i,somat=0,contadort=0,somap=0,contadorp=0,contadorn=0;
	if(flagvetor) {
		for(i=0;i<10;i++) {
			if(vetor[i]%3==0 || vetor[i]%5==0) {
				contador35++;
			}
			if(vetor[i]>=0) {
				somap+=vetor[i];
				contadorp++;
			} else {
				contadorn++;
			}
			somat+=vetor[i];
			contadort++;
		}
	}
	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&num);
			if(num%3==0 || num%5==0) {
				contador35++;
			}
			if(num>=0) {
				somap+=num;
				contadorp++;
			} else {
				contadorn++;
			}
			somat+=num;
			contadort++;
		}
	}
	
	printf("\n\nHa %d multiplos de 3 e de 5\n",contador35);
	printf("Media de todos os numeros: %.2f\n",(float)somat/contadort);
	printf("Media de todos os numeros positivos: %.2f\n",(float)somap/contadorp);
	printf("Numeros negativos: %d\n\n",contadorn);
	
	system("pause");
	menu();
}

void exercicioF() {
	fflush(stdin);
	system("CLS");
	
	int i;
	
	if(flagvetor) {
		for(i=0;i<10;i++) {
			printf("Posicao %d: %d\n",i+1,vetor[i]);
		}
	}
 	else {
		for(i=0;i<10;i++) {
			printf("Digite o seu numero:");
			scanf("%d",&vetor[i]);
		}
		printf("Vetor criado com sucesso!\n\n");
 	}
	
	flagvetor=1;
	system("pause");
	menu();
}

int menu() {
	char opcoes[7]="abcdef0";
	char escolha;
	int flagescolha=1,i;
	system("CLS");
	printf("A. Contabilizar o numero de valores que sao negativos\n");
	printf("B. Contabilizar a media dos valores positivos inseridos\n");
	printf("C. Calcular a media com todos os valores inseridos\n");
	printf("D. Contabilizar os multiplos de 3 e de 5\n");
	printf("E. Todos os acima\n");
	if(flagvetor) {
		printf("F. Ver vetor criado\n");
	} else {
		printf("F. Ler para um vetor\n");
	}
	printf("0. Sair\n");
	do {
		escolha=tolower(getch());
		for(i=0;i<strlen(opcoes);i++) {
			if(escolha==opcoes[i]) {
				flagescolha=0;
				break;
			}
		}
	}while(flagescolha);
	
		switch(escolha) {
		case 'a':
			exercicioA();
			break;
		case 'b':
			exercicioB();
			break;
		case 'c':
			exercicioC();
			break;
		case 'd':
			exercicioD();
			break;
		case 'e':
			exercicioE();
			break;
		case 'f':
			exercicioF();
			break;
		case '0':
			return 0;
			break;
		case 27:
			return 0;
			break;
		default:
			break;
	}
}

void main() {

	
	while(menu());

	
	// printf("Hello World");
	// system("PAUSE");
}
