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

	int contador=0;
	
	printf("\n\n");
	
	for(i=1;i<n-1;i++) {
		if(vet[i]>vet[i-1] && vet[i]>vet[i+1]) {
			printf("%d ",vet[i]);contador++;i++;
		}
	}
	
	printf("\nEsta anomalia ocorre %d veze(s)",contador);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
