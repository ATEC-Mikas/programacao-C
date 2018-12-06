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

	for(i=0;i<n;i++) 
		printf("%d ",vet[i]);
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
