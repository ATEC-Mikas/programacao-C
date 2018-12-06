#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_disciplina {
	int nota;
	char nome[50];
} disciplina_tipo;

typedef struct s_aluno {
	char nome[10];
	char apelido[10];
	int idade;
	disciplina_tipo disciplinas[100];
} aluno_tipo;

void preencherStruct(aluno_tipo *aluno,int n) {
	int i,j;
	for(i=0;i<n;i++) {
		fflush(stdin);
		printf("Nome do aluno:");
		scanf("%s",&aluno[i].nome);
		fflush(stdin);
		printf("Apelido do aluno:");
		scanf("%s",&aluno[i].apelido);
		fflush(stdin);
		do {
			printf("Idade do aluno:");
			scanf("%d",&aluno[i].idade);
			if(aluno[i].idade<=0) {
				printf("\nTem de ser superior a 0 \n\n");
			}
		} while(aluno[i].idade<=0);
		do {
			printf("Quantas disciplinas:");
			scanf("%d",&aluno[i].disciplinas[0].nota);
			strcpy(aluno[i].disciplinas[0].nome,"INVALID");
			if(aluno[i].disciplinas[0].nota<0)
				printf("Numero tem de ser positivo");
		} while(aluno[i].disciplinas[0].nota<0);
		for(j=1;j<=aluno[i].disciplinas[0].nota;j++) {
			fflush(stdin);
			printf("Nome da disciplina:");
			scanf("%s",&aluno[i].disciplinas[j].nome);
			fflush(stdin);
			do {
				printf("Nota da disciplina:");
				scanf("%d",&aluno[i].disciplinas[j].nota);
				if(aluno[i].idade<=0) {
					printf("\nTem de ser superior a 0 \n\n");
				}
			} while(aluno[i].idade<=0);
		}
		printf("\n\n");
		fflush(stdin);
	}
}

void mostrarAluno(aluno_tipo *aluno,int n) {
	int i,j;
	for(i=0;i<n;i++) {
		printf("Nome do aluno[%d]: %s\n",i+1,aluno[i].nome);
		printf("Apelido do aluno[%d]: %s\n",i+1,aluno[i].apelido);
		printf("Idade do aluno[%d]: %d\n",i+1,aluno[i].idade);
		for(j=1;j<=aluno[i].disciplinas[0].nota;j++) {
			printf("Nota a %s : %d\n",aluno[i].disciplinas[j].nome,aluno[i].disciplinas[j].nota);
		}
		printf("\n\n");
	}
}

void main() {
	
	aluno_tipo alunos[50];
	int n;
	
	do {
		printf("Deseja ler quantos alunos:");
		scanf("%d",&n);
		if(n<0) 
			printf("Tem de ser um numero positivo");
	}while(n<0);
	
	preencherStruct(alunos,n);
	mostrarAluno(alunos,n);
	
	//system("pause");
}
