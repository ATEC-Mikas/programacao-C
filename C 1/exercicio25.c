#include <stdio.h>
#include <stdlib.h>

void main() {

	int n,i;
	
	do {
		printf("Quantos numeros:");
		scanf("%d",&n);
		if(n<1) 
			printf("Nao pode ser menor que um\n\n");
	} while(n<1);
	
	int vet[n];
	
	for(i=0;i<n;i++) {
		printf("[%d] Digite o numero: ",i+1);
		scanf("%d",&vet[i]);
	}

	int maior=0,menor=0;
	
	for(i=1;i<n;i++) {
		if(vet[i]>vet[maior])
			maior=i;
		else 
			if(vet[i]<vet[menor])
				menor=i;
	}
	
	printf("Maior numero: %d | Posicao: %d\nMenor numero: %d | Posicao: %d",vet[maior],maior,vet[menor],menor);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
