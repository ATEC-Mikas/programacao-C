#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

	int n,i,j,aux;
	
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
	
	for(i=0;i<n;i++) {
		for(j=i;j<n;j++) {
			if(vet[i]<vet[j]) {
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}

	printf("MAIOR [ %d",vet[0]);	
	for(i=1;i<n;i++) {
		printf(" ,%d ",vet[i]);
	}
	printf("] MENOR",vet[n-1]);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
