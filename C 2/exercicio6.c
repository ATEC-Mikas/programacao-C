#include <stdio.h>
#include <stdlib.h>

int PesquisarNif(int nif,int n,int vetor[]) {
	int i;
	for(i=0;i<n;i++) {
		if(nif==vetor[i]) {
			return i;
		}
	}
	return -1;
}

void main() {
	int n,i;
	
	do {
		printf("Digite o numero de pessoas:");
		scanf("%d",&n);
		if(n<=0) 
			printf("Nao pode ser menor ou igual a 0\n\n");
	} while(n<=0);
	
	int vet[n];
	
	for(i=0;i<n;i++) {
		do {
			printf("Digite o NIF:");
			scanf("%d",&vet[i]);
			if(vet[i]<=0)
				printf("nif invalido tente novamente\n\n");
		} while(vet[i]<=0);
	}
	
	int pnif,rnif;
	
	printf("\n\n");
	do {
		do {
			printf("Digite o nif a procurar: ");
			scanf("%d",&pnif);
			if(pnif<0) {
				printf("nif invalido tente novamente\n\n");
			}
		} while(pnif<0);
		rnif=PesquisarNif(pnif,n,vet);
		if(rnif!=-1) {
			printf("Nif %d encontrado na posicao %d",pnif,rnif);
		} else {
			printf("Nif nao foi encontrado.\n\n");
		}
	} while(rnif==-1);
	

	
	// system("pause");
}
