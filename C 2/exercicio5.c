#include <stdio.h>
#include <stdlib.h>

int Altura(int n, float vetor[]) {
	int i,contador=0;
	for(i=0;i<n;i++){
		if(vetor[i]>=1.50 && vetor[i]<=1.75) {
			contador++;
		}
	}
	return contador;
}

void main() {
	int n,i;
	
	do {
		printf("Digite o numero de pessoas:");
		scanf("%d",&n);
		if(n<=0) 
			printf("Nao pode ser menor ou igual a 0");
	} while(n<=0);
	
	float vet[n];
	
	for(i=0;i<n;i++) {
		do {
			printf("Digite a altura:");
			scanf("%f",&vet[i]);
			if(vet[i]<=0)
				printf("altura tem de ser superior a 0");
		} while(vet[i]<=0);
	}
	
	printf("Existe %d pessoas com altura entre 1.50m e 1.75m",Altura(n,vet));
	

	
	// system("pause");
}
