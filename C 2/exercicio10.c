#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_aluno {
	char nome[50],curso[100];
	int matricula;
} TAluno;


void LeituraAlunos(TAluno *a, int n) {
	int i;
	for(i=0;i<n;i++) {
		fflush(stdin);
		printf("Nome do aluno N%d :",i+1);
		scanf("%s",&a[i].nome);
		fflush(stdin);
		strlwr(a[i].nome);
		fflush(stdin);
		printf("Curso do aluno N%d :",i+1);
		scanf("%[^\n]s",&a[i].curso);
		fflush(stdin);
		strlwr(a[i].curso);
		printf("Numero de matricula do aluno N%d: ",i+1);
		scanf("%d",&a[i].matricula);
		fflush(stdin);
		printf("\n");	
	}
	printf("\n\n");
}

void EscreverAlunos(TAluno *a,int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("Nome[%d]: %s\n",i+1,a[i].nome);
		printf("Curso[%d]: %s\n",i+1,a[i].curso);
		printf("N de matricula[%d]: %d\n",i+1,a[i].matricula);
		printf("\n");
	}
	printf("\n\n");
}

void OrganizarAlunos(TAluno *a, int n) {
	int i,j,r;
	TAluno aux;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			r=strcmp(a[i].nome,a[j].nome);
			if(r>0) {
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			} 
		}
	}
}

void main() {
	
	TAluno alunos[20];
	
	LeituraAlunos(alunos,5);
	OrganizarAlunos(alunos,5);
	EscreverAlunos(alunos,5);
	
	//system("pause");
}
