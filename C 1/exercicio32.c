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
	
	int mat[l][c];
	int i,j;
	
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			printf("\n\nLinha %d\nColuna %d\nDigite o numero: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}	
	
	if(l==c)
		printf("\n\nE uma matriz quadrada");
	else
		printf("\n\nNao e uma matriz quadrada");
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
