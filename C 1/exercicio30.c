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

	printf("\n\n");
	int y;

	do {
		printf("Quantos numeros:");
		scanf("%d",&y);
		if(y<1) 
			printf("Nao pode ser menor que um\n\n");
	} while(y<1);
	
	int vet2[n];
	
	for(i=0;i<y;i++) {
		printf("[%d] Digite o numero: ",i+1);
		scanf("%d",&vet2[i]);
	}

	int j,z,flag;
	
	printf("\n\n");
	
	for(i=0;i<n;i++) {
		flag=0;
		for(z=0;z<i;z++) {
			if(vet[i]==vet[z]) {
				flag=1;
			}
		}
		if(flag==0) {			
			for(j=0;j<y;j++) {
				if(vet[i]==vet2[j]){
					printf(" %d ",vet[i]);
					break;
				}
			}
		}
	}
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
