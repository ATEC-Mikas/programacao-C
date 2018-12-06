#include <stdio.h>
#include <stdlib.h>

void main() {

	int n,i;
	
	do {
		printf("Numero de funcionarios: ");
		scanf("%d",&n);
		if(n<1)
			printf("nao pode ser menor que um");
	}while(n<1);
	
	int mat[n][2];
	
	for(i=0;i<n;i++) {
		do {
			printf("\nDigite o codigo do funcionario:");
			scanf("%d",&mat[i][0]);
			if(mat[i][0]<0)
				printf("nao pode ser menor que 0");
		} while(mat[i][0]<0);
		do {
			printf("Digite o salario:");
			scanf("%d",&mat[i][1]);
			if(mat[i][1]<0)
				printf("nao pode ser menor que 0");
		} while(mat[i][1]<0);
	}
	
	for(i=0;i<n;i++) {
		if(mat[i][1]>1000) {
			printf("%d - %d\n",mat[i][0],mat[i][1]);
		}
	}
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
