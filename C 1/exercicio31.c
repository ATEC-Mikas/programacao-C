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
	
	int vet2[n];
	
	for(i=0;i<n;i++) {
		printf("[%d] Digite o numero: ",i+1);
		scanf("%d",&vet[i]);
		vet2[i]=vet[i];
	}
	
	int j,aux;
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(vet[i]<vet[j]) {
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
	for(i=0;i<n;i++) {
		printf(" %d ",vet[i]);
	}
	
	
	
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
