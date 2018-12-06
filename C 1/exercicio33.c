#include <stdio.h>
#include <stdlib.h>

void main() {

	int l,c,l2,c2;
	
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

	do{
		printf("Numero de Linhas: ");
		scanf("%d",&l2);
		if(l2<0) 
			printf("Nao pode ser menos que zero\n\n");
	} while(l2<0);
	
	do{
		printf("Numero de Colunas: ");
		scanf("%d",&c2);
		if(c2<0) 
			printf("Nao pode ser menos que zero\n\n");
	} while(c2<0);
	
	if(l!=l2 && c!=c2) {
		printf("Impossivel de fazer a soma");
	}
	else {
		int mat[l][c],mat2[l2][c2],mat3[l][c];
		int i,j;
		
		for(i=0;i<l;i++) {
			for(j=0;j<c;j++) {
				printf("\n\nLinha %d\nColuna %d\nDigite o numero: ",i+1,j+1);
				scanf("%d",&mat[i][j]);
			}
		}	
		for(i=0;i<l;i++) {
			for(j=0;j<c;j++) {
				printf("\n\nLinha %d\nColuna %d\nDigite o numero: ",i+1,j+1);
				scanf("%d",&mat2[i][j]);
			}
		}
		
		for(i=0;i<l;i++) {
			for(j=0;j<c;j++) {
				mat3[i][j]=mat[i][j]+mat2[i][j];
				printf("%d ",mat3[i][j]);
			}
			printf("\n");
		}
		
	}
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
