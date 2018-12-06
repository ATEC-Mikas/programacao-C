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
	
	int mat[l][c],vet[l];
	int i,j;
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			
//			printf("\n\nLinha %d\nColuna %d\nDigite o numero: ",i+1,j+1);
//			scanf("%d",&mat[i][j]);
			
			//-------------------Testes--------------
			if(i%2==0)
			{
				mat[i][j]=j+1;
			}
			else {
				mat[i][j]=c-j;
			}
			//---------------------------------------
		}
	}

	if(l%2==0) {
		if(c%2==0) {
			printf(" %d %d \n %d %d",mat[l/2-1][c/2-1],mat[l/2-1][c/2],mat[l/2][c/2-1],mat[l/2][c/2]);
		}
		else {
			printf(" %d \n %d",mat[l/2-1][c/2],mat[l/2][c/2]);
		}
	}
	else {
		if(c%2==0) {
			printf(" %d %d",mat[l/2][c/2-1],mat[l/2][c/2]);
		}
		else {
			printf(" %d",mat[l/2][c/2]);
		}
	}
	printf("\n\n");
	
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
