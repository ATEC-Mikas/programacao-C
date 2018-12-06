#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//void exercicioA() {
//
//
//
//	system("pause");
//	menu();
//}

void exercicioA() {
	
	system("CLS");
	int cont=0,i=0;
	char letra;
	char texto[100];
	
	fflush(stdin);
	printf("Digite o caracter: ");
	scanf("%c",&letra);
	fflush(stdin);

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!= '\0') {
		if(texto[i]==letra) {
			cont++;
		}
		i++;
	}
	
	printf("O caracter \"%c\" aparece %d vezes.\n",letra,cont);
	system("pause");
	menu();
}

void exercicioB() {
	
	system("CLS");
	int cont=0,i=0,j;
	char vogais[5]="aeiou";
	char texto[100];
	

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!= '\0') {
		for(j=0;j<5;j++) {
			if(texto[i]==vogais[j]) {
				cont++;
			}
		}
		i++;
	}
	
	printf("Aparecem %d vogais.\n",cont);

	system("pause");
	menu();
}

void exercicioC() {
	
	system("CLS");
	int i=0;
	char letra;
	char texto[100];

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!= '\0') {
		if(texto[i]==' ') {
			texto[i]='.';
		}
		i++;
	}
	
	printf("\n%s",texto);


	system("pause");
	menu();
}

void exercicioD() {
	
	system("CLS");
	int i=0,c=-1;
	char letra;
	char texto[100];
	
	fflush(stdin);
	printf("Digite o caracter: ");
	scanf("%c",&letra);
	fflush(stdin);

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!='\0') {
		if(texto[i]==letra) {
			c=i;
			break;
		}
		i++;
	}
	
	if(c!=-1) {
		printf("O caracter \"%c\" aparece na posicao %d.\n",letra,c+1);
	} else {
		printf("O caracter \"%c\" nao aparece na frase..\n",letra);
	}


	system("pause");
	menu();
}

void exercicioE() {
	
	system("CLS");
	int i=0,x,y,z,aux;
	char letra;
	char texto[100];

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);
	
	do {
		printf("Posicao 1:");
		scanf("%d",&x);
		if(x<0){
			printf("\nTem de ser um numero positivo\n\n");
		}
	} while(x<0);
	
	do {
		printf("Posicao 2:");
		scanf("%d",&y);
		if(y<0){
			printf("\nTem de ser um numero positivo\n\n");
		}
	} while(y<0);

	
	z=strlen(texto)-2;
	
	if(x>y) {
		aux=x;
		x=y;
		y=aux;
	}
	
	if(y<z){
		for(i=x;i<y;i++) {
			printf("%c",texto[i]);
		}
	} else {
		printf("Erro posicao %d maior que posicoes da frase\n",y);
	}
	
	printf("\n");


	system("pause");
	menu();
}

void exercicioF() {

	int z;
	char texto[100];

	fflush(stdin);
	printf("Digite a frase numerica: ");
	scanf("%s",&texto);
	fflush(stdin);	
	
	z=atoi(texto);
	
	
	printf("Valor numerico: %d\n",z);


	system("pause");
	menu();
}

int menu() {
	char opcoes[7]="abcdef0";
	char escolha;
	int flagescolha,i;
	system("CLS");
	printf("A. Conta as ocorrencias de um caracter numa frase\n");
	printf("B. Contar o numero de vogais numa frase\n");
	printf("C. Substituir todos os espacos de uma frase por um ponto\n");
	printf("D. Descobrir posicao de certo caracter\n");
	printf("E. Devolver conteudo de posicoes\n");
	printf("F. Converter frase em numeros\n");
	printf("0. Sair\n");
	do {
		flagescolha=1;
		escolha=tolower(getch());
		for(i=0;i<(strlen(opcoes))-2;i++) {
			if(escolha==opcoes[i]) {
				flagescolha=0;
				break;
			}
		}
	}while(flagescolha==1);
	
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
		default:
			printf("Partiu o programa.");
	}
}

void main() {

	
	while(menu());

	
	// printf("Hello World");
	// system("PAUSE");
}
