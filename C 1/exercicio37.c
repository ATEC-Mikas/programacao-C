#include <stdio.h>
#include <stdlib.h>

void main() {

	int l,c;
	
	do{
		printf("Numero de Linhas: ");
		scanf("%d",&l);
		if(l<0) 
			printf("Nao pode ser menos que zero\n\n");
	} while(l<0);
	
	do{
		printf("Numero de Colunas: ");
		scanf("%d",&c);
		if(c<0) 
			printf("Nao pode ser menos que zero\n\n");
	} while(c<0);
	

	
	if(l!=c) {
		
		printf("ERRO: Necessita de ser uma matriz quadrada");
	}
	else {
		int mat[l][c],vet[l];
		int i,j;
		for(i=0;i<l;i++) {
			for(j=0;j<c;j++) {
				printf("\n\nLinha %d\nColuna %d\nDigite o numero: ",i+1,j+1);
				scanf("%d",&mat[i][j]);
			}
		}
		for(i=0;i<l;i++) {
			vet[i]=mat[i][i];
			printf("%d ",vet[i]);
		}	
	}
	
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
