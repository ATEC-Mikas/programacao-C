#include <stdio.h>
#include <stdlib.h>

void main() {

	int n,i;
	
	do {
		printf("Numero de alunos: ");
		scanf("%d",&n);
		if(n<1)
			printf("nao pode ser menor que um");
	}while(n<1);
	
	int mat[n][2];
	
	for(i=0;i<n;i++) {
		do {
			printf("\nDigite o numero de aluno:");
			scanf("%d",&mat[i][0]);
			if(mat[i][0]<0)
				printf("nao pode ser menor que 0");
		} while(mat[i][0]<0);
		do {
			printf("Digite a media final:");
			scanf("%d",&mat[i][1]);
			if(mat[i][1]<0 || mat[i][1]>20)
				printf("Nota invalida\n");
		} while(mat[i][1]<0 || mat[i][1]>20);
	}
	
	int maior=0;
	
	for(i=1;i<n;i++) {
		if(mat[i][1] > mat[maior][1]) {
			maior=i;
		}
	}
	
	for(i=0;i<n;i++) {
		if(mat[i][1]==mat[maior][1]) {
			printf("Numero: %d - Nota: %d\n",mat[i][0],mat[i][1]);
		}
	}
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
