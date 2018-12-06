#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_pessoa {
	char nome[50],endereco[100];
	long telefone;
} Pessoa;


void LeituraPessoas(Pessoa *a, int n) {
	int i;
	for(i=0;i<n;i++) {
		fflush(stdin);
		printf("Nome da pessoa N%d :",i+1);
		scanf("%s",&a[i].nome);
		fflush(stdin);
		strlwr(a[i].nome);
		fflush(stdin);
		printf("Endereco da pessoa N%d :",i+1);
		scanf("%[^\n]s",&a[i].endereco);
		fflush(stdin);
		strlwr(a[i].endereco);
		printf("Telefone da pessoa N%d: ",i+1);
		scanf("%d",&a[i].telefone);
		fflush(stdin);
		printf("\n");	
	}
	printf("\n\n");
}

void EscreverPessoas(Pessoa *a,int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("Nome[%d]: %s\n",i+1,a[i].nome);
		printf("Endereco[%d]: %s\n",i+1,a[i].endereco);
		printf("Telefone[%d]: %d\n",i+1,a[i].telefone);
		printf("\n");
	}
	printf("\n\n");
}


void main() {
	
	Pessoa pessoas[20];
	
	LeituraPessoas(pessoas,5);
	EscreverPessoas(pessoas,5);
	
	//system("pause");
}
