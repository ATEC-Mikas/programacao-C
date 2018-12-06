#include <stdio.h>
#include <stdlib.h>


int MaisVelho(int n,int vetor[]) {
	int i,maior= vetor[0];
	for(i=1;i<n;i++) {
		if(maior<vetor[i]) {
			maior=vetor[i];
		}
	}
	return maior;
}


void main() {
	int n,i;
	
	do {
		printf("Digite o numero de alunos:");
		scanf("%d",&n);
		if(n<=0) 
			printf("Nao pode ser menor ou igual a 0");
	} while(n<=0);
	
	int vet[n];
	
	for(i=0;i<n;i++) {
		do {
			printf("Digite a idade:");
			scanf("%d",&vet[i]);
			if(vet[i]<=0)
				printf("Idade tem de ser superior a 0");
		} while(vet[i]<=0);
	}
	printf("Idade de aluno mais velho: %d",MaisVelho(n,vet));
	

	
	// system("pause");
}
